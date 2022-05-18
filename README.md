# simple_shell 💻

## Description
This program is shell-based, that is, it behaves like a command line interpreter. Like Shell, this program receives input, interprets it for the operating system, and manages the output.

## Usage
1. Clone the repository:
    ```
    git clone https://github.com/yuriquezada/simple_shell.git
    ```
2. Locate ourselves in the root folder of the directory.
    
3. Inside the simple_shell folder, run the following command:
    ```
    valgrind  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell
    ```
4. Finally run the program by typing the following:
    ```
    ./shell
    ```
    The output of the new shell is the following:
    ```
    julien@ubuntu:~/shell$./shell
    $
    ```
## Project structure

| File | Description |
| --- | --- |
| `README.md` | Contains summary and key information about this project. |
| `AUTHORS` | List all the people who have contributed content to the repository |
| `man_1_simple_shell` | Display the user manual of any command that we can run on the terminal. It provides a detailed view of the command which includes NAME, SYNOPSIS, DESCRIPTION, BUGS, SEE ALSO, NOTES, and AUTHORS |
| `hack/generate-authors.sh` | Generates the list of project authors |
| `shell` | Allows us to run the new Shell |
| `file.h` | Contains C function declarations and macro definitions to be shared between several source files |
| `main.c` | Contains our ``main()`` function |
| `tokenizer.c` | It receives an input in the shell and identifies each value entered |
| `matcher.c` | Relates the input entered with the function to be executed in shell |
| `prints.c` | Prints the octal unsigned integer conversion |
| `free.c` | Contains the function to free up memory |
| `env.c` | Prints the environment of the current process |

## Example

If we want to print all the variables of the current environment, we will write ``env`` in our new ``shell``
````
user@ubuntu:~/shell$ ./shell
$ env
HOSTNAME=ef1189cc98cb
LANGUAGE=en_US:en
PWD=/root/simple_shell
TZ=America/Los_Angeles
HOME=/root
LANG=en_US.UTF-8
LS_COLORS=rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd                            =40;33;01:or=40;31;01:mi=00:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;4                            4:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arc=01;31:*.arj=01;31:*.taz=01;31:*.lha=01;                            31:*.lz4=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.tzo=01;31:*.t7                            z=01;31:*.zip=01;31:*.z=01;31:*.dz=01;31:*.gz=01;31:*.lrz=01;31:*.lz=01;31:*.lzo                            =01;31:*.xz=01;31:*.zst=01;31:*.tzst=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.                            tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;3                            1:*.sar=01;31:*.rar=01;31:*.alz=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=                            01;31:*.rz=01;31:*.cab=01;31:*.wim=01;31:*.swm=01;31:*.dwm=01;31:*.esd=01;31:*.j                            pg=01;35:*.jpeg=01;35:*.mjpg=01;35:*.mjpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=0                            1;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.t                            iff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;                            35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.ogm=01;35:*.m                            p4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35                            :*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=0                            1;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf                            =01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.m4a=00;36:*                            .mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.oga=00;36:*.opus=00;36:*.spx=00;36:*.xspf=00;36:
LESSCLOSE=/usr/bin/lesspipe %s %s
TERM=xterm
LESSOPEN=| /usr/bin/lesspipe %s
SHLVL=1
LC_ALL=en_US.UTF-8
PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
OLDPWD=/root/simple_shell/hack
_=./shell
$
````
## Tasks
| 0. README, man, AUTHORS |
| --- |

- Write a README
- Write a man for your shell.
- You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker |

Repo:
- GitHub repository: simple_shell
- File: README.md, man_1_simple_shell, AUTHORS

| 1. Betty would be proud |
| --- |

Write a beautiful code that passes the Betty checks
Repo:
- GitHub repository: simple_shell

| 2. Simple shell 0.1 |
| --- |

- Write a UNIX command line interpreter.

Usage: ``simple_shell``
Your Shell should:

- Display a prompt and wait for the user to type a command. A command line always ends with a new line.
- The prompt is displayed again each time a command has been executed.
- The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
- The command lines are made only of one word. No arguments will be passed to programs.
- If an executable cannot be found, print an error message and display the prompt again.
- Handle errors.
- You have to handle the “end of file” condition (Ctrl+D)

You don’t have to:
- use the PATH
- implement built-ins
- handle special characters : ``"``, ``'``, `` ` ``, ``\``, ``*``, ``&``, ``#``
- be able to move the cursor
- handle commands with arguments

````
julien@ubuntu:~/shell$ ./shell 
#cisfun$ ls
./shell: No such file or directory
#cisfun$ /bin/ls
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c  stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
#cisfun$ /bin/ls -l
./shell: No such file or directory
#cisfun$ ^[[D^[[D^[[D
./shell: No such file or directory
#cisfun$ ^[[C^[[C^[[C^[[C
./shell: No such file or directory
#cisfun$ exit
./shell: No such file or directory
#cisfun$ ^C
julien@ubuntu:~/shell$ echo "/bin/ls" | ./shell
#cisfun$ barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
#cisfun$ julien@ubuntu:~/shell$
````
Repo:
- GitHub repository: simple_shell


| 3. Simple shell 0.2 |
| --- |

Simple shell 0.1 +
- Handle command lines with arguments

Repo:
- GitHub repository: simple_shell

| 4. Simple shell 0.3 |
| --- |

Simple shell 0.2 +
- Handle the PATH
- fork must not be called if the command doesn’t exist
````
julien@ubuntu:~/shell$ ./shell_0.3
:) /bin/ls
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait
:) ls
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait
:) ls -l /tmp 
total 20
-rw------- 1 julien julien    0 Dec  5 12:09 config-err-aAMZrR
drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-colord.service-V7DUzr
drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-rtkit-daemon.service-ANGvoV
drwx------ 3 root   root   4096 Dec  5 12:07 systemd-private-062a0eca7f2a44349733e78cb4abdff4-systemd-timesyncd.service-CdXUtH
-rw-rw-r-- 1 julien julien    0 Dec  5 12:09 unity_support_test.0
:) ^C
julien@ubuntu:~/shell$ 
````

Repo:
- GitHub repository: simple_shell

| 5. Simple shell 0.4 |
| --- |

Simple shell 0.3 +
- Implement the exit built-in, that exits the shell
- Usage: exit
- You don’t have to handle any argument to the built-in exit

Repo:
- GitHub repository: simple_shell

| 6. Simple shell 1.0 |
| --- |

Simple shell 0.4 +
- Implement the env built-in, that prints the current environment
````
julien@ubuntu:~/shell$ ./simple_shell
$ env
USER=julien
LANGUAGE=en_US
SESSION=ubuntu
COMPIZ_CONFIG_PROFILE=ubuntu
SHLVL=1
HOME=/home/julien
C_IS=Fun_:)
DESKTOP_SESSION=ubuntu
LOGNAME=julien
TERM=xterm-256color
PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
DISPLAY=:0
$ exit
julien@ubuntu:~/shell$ 
````
Repo:
- GitHub repository: simple_shell

## Authors ✏️

Rayd Trujillo - [rayd1893](https://github.com/rayd1893)

Yuri Quezada - [yuriquezada](https://github.com/yuriquezada)
