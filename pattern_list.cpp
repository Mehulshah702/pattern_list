#include<bits/stdc++.h>
using namespace std;

void print0(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i=n; i>=1; i--){
        for(int j=n; j>=i; j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print7(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
/*
OUTPUT :
    * * * * *
    * * * *
    * * * 
    * *
    * 
*/
}
void print8(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
/*
    12345
    1234
    123
    12
    1
*/
}
void print9(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        for(int k=0; k<2*i+1; k++){
            cout<<"*";
        }

        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
            
        cout<<endl;
    }
/* 
OUTPUT :
         *
        * *
       * * *
      * * * *
     * * * * *


*/
}
void print10(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=0; k<2*n-(2*i+1); k++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
/*
  *************
   ***********
    *********
     *******
      *****
       ***
        *
*/
}
void print11(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }

        for(int k=0; k<2*i+1; k++){
            cout<<"*";
        }

        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
            
        cout<<endl;
    }
}
void print111(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=0; k<2*n-(2*i+1); k++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print12(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1; j<=stars; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
/*

* 
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/
}
void print13(int n){
    int num = 1;
    for(int i=0; i<n; i++){
        if(i%2==0) num=1;
        else num=0;
        for(int j=0; j<=i; j++){
            cout<<num;
            num = 1-num;
        }
        cout<<endl;
    }

/*

1    
01   
101  
0101 
10101

*/}
void print14(int n){
    int space = 2*(n-1);
    for(int i=1; i<=n; i++){
        //nuumbers
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //spaces
        for(int k=1; k<=space; k++){
            cout<<" ";
        }
        //numbers
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
        space -= 2;
    }
/*

1        1
12      21
123    321
1234  4321
1234554321

*/
}
void print15(int n){
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
/*


1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15 

*/
}
void print16(int n){
    
    for(int i=1; i<=n; i++){
        char bob='A';
        for(int j=1; j<=i; j++){
            cout<<bob<<" ";
            bob++;
        }
        cout<<endl;
    }
/*

A
A B       
A B C     
A B C D   
A B C D E 

*/
}
void print17(int n){
    for(int i=1; i<=n; i++){
        char a='A';
        for(int j=0; j<n-i+1; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }

/*

A B C D E 
A B C D   
A B C     
A B       
A

*/
}
void print18(int n){
    char a='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<a<<" ";
        }
        cout<<endl;
        a++;
    }
}
void print19(int n){
    
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i+1; j++){
            cout<<" ";
        }
        //chars
        char a='A';
        int breakpoint = (2*i+1)/2;
        for(int j=0; j<2*i+1; j++){
            cout<<a;
            if(j<breakpoint) a++;
            else a--;
        }
        //spaces
        for(int j=0; j<n-i+1; j++){
            cout<<" ";
        }
        //next line....
        cout<<endl;
    }
    /*
  
      A      
     ABA
    ABCBA    
   ABCDCBA
  ABCDEDCBA

  */
}
void print20(int n){
    for(int i=0; i<n; i++){
        for(char bob='E'-i; bob<='E'; bob++){
            cout<<bob<<" ";
        }
        cout<<endl;
    }
/*

E
DE
CDE
BCDE
ABCDE

*/
}
int main(){
    int t;
    cout<<"\nEnter the number of pattern you want to print : ";
    cin>>t;
    for(int k=0; k<t; k++){
        int n;
        cout<<"\nEnter the size of the square pattern : ";
        cin>>n;
        print10(n);
    }
    return 0;
}
