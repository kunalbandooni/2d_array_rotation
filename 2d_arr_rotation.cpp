/*

One simple way is by using another array and simply swapping rows and columns accordingly.

But it costs O(n*n) Space complexity.

So, another way costing O(1) Space complexity is given.

Learnt from you tube.

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"N: ";
    cin>>n;
    int a[n][n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

    //ARRAY ROTATION
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            int temp=a[i][j];
            a[i][j]=a[j][n-1-i];
            a[j][n-1-i]=a[n-i-1][n-j-1];
            a[n-1-i][n-j-1]=a[n-j-1][i];
            a[n-j-1][i]=temp;
        }
    }

    cout<<"Rotated Array :\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }
    return 0;
}
