//problem 1 ------>>>A. absolute_sum

#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;
 
int getAbsSum(int arr[],int size_arr){
int y=0;
for(int i=0;i<size_arr;i++){
    cin>>arr[i];
    if(arr[i]>=0) y+=arr[i];
    else if(arr[i]<0) y+=-1*arr[i];
}
return y;
}
 
int main(){
int size_arr;cin>>size_arr;
int arr[size_arr];
cout<<getAbsSum(arr,size_arr)<<"\n";
}




//problem 2 ------->>>B. frequent element

#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;
 
int most_frequent_element(int array[], int array_size){
    int f[1000]={0},f_max,m=-1;
    for (int i=0;i<array_size;i++){
        cin>>array[i];
        f[array[i]]++;
        if(f[array[i]]>m){
            f_max=array[i];
            m=f[array[i]];
        }
    }
    return f_max;
}
 
int main(){
int array_size;cin>>array_size;
int array[array_size];
cout<<most_frequent_element(array,array_size)<<"\n";
}






//problem 3 ------->>> C. largest elements

#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;

void k_largest_elements(int arr[], int array_size, int k){
    int a[k]={0};
    for(int i=0;i<array_size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<k;i++){
        int m=-1000,a;
        if(i<array_size){
        for(int j=0;j<array_size;j++){
            if(arr[j]>m){
                m=arr[j];
                a=j;}
        }
        arr[a]=-1000;
        }
        else m=0;
    cout<<m<<" ";
    }
}

int main(){
int array_size;cin>>array_size;
int k;cin>>k;
int arr[array_size];

k_largest_elements(arr,array_size,k);
}








//problem 4 ------->>>D. Even Odd separate

#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;

void Even_Odd_Separate(int arr[],int array_size){
    for(int i=0;i<array_size;i++){
        cin>>arr[i];
        if(float(arr[i]%2)==0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<"\n";
    for(int i=0;i<array_size;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
int array_size;cin>>array_size;
int arr[array_size];
Even_Odd_Separate(arr,array_size);
}


//<3
