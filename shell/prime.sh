#!/bin/bash
echo 'Enter a Number: '
read num
if [ $num -le 1 ]
then
echo 'Not Prime'
for[ i=2; i -lt $num; i++ ]
	if [$((num%i)) -eq 0 ]
	then
		echo Not Prime
		fi
echo '$num is Prime'
fi
