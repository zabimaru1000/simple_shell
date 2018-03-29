# Creating a Linux Shell in C, bkash interpreter
This project was used to help better understand how Linux System Programming works
by using system calls and functions to create a command line interface that uses
basic functionality from the bash shell.

## Get started
Follow these instructions to test a demo of the bkash shell interpreter.

On the main respository, select clone or download and copy the link to your clipboard.

In your command line install git if you do not have it:

```
sudo apt-get install git
```
After git is installed use the command

```
git clone https://github.com/zabimaru1000/simple_shell.git
```
Once the repository is cloned, open the directory using

```
$ cd simple_shell
```
Finally compile and execute using:

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
$ ./hsh

```
## Example

```
$ ./hsh
$ bkash$ exit
$
//The program terminates and goes back into the bash shell.

```

## Authors

[Brian Chew](https://github.com/zabimaru1000)

[Kevan Lucchini](https//github.com/kevanlucc)
