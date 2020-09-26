#!/bin/bash
echo enter value of a and b: 
read a b
c=$((a+b))
d=$((a*a*a + b*b*b + 3*a*b*c))
echo '(a+b)^3'=$d
