#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20] = "Moring   ";
    char s2[30] = "night";

    strcat(s1, s2);
    cout << s1 << endl;
    return 0;
}git add .