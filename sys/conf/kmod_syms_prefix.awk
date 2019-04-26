# $FreeBSD: releng/12.0/sys/conf/kmod_syms_prefix.awk 319719 2017-06-08 20:41:28Z jtl $

# Read global symbols from object file.
BEGIN {
        while ("${NM:='nm'} " ARGV[1] | getline) {
                if (match($0, /^[^[:space:]]+ [^AU] (.*)$/)) {
                        syms[$3] = $2
                }
        }
        delete ARGV[1]
}

# Strip commons, make everything else local.
END {
        for (member in syms) {
                printf("--redefine-sym=%s=%s%s\n", member, prefix, member);
        }
}
