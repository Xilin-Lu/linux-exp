#!/bin/bash
a=0
b=1
sum=0

for ((i = 0; i < 10; i++)); do
    printf '%s ' "$a"
    sum=$((sum + a))
    next=$((a + b))
    a=$b
    b=$next
done

printf '\nSum = %s\n' "$sum"