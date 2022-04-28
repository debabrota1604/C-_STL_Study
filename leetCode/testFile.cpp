#include<iostream>
using namespace std;
int count_x(char* p, char x)
// count the number of occurrences of x in p[]
// p is assumed to point to a zero-terminated array of char (or to nothing)
{
    printf("%u\n",&p);
    if (p==nullptr)
    return 0;
    int count = 0;
    for (; *p!=0; ++p)
        if (*p==x){ 
            ++count;
            *p = 'f';
        }
return count;
}
int main(){ 
    char *s = "abxyxe";
    printf("%u\n",&s);
    // cout << *s <<endl;
    cout << count_x(s,'x')<<endl;
    cout << s <<endl;

}