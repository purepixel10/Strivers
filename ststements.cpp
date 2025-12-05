//if else

//PROBLEM 1:write a program that takes an input of age and prints if you are adult or not (>=18,yes). (<18,no)

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"you are an adult";
    }
    else{                                       //here instead of using else we can also use else if 
        cout<<"you are not an adult";
    }
    return 0;
}*/

//If both if and else if conditions are wrong then there will be no output printing


//PROBLEM 2:

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks<25){
        cout<<"Grade is F";
    }
    else if(marks<=44){
        cout<<"Grade is E";
    }
    else if(marks<=49){
        cout<<"Grade is D";
    }
    else if(marks<=59){
        cout<<"Grade is C";
    }
    else if(marks<=79){
        cout<<"Grade is B";
    }
    else if(marks<=100){
        cout<<"Grade is A";
    }
    return 0;
}*/


//PROBLEM 3:

// This is program based on if else statement

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"not eligible for job";
    }
    else if(age<=54){
        cout<<"eligible for job";
    }
    else if(age<=57){
        cout<<"eligible for job,but retirement soon";
    }
    else (age>57){
        cout<<"retirement time";
    }
    return 0;
}*/


//Nested if


/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"not eligible for job";
    }
    //>=18
    else if(age<=57){
        cout<<"eligible for job";
        if(age>=55){
            cout<<", but retirement soon";
        }
    }
    else{
        cout<<"retirement time";
    }
    return 0;
}*/


//SWITCH STATEMENT

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cin>>day;
    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid";
     }
     cout<<"check";
     return 0;
}*/