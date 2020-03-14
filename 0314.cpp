#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> Vector;

bool isnumber(int number)
{
for(int i=2;i<=sqrt(number);i++){
    if(number%i==0){
        return false;
    }
  }
    return true;
}

int main()
{
    int n;
    while(cin>>n){
        for(int i=2;i<n;i++){
            if(isnumber(i)&&i%10==1){
                Vector.push_back(i);
            }
        }
        if(Vector.size()==0){
            cout<<"-1"<<endl;
        }
        else{
            for(int i=0;i<Vector.size()-1;i++){
                cout<<Vector[i]<<" ";
            }
            cout<<Vector[Vector.size()-1]<<endl;
        }
        Vector.clear();
    }
     return 0;
}
