#echo "hello this is emonsab"

#variables

#system variables

echo $BASH
echo $BASH_VERSION
echo $HOME
echo $PWD


#user variable

name=Mark

echo $name
echo "name is $name"

#variable operation

a=$((4+4))

b=$(($a + 4))


echo $a

echo "b is $b"
#let b++
#or amra chaile nicer vabeo ++ korte pari

((b++))

echo $b #13

#find length of the variable


a1="hello my name is emon"
echo ${#a1} #21