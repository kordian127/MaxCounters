#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int A[]={3,4,4,6,1,4,4,7,3,1,2,1};
int B[]={0,0,0,0,0};
int* maxval;

for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
    if(A[i]>5){
        maxval = max_element(B,B+5);
        for(int j=0;j<5;j++){
            B[j]=*maxval;
        }
    }
    else{
        B[A[i]-1]+=1;
    }
}
for(int k=0;k<5;k++){
    cout<<B[k]<<" ";
}

return 0;
}
