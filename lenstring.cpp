#include <iostream>
#include <cstring>

using namespace std;

int length(char *s1)
{
     int l=0;                                                    //2
     while(*s1!='\0')                                      //3
     {
           l++;                                                  //4
           s1++;                                               //5
     }
     
      return l;                                                 //6
}
