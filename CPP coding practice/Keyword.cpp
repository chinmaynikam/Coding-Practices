#include <iostream>
#include <string.h>
using namespace std;
void checkKeyword()
{
    char kword[16][10]={"static", "while", "for", "defer", "void", "include", "float", "double", "name", "sign", "symbol","alpha", "degree", "true", "false"};
    int i,j;
    char word[15];
    cout<<"Enter a word, which you want to check if it is a keyowrd or not: ";
    cin>>word;
    for(i=0;i<16;i++)
    {
        if(strcmp(word, kword[i]) == 0 )
        {
            j=1;
        }
    }
    if(j==1)
    {
        cout<<word<<" is a keyword. You cannot use it."<<endl;
    }
    else
    {
        cout<<word<<" is not a keyword. You can use it."<<endl;
    }
}
int main()
{
    checkKeyword();
    return 0;
}
/*OUTPUT:
TEST CASE 1:
Enter a word, which you want to check if it is a keyowrd or not: when
when is not a keyword. You can use it.

TEST CASE 2:
Enter a word, which you want to check if it is a keyowrd or not: while
while is a keyword. You cannot use it.
*/