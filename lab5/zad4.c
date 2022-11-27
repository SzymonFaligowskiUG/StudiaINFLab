#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool compare(char a, char b){
    if (a == b) {
        return true;
    }
    return false;
}

bool isPalindrome(char* s){
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        printf("%c %c\n",s[i], s[l-i-1]);
        if (!compare(s[i],  s[l-i-1])) {
            return false;
        }
    }
    return true;
    
}

int main(int argc, char const *argv[])
{
    isPalindrome("Makapaka");
    return 0;
}
