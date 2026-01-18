# include<iostream>
using namespace std;
void character()
{
    char ch; int charac;
    cout<<"Enter a character to find its place value: ";
    cin>>ch;
    charac = (int)ch - 64;
    cout<<"The place value of the character you entered is: "<<charac;
}
void half()
{
    int x; float y;
    cout<<"Enter the number: ";
    cin>>x;
    y = ((float)x)/2;
    cout<<"The half of the number is: "<<y;
}
void fractionalpart()
{
    float a; int b;
    cout<<"Enter the number: ";
    cin>>a;
    b = (int)a;
    if(b<0){
        b -= 1;
    }
    a -= b;
    cout<<"The fractional part of the number is: "<<a;
}

int main()
{
    //character();
    // half();
    fractionalpart();
    return 0;
}