//1)"Hello World!" Program
/*#include<iostream>
using namespace std;
int main(){
    cout << "Hello World";
    return 0;
}*/



//2)Program to Add Two Integers
/*#include<iostream>
using namespace std;
int main(){
    int a , b;
    cin >> a >> b;
    cout << "The Sum of a and b is" << a+b;
    return 0;
}*/



//3)Check Whether Number is Even or Odd using if else
/*#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if (a%2==0){
        cout << "It is an even number";
    }
    else{
        cout << "It is an odd number";
    }
    return 0;
}*/
    



//4)Print Number Entered by User
/*#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number:";
    cin >> num;
    cout << "The Entered Number is:" << num;
    return 0;
}*/



//5)Compute quotient and remainder
/*#include<iostream>
using namespace std;
int main(){
    int Quotient , Remainder , Dividend , Divisor;
    cout<< "Enter the Dividend:";
    cin >> Dividend;

    cout<< "Enter the Divisor:";
    cin >> Divisor;

    Quotient = Dividend/Divisor;
    Remainder = Dividend%Divisor;

    cout<<"The quoient is:" << Quotient << endl;
    cout<<"The remainder is:" << Remainder;
    return 0;

}*/



//6)Find Size of a Variable
/*#include<iostream>
using namespace std;
int main(){
    cout << "The size of int:" << sizeof(int) << "bytes" << endl;
    cout << "The size of char:" << sizeof(char) << "bytes" <<endl;
    cout << "The size of float:" << sizeof(float) << "bytes" << endl;
    cout << "The size of double:" << sizeof(double) <<"bytes" << endl;
}*/



//7)Swap Numbers (Using Temporary Variable)
/*#include<iostream>
using namespace std;
int main(){
    int temp,x,y;
    cout << "Enter x value:";
    cin >> x;

    cout << "Enter y value:";
    cin >> y;

    cout <<"Before swapping numbers x is " << x <<" and y is " << y << endl;

    temp = x;
    x = y;
    y = temp;

    cout <<"After swapping numbers x is " << x << " and y is " << y << endl;
    return 0;

}*/



//8)Print ASCII Value 
/*#include<iostream>
using namespace std;
int main(){
    char c;
    cout << "Enter the character:";
    cin >> c;

    cout << "The ASCII value of " << c << " is "  << int(c);
    return 0;
}*/



//9)Find Largest Number Using if...else Statement
/*#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter a:";
    cin >> a;

    cout << "Enter b:";
    cin >> b;

    cout << "Enter c:";
    cin >> c;

    if(a >= b && a >= c){
        cout << "a is largest number";
    }
    else if(b >= a && b >= c){
        cout << "b is largest number";
    }
    else {
        cout << "c is the largest number";
    }
    return 0;
}*/




//10)Roots of a Quadratic Equation
/*#include<iostream>
using namespace std;
int main(){
    float a,b,c,x1,x2,discriminant,realPart,imaginaryPart;
    cout << "Enter coefficients a, b and c: " << endl;
    cin >> a >> b >> c ;
    discriminant = b*b-4*a*c;

    if(discriminant > 0){
        x1 = (-b + sqrt(discriminant))/(2*a);
        x2 = (-b - sqrt(discriminant))/(2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if(discriminant ==0){
        x1=-b/2*a;
        cout << "Roots are real and same." << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }
    else{
        realPart = -b/2*a;
        imaginaryPart = (sqrt(-discriminant))/(2*a);
        cout << "Roots are complex and different.";
        cout << " x1 = "<< realPart << "+" << imaginaryPart << "i" << endl;
        cout << " x2 = "<< realPart << "-" << imaginaryPart << "i" << endl;
    }
    return 0;
}*/



//11)Sum of Natural Numbers using loop
/*#include<iostream>
using namespace std;
int main(){
    int x , sum=0;
    cout << "Enter a number:";
    cin >> x;

    for(int i=1 ; i<=x ;i++){
        sum += i;
    }

    cout << "Sum =" << sum;
    return 0;
}*/



//12)Check Leap Year Using if...else Ladder
/*#include<iostream>
using namespace std;
int main(){
    int year;
    cout << "Enter the year:";
    cin >> year;

    if(year % 400 == 0){
        cout << ("is a leap year");
    }
    else if(year % 100 == 0){
        cout << ("is not a leap year");
    }
    else if(year % 4 == 0){
        cout << ("is a leap year");
    }
    else{
        cout << ("is not a leap year");
    }
    return 0;
}*/



//13)Find the Factorial of a Given Number
/*#include<iostream>
using namespace std;
int main(){
    int x, factorial =1;
    cout << "Enter a number:";
    cin >> x;

    if( x < 0){
        cout << "Error ! Factorial of a negative number doesn't exist";
    }
    else if(x == 0){
        cout << "Factorial of 0 is 1";
    }
    else {
        for(int i=1; i <= x; i++){
            factorial *= i;
        }
        cout << "Factorial of"<< x << " = " << factorial;
    }
    return 0;
}*/



//14) Display Multiplication Table up to 10
/*#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a number:"; 
    cin >> x;

    for (int i = 1; i <= 10;i++){
        cout << x << "*" << i << "=" << x * i << endl;
    }
    return 0;
}*/



//15)Display Multiplication Table up to a Given Range
/*#include<iostream>
using namespace std;
int main(){
    int x , range;
    cout << "Enter a number:";
    cin >> x;

    cout << "Enter a range:";
    cin >> range;

    for(int i=1 ; i <= range ; i++){
        cout << x << "*" << i << "=" << x * i << endl;
    }
    return 0;
}*/



//16)Fibonacci Series up to n number of terms
/*#include<iostream>
using namespace std;
int main(){
    int n , t1 = 0, t2 = 1 , nextTerm = 0;
    cout << "Enter the number:";
    cin >> n;

    cout << "Fabonacci series";

    for (int i = 1; i <= n ; i++){
        if(i == 1){
            cout << "," << t1;
            continue;
        }
        if (i == 2){
            cout << "," << t2;
            continue;
        }

    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;

    cout << "," << nextTerm;
    }
    return 0;
}*/



