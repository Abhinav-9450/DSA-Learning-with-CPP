#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;
    
    if(marks>90){
         cout<<"Excellent";
    }
     else if(marks>80){
         cout<<"Very good"; 
    }
     else if(marks>70){
         cout<<"Good"; 
    }
    else if(marks>60){
         cout<<"Can do better"; 
    }
    else if(marks>50){
         cout<<"Average";
    }
    else if(marks>=40){
         cout<<"Below Average";
    }
    else{
         cout<<"Fail";  
    }

   
    // if(marks>90){
    //      cout<<"Excellent";
    // } 
    // else{
    //     if(marks>80){
    //         cout<<"Very good";
    //     }
    //     else{
    //         if(marks>70){
    //             cout<<"Good";
    //         }
    //         else{
    //             if(marks>60){
    //                 cout<<"Can do better";
    //             }
    //             else{
    //                 if(marks>50){
    //                     cout<<"Above average";
    //                 }
    //                 else{
    //                     if(marks>=40)
    //                     {
    //                         cout<<"Average";
    //                     }
    //                     else{
    //                         cout<<"Fail";
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    
    return 0;
}