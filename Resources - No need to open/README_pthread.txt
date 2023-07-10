ls DONE
pwd DONE
echo DONE
cd
cat DONE
date DONE
rm DONE
mkdir DONE

IF PROGRAM IS NOT WORKING AS INTENDED A COMMAND: 'clear' HAS BEEN ADDED, THIS RESTARTS THE FILE USING 'exec' WHICH HELPS GETS RID OF ALL THE BUFFER GENERATED WHICH IS USUALLY THE CAUSE FOR THE MISFUNCTIONING, IT CAN ALSO BE USED IF THE COMMAND WINDOW LOOKS TO CLUTTERED TO GET A CLEAN SLATE AGAIN







echo 
1. prints single words 
2. can print variables which aredefined using $
-> excludes "____" , handles printing of variables using $x







pwd 
1. pwd &t: prints the COMPLETE location of the current working directory 
2. pwd --help &t: prints the help page and availiable command of the pwd command 
-> exception handled: 'pwd --' is same as pwd , gives error of too many arguments if too many arguments given 
EXAMPLE: 
| pwd         
/Users/utkarsh/Desktop/TER/untitled folder
| pwd --help
pwd: pwd [-LP]
	Print the name of the current working directory.

	Options:
	 -l  	print the value of $PWD if it names the current working
			directory
	 -P 	print the phystcal directory, without any symboltc links
	
	By default, "pwd' behaves as if '-L' were specified.

	Exit Status:
	Returns 0 unless an invalid option is given or the current directory cannot be read.
| pwd &t
/Users/utkarsh/Desktop/TER/untitled folder
| pwd --help &t
pwd: pwd [-LP]
	Print the name of the current working directory.

	Options:
	 -l  	print the value of $PWD if it names the current working
			directory
	 -P 	print the phystcal directory, without any symboltc links
	
	By default, "pwd' behaves as if '-L' were specified.

	Exit Status:
	Returns 0 unless an invalid option is given or the current directory cannot be read.
| pwd --
/Users/utkarsh/Desktop/TER/untitled folder
| pwd -- &t
/Users/utkarsh/Desktop/TER/untitled folder
| pwd eifj
pwd: too many arguments
| pwd ufh &t
pwd: too many arguments








ls
1. ls -a &t : prints all files in the directory including the hidden files 
2. ls &t : prints all the file names which are are present in the current directory 
-> 'ls --' is treated the same as ls , if an invalid filename is written alongside ls tell the user that no such file/ directory exists eg: 'ls rufh &t' outputs 'ls: No such file or directory exists' warning









date 
1. date &t: outputs the local (IST) time
2. date -u &t: outputs the UTC time
-> date -uuuuu still works as date -u , wrong command with date eg: date -r gives incorrect arguments and prompts the user about what the right arguments are
EXAMPLE
| date
| IST Tue Oct 25 14:48:32 2022
date -u
| UTC Tue Oct 25 09:18:36 2022
date &t
IST Tue Oct 25 14:48:46 2022
| date -u &t
UTC Tue Oct 25 09:18:58 2022
| date -uuuu
| UTC Tue Oct 25 09:19:20 2022
date -uuuu &t
UTC Tue Oct 25 09:19:25 2022
| date -r
date: illegal option
usage: date [-jnRu] [-d dst] [-r seconds] [-t west] [-v[+|-]val[ymwdHMS]] ... 
	[-f fmt date | [[[mm]dd]HH]MM[[cc]yy][.ss]] [+format]
| date -r &t
date: illegal option
usage: date [-jnRu] [-d dst] [-r seconds] [-t west] [-v[+|-]val[ymwdHMS]] ... 
	[-f fmt date | [[[mm]dd]HH]MM[[cc]yy][.ss]] [+format]






rm 
1. rm xyz &t: removes file with filename xyz
2. rm -i xyz &t: removes file with file name xyz if the user says yes
-> most corner cases related to rm are handled due to the implementation 







mkdir 
1. mkdir xyz &t : makes directory with the name xyz
2. mkdir --help &t : prints help file for mkdir and outputs the various commands
-> most of the corner cases are handled due to the implementation 






cat 
1. cat xyz &t : opens and prints the text of the file named xyz
2. cat abc xyz &t : opens and prints the text of the files abc and xyz 
-> if file xyz is not found in the directory gives the output 'cat: ejhf: No such file or directory' , if the file you try to open is a cat then it gives out the output 'cat: filename: Is a directory'













