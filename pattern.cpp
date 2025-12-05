//pattern-1 -without functions 
/*#include<iostream>
using namespace std;
int main(){
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << "* ";
        }
    cout << endl;
    }
    return 0;
}*/

//pattern 1 - using functions
/*#include<iostream>
using namespace std;
void pattern1(int n){
    for(int i=0 ; i<n;i++){
        for(int j=0;j<n;j++){
            cout << "* ";
        }
        cout <<endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        pattern(n);
        }   
        return 0;
}*/




//pattern 2 - using functions 
/*#include<iostream>
using namespace std;
void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0 ; j<=i ;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        pattern2(n);
    }
    return 0;
}*/




//pattern3-using functions
/*#include<iostream>
using namespace std;
void pattern3(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        pattern3(n);
    }
    return 0;
}*/




//pattern 4-using functions
/*#include<iostream>
using namespace std;
void pattern4(int n){
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){
            cout << i <<" ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        pattern4(n);
    }
    return 0;
}*/




//pattern 5-using functions
/*#include<iostream>
using namespace std;
void pattern5(int n){
    for(int i=1 ; i<=n ; i++){
        for(int j=0 ; j<n-i+1 ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for(int i=0 ; i<t ; i++){
        int n;
        cin >> n;
        pattern5(n);
    }
    return 0;
}*/




//pattern 6-using functions

