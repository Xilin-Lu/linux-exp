count=$#
cmd=echo

while [ "$count" -gt 0 ]; do
    cmd="$cmd \"\${$count}\""
    count=$((count - 1))
done

eval "$cmd"