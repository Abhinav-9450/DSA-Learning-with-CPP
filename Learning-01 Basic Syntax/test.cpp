#include<iostream>
using namespace std;
void BOOL(){
    bool a = false;  // int a = 0 will also give the same result;
    bool b = false;
    bool c = true;
    cout<<(a == b == c)<<endl;
    cout<<a + 10<<" "<<c + 10; // but it is better to do explicit type casting;
}

void shorthand()
{
    int x = 10, y = 5;
    x += y -= x; // solved from right to left for the assignment;
    cout<<x<<" "<<y;
}

int main()
{
    //BOOL();
    shorthand();
    return 0;
}