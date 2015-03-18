# lengthstring
[rajkumar@ip-172-31-23-94 LengthString]$ ls
lenstring.cpp  lenstring.o  main  main.cpp  staticlib.a
To create a static library, or to add additional object files to an existing static library, use a command like this:
[rajkumar@ip-172-31-23-94 LengthString]$ ar rcs staticlib.a lenstring.o
[rajkumar@ip-172-31-23-94 LengthString]$ g++ -Wall main.cpp staticlib.a -o main
[rajkumar@ip-172-31-23-94 LengthString]$ ./main
