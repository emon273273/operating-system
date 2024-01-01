
# # # # emon2(){

# # # #     echo "this is 2nd function $1"
# # # # }
# # # # emon(){

# # # #     echo "hello $1 $2"

# # # # emon2 run
# # # # }

# # # # emon emon saheb



# # # abc(){

# # #     echo $1
# # # }

# # # def(){
# # #  echo $2
# # #     abc $1
# # # }

# # # def 54 23


# # factorial(){

# #     if [ $1 -eq 0] || [$1 -eq 1]; then
# #     echo 1

# #     else
# #     previous_factorial=$(factorial $(($1 - 1)))

# #     echo $(($1 * $previous_factioral))

# #     fi
# # }


# # echo "enter a number"

# # read x
# # factorial $x

# # mam er code

# # factorial() {
# #     if [ $1 -eq 0 ] || [ $1 -eq 1 ]; then
# #         echo 1
# #     else
# #         previous_factorial=$(factorial $(( $1 - 1 )))
# #         echo $(( $1 * $previous_factorial ))
# #     fi
# # }


# # echo "Enter a number:"
# # read x
# # factorial $x


# #array
# arr=(prakhar ankit 1 rishabh manish abhinav)

# echo ${arr[@]}

# echo ${arr[@]:1}

# #particular element er char print

# echo ${arr[0]:1}

# echo ${arr[1]:2} #kit

# echo ${arr[0]:-1:-3}

# #search in array

# echo ${arr[@]/*[aA]*/} #1 dibe

# echo ${arr[@]//a/A} #jekhanei a pabe sekhain A dara replace
# echo ${arr[@]/a/A} #prothom element a thakle A dara replace


# #loop dara print array
arr1=(1 12 31 4 5)
i=0

# Loop up to the size of the array, starting from index i=0
while [ $i -lt ${#arr1[@]} ]
do
    # Print index and ith element
    echo "Index $i: ${arr1[$i]}"

    # Increment the i by 1
    i=$(expr $i + 1)
done


#for loop
echo "for loop"



for il in "${arr1[@]}"
do 
    echo $il
done
