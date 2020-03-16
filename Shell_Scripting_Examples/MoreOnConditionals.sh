## Given three integers (X, Y, and Z) representing 
## the three sides of a triangle, identify whether the triangle is Scalene, Isosceles, or Equilateral


#!/bin/bash
read a
read b
read c 
if [ "$a" -eq "$b" ] || ["$b" -eq "$c"] || ["$c" -eq "$a"]
then 
    if [ "$a" -eq "$b" ] && [ "$b" -eq "$c" ]
    then
        echo "EQUILATERAL"
    else
        echo "ISOSCELES"
    fi  
else
	echo "SCALENE"    
fi
