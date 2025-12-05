//PATTREN-1:

/*#include <iostream>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);  
    return 0;
}*/

//PATTERN-2:

/*#include<iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

//PATTERN 3:

/*#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

//PATTERN-4:

/*#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

//PATTERN-5:

/*#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

//PATTERN-6:

/*#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

//PATTERN-7:

/*#include<iostream>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        //space-1
        for(int j=0;j<=n-i-1;j++){
            cout << " ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        //space-2
        for(int j=0;j<=n-i-1;j++){
            cout << " ";
        }
        cout << endl;    
    }
}
int main(){
    int n;
    cin >> n;
    print1(n);
    return 0;
}*/

//PATTERN-8: 

/*#include<iostream>
using namespace std;
void print2(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout << " ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout << "*";
        }
        //space
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print2(n);
    return 0;
}*/

//PATTERN 9:


//PATTERN-10:

/*#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n)stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

//PATTERN-11:

/*#include<iostream>
using namespace std;
void print(int n){
    int start = 1;
    for(int i=0;i<n;i++){
       if(i % 2 ==0)start =1;
       else start =0;
       for(int j=0;j<=i;j++){
        cout << start;
        start = 1 - start;
       } 
       cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

//PATTERN 12:

/*#include<iostream>
using namespace std;
void print(int n){
    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        //numbers
        for(int j =1;j<=i;j++){
            cout << j;
        }
        //space
        for(int j=1;j<=space;j++){
            cout << " ";
        }
        //numbers
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
        space -=2;

    }
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

//PATTERN-13

/*#include<iostream>
using namespace std;
void print(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << num << " ";
            num = num +1;    
        }
        cout <<endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

//PATTERN-14:

/*#include<iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        for(char ch = 'A';ch <= 'A'+i;ch++){     
            cout << ch <<" ";
        }
        cout << endl;
    }

}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

//PATTERN-15:

/*#include<iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch <= 'A' + (n-i -1); ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

//PATTERN-16:

/*#include<iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        char ch = 'A' + i;
        for(int j=0;j<=i;j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

//PATTERN-17:

/*#include<iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        //characters
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for(int j=1;j<=2*i-1;j++){
            cout << ch;
            if(j<= breakpoint)ch++;
            else ch--;
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;  
}*/