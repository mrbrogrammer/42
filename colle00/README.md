
Hooray! you have completed colle00/rush00

$To compile all files 
gcc -c -Wall -Werror -Wextra main.c rush00.c ft_putchar.c


$To create an archive or library 
ar rc libout.a ./*.o

$If you want delet dependences
rm -fr ./*.o;

$Then you will have to create your executable file
gcc main.c libout.a 

$> ls -al
files to turn in 
$>
