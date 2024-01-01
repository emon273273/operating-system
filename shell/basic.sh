# ##et is a builtin function of Bash that allows us to do simple arithmetic. It follows the basic format: let <arithmetic expression>

# let emon=1+2
# echo $emon

# let emon1="1+7"
# echo $emon1

#  let emon1++
# echo $emon1 #9

# #expr is similar to let except instead of saving the result to a variable it instead prints the answer.

# # expr 10 % 2 #space must dite hbe


# # expr 5 + 4 # 9
# # expr "5 + 4" # 5 + 4
# # expr 5+4 # 5+4



#!/bin/bash
echo "Enter a string:"
read input_string
alphabets=0
digits=0
special_characters=0
for ((i=0; i<${#input_string}; i++)); do
char="${input_string:$i:1}"
if [[ "$char" =~ [a-zA-Z] ]]; then
alphabets=$((alphabets+1))
elif [[ "$char" =~ [0-9] ]]; then
digits=$((digits+1))
else
special_characters=$((special_characters+1))
fi
done
echo "Output:"
echo "Alphabets = $alphabets"
echo "Digits = $digits"
echo "Special characters = $special_characters"


