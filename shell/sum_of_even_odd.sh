#!/bin/bash
echo "Enter n value"
read n
sumodd=0
sumeven=0
i=0
while [ $i -lt $n ]
do
echo "Enter number"
read num
if [ $(expr $num % 2) -ne 0 ]
then
sumodd=$(expr $sumodd + $num)
else
sumeven=$(expr $sumeven + $num)
fi
i=$(expr $i + 1)
done
echo "Sum of the odd numbers = $sumodd"
echo "Sum of the even numbers = $sumeven"