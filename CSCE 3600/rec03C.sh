#!/bin/bash

ran=$[RANDOM%10+1]
num=0

while [ $ran -ne $num ]
do	
	read -p "Enter a number between 1 & 10: " num
done

echo "Congragulations, the number is $ran"
