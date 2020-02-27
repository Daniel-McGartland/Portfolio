#! /bin/bash
#Author: Daniel McGartland (section 001)
#Date:   9/22/2019
#What:   A bash code to monitor processes using a specific ammount of memory or more

#if to check if there is a command line input
if [ $# -ne 1 ]
then
	echo "Too few or too many memory parameter inputs"
	exit 0
fi
#if to check if command line input is a whole number
if ! [[ "$1" =~ ^[0-9]+$ ]]
then
	echo "Memory usage parameter is not a positive integer. Aborting..."
	exit 0 
fi
#if to check if command line input is within our range
if ! [ "$1" -le 99 -a "$1" -ge 1 ]
then
	echo "Memory usage parameter is not between 1 - 99. Aborting..."
	exit 0 
fi

#trap function to block ctrl-c once
trap 'blockonce' 2
blockonce()
{
	set -xv
	echo "SIGINT ignored. Enter ^C again to terminate program"
	trap 2
	set +xv
}

#while to loop the print until order to exit
while true; do
	date
	echo "Processes occupying $1% or more system memory:"
	ps -eo pid,user,%mem --sort -%mem | head -$1
	sleep 10
done	
