#include<iostream>
using namespace std;
int power(int a, int b){
    //base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=power(a,b/2);

    //for even
    if(b%2==0){
        return ans*ans;
    }
    else{
        //for odd
        return a *(ans*ans);
    }
}
int main() {
    int a,b;
    cin>>a>>b;
    int ans=power(a,b);
    cout<<"answer is"<<ans<<endl;



return 0;
}