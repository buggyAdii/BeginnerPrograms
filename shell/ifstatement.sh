#!/bin/bash
echo -n "Enter a number: "
read num
if [[ $num -gt 10 ]]
then
echo "Number is greator than 10."
else
echo "Number is less tha 10."
fi
