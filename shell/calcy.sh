#!/bin/bash
i="y"
echo -n "Enter first number: "
read a
echo -n "Enter second number: "
read b
while [ $i == y ]
do
echo "Enter Choice :"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
read ch

case $ch in
  1)res=`echo $a + $b = $((a+b))`
  ;;
  2)res=`echo $a - $b = $((a-b))`
  ;;
  3)res=`echo $a \* $b = $((a*b))`
  ;;
  4)res=`echo $a / $b = $((a/b))`
  ;;
  *)echo "Invalid Choice"
    continue
  ;;
esac
echo "Result : $res"
echo -n "Do you want to continue (y/n) ? "
read i
if [ $i != 'y' ]
then
	exit
fi
done
