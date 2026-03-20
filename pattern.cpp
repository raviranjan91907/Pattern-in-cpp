#include<bits/stdc++.h>
using namespace std;

/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
void pattern1(int num){
for(int i=0;i<num;i++){
    cout<<"pattern1"<<endl;
        for(int j=0;j<num;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

/*
1 2 3 
4 5 6 
7 8 9
*/
void pattern2(int num){
    cout<<"pattern2"<<endl;
    int t=0;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout<<t+1<<" ";
            t++;
        }
        cout<<endl;
    }
}
/*
*
**
***
****
*/
void pattern3(int num){
    cout<<"pattern3"<<endl;
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
1
2 2
3 3 3 
4 4 4 4
*/
void pattern4(int num){
    cout<<"pattern4"<<endl;
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}


/*
1
2 1
3 2 1
4 3 2 1
*/
void pattern5(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }
}


/*
A A A A
B B B B
C C C C
*/
void pattern6(int num){
    char tm='A';
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout<<char(tm+i)<<" ";
        }
        cout<<endl;
    }
}



/*
A B C
A B C
A B C
*/
void pattern7(int num){
    char tm='A';
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout<<char(tm+j)<<" ";
        }
        cout<<endl;
    }
}

/*
A B C
B C D
C D E
*/
void pattern8(int num){
    int tm='A';
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            char ch=tm+i+j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


/*
A
B B
C C C
*/ 
void pattern9(int num){
    char tm='A';
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<char(tm+i)<<" ";
        }
        cout<<endl;
    }
}

/*
A
B C
D E F
*/
void pattern10(int num){
    char tm='A';
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<char(tm)<<" ";
            tm++;
        }
        cout<<endl;
    }
}




/*
A
B C
C D E
D E F G
*/ 
void pattern11(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<char('A'+i+j)<<" ";
        }
        cout<<endl;
    }
}


/*
D
C D
B C D
A B C D
*/
void pattern12(int num){
    char tm='A'+num-1;
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<char(tm-i+j)<<" ";
        }
        cout<<endl;
    }
}

/*
   *
  **
 *** 
****
*/
void pattern13(int num){
    for(int i=0;i<num;i++){
        int w=i+1;
        for(int j=0;j<num-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*
****
***
**
*
*/
void pattern14(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*
1234
 234
  34
   4
*/
void pattern15(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<num-i;j++){
            cout<<i+j+1;
        }
        cout<<endl;
    }
}



/*
   1
  22
 333
4444
*/
void pattern16(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}


/*
   1
  121
 12321
1234321
*/
void pattern19(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            if(j<i) cout<<j+1;
            else cout<<i-(j-i)+1;
        }
        cout<<endl;
    }
}

/*
1234554321
1234**4321
123****321
12******21
1********1
*/

void pattern20(int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<num-i;j++){
            cout<<j+1;
        }
        for(int j=0;j<2*i;j++){
            cout<<"*";
        }
        for(int j=0;j<num-i;j++){
            cout<<num-j-i;
        }
        cout<<endl;
    }
}


int main(){
    int num;
    cin>>num;
    pattern1(num);
    pattern2(num);
    pattern3(num);
    pattern4(num);
    pattern5(num);
    pattern6(num);
    pattern7(num);
    pattern8(num);
    pattern9(num);
    pattern10(num);
    pattern11(num);
    pattern12(num);
    pattern13(num);
    pattern14(num);
    pattern15(num);
    pattern16(num);


}
