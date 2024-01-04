#include <iostream>
using namespace std;
#include <stdbool.h>
#include <string>
#include <stdio.h>


int main()
{

    bool a = true;
    int len =sizeof(a);
    printf("len %d\n",len);
    /* bool 只有1个字节   只能返回 true 和flase */
    string  s = "hello word";
    printf("s: %s\n",s.c_str());
   
    return 0;
}