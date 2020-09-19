#!/bin/bash
echo "Enter a number"
read num
case $num in
100)
	echo "Hundred"
	;;
200)
	echo "Two Hundred"
	;;
*)
echo "neither 100 nor 200"
;;
esac
