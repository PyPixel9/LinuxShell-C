echo DONE
pwd DONE
ls
cat DONE
date DONE
rm DONE
mkdir DONE
cd

--------------------------------------------

PART 1

1. Echo 
FUNCTIONALITIES 
printing out lines of code
printing out variables and declaring variables CORNER CASES
scanf only scans the first word but echo can scan entire line hence this corner case is handled
if starting and ending with inverted quotes only the text in the middle of the 2 double quotes is printed 
eg: 
% echo utkarsh
utkarsh
% echo "utkarsh"
utkarsh
% x= 5
echo the value of x is $x
the value of x is 5
% echo you need me i dont need you
you need me i dont need you


2. Date 
FUNCTIONALITIES
date : prints the current local time 
date -u : prints the UTC time
CORNER CASES HANDLED
if the command date -uuuu... is given it still reads it as date -u ie: only the first character after - is read, this corner case is handled.
if any unrecognized date command is called eg: date -r gives out an error 
"usage: date [-jnRu] [-d dst] [-r seconds] [-t west] [-v[+|-]val[ymwdHMS]] ... 
            [-f fmt date | [[[mm]dd]HH]MM[[cc]yy][.ss]] [+format]"
this case is also covered
eg:
% date -uuu
UTC Sun Oct 23 10:59:36 2022
% date -u
UTC Sun Oct 23 10:59:38 2022
% date
IST Sun Oct 23 16:29:32 2022
% date -r
date: illegal option
usage: date [-jnRu] [-d dst] [-r seconds] [-t west] [-v[+|-]val[ymwdHMS]] ... 
	[-f fmt date | [[[mm]dd]HH]MM[[cc]yy][.ss]] [+format]



3. pwd
FUNCTIONALITIES
pwd : prints the 'COMPLETE' path of the current working directory 
pwd --help : shows info about the various commands and flags of the pwd command 
pwd -- : command is equivalent to normal pwd command
CORNER CASES HANDLED
"pwd --" command is treated equivalent to the normal "pwd" command this corner case is handled
if the number of arguments are more than permitted then the pwd command points out the error by giving out "pwd: too many arguments" ie: the issue of too many arguments being given in pwd is sorted 



4. rm 
FUNCTIONALITIES
rm xyz: deletes the file with the file name as  'xyz'
rm -i xyz: gives a warning before deleting the file with the name as 'xyz'. asks for y n input from user before deleting (facing a lot of buffer issue, if doesnot work please terminate and restart the terminal) 
NOTE: if problem still persists make a new makefile
CORNER CASES HANDLES

5. cat 
FUNCTIONALITIES
cat xyz &t : opens and prints the text of the file named xyz
FUNCTIONAILITY 2 NOT YET CODED
CORNER CASES HANDLES
if file xyz is not found in the directory gives the output 'cat: ejhf: No such file or directory' 
if the file you try to open is a cat then it gives out the output 'cat: filename: Is a directory'























