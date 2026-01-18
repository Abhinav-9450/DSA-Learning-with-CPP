#include<iostream>
using namespace std;

void star_triangle(int rows){
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int rows;
    star_triangle(3);
    star_triangle(4);
    star_triangle(5);
}