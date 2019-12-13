#include <iostream>
using namespace std;

int main() {
    int *x = new int;
    *x = 10;
    cout<<"Address of Int Variable: "<< x <<endl;
    cout<<"Integer value: "<< *x <<endl;

    int **p = &x;
    //cout<<"Address of Pointer X: "<< p <<endl;
    //cout<<"Address of Int Variable: "<< *p <<endl;
    //cout<<"Integer value: "<< **p << endl;

    x = new int[3];
    *x = 10;
    *(x+1) = 11;
    x[2] = 12;

    //cout<<"Array: "<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
    return 0;
}

/*
int main() {
    int **dp = new int*[2];
    dp[0] = new int[2];
    *(dp+1) = new int[2];

    dp[0][0] = 1;
    (*dp)[1] = 2;

    dp[1][0] = 3;
    (*(dp+1))[1] = 4;

    for(int j=0; j<2; j++) {
        cout<<"Array #"<<j+1<<": ";
        for(int k=0; k<2; k++) {
            cout<<dp[j][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
//void incrementByOne(int x) { x++; }
void incrementByOne(int& x) { x++; }
int main() {
    int x = 10;
    incrementByOne(x);
    cout<<"X: "<<x<<endl;
    incrementByOne(x);
    cout<<"X: "<<x<<endl;
    incrementByOne(x);
    cout<<"X: "<<x<<endl;

    return 0;
}
*/
/*
//void incrementByOne(int* p) { (*p)++; }
void incrementByOne(int*& p) { (*p)++; }
int main() {
    int x = 10;
    int *p = &x;
    incrementByOne(p);
    cout<<"X: "<<x<<endl;
    incrementByOne(p);
    cout<<"X: "<<x<<endl;
    incrementByOne(p);
    cout<<"X: "<<x<<endl;

    return 0;
}
*/
