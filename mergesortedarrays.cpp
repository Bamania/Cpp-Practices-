#include<iostream>
using namespace std;

void mergearrays(int arr1[],int n,int arr2[],int m,int arr3[]){

int i=0;
int j=0;
int k=0;
while( i<n && j<m){
  
    if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        
        
        k++;
        i++;
    }
    else{
        arr3[k]=arr2[j];
      
          k++;
        j++;
    }

}

cout<<i<<" <--i "<< " j-> " <<j<<endl;
while(i<n ){  
    cout<<"running "<<endl;
    cout<<arr1[i]<<endl;
    arr3[k]=arr1[i];
    
    k++;
    i++;
}
while(j<m ){
    
    cout<<arr2[j]<< " "<<endl;
    arr3[k]=arr2[j];
    k++;
    j++;
}
    // cout<<arr3[0]<<"  arr3 after the both  loop"<<endl;
}



int main(){
//given arrays!
int arr1[5]={1,2,15,16,20};
int arr2[6]={6,7,8,9,11,13};
//final array
int arr3[11]={0};

mergearrays(arr1,5,arr2,6,arr3);

for (int k=0;k<11;k++){
    cout<<arr3[k]<<" ";  // prints the merged array!
 
}

}