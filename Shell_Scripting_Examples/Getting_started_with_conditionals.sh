##  Read in one character from the user (this may be 'Y', 'y', 'N', 'n'). If the character
##  is 'Y' or 'y' display "YES". If the character is 'N' or 'n' 
##  display "NO". No other character will be provided as input.


#!/bin/bash
read input
if [ "$input" = "Y" ] ||[ "$input" = "y" ]
then
	echo "YES"
elif [ "$input" = "N" ] ||[ "$input" = "n" ]
then
	echo "NO"   
fi
