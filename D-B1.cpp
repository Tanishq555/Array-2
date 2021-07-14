#include <iostream>
using namespace std;

int BinarySearchKey( int array[], int n, int Key){
    
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid= (s+e)/2;
        if (array[mid]==Key)
        {
           return mid;
        }
        if (array[mid]>Key){
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        
        
    }
    
            return -1;
    
}

int main(){
int n;
cin>>n;
int array[n];

for (int i = 0; i <n; i++)
{
   cin>>array[i];
}
int Key;
cin>>Key;
cout<<BinarySearchKey(array,n,Key)<<endl;

}