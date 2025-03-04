#include<bits/stdc++.h>
using namespace std;



int partition (int *arr,int s,int e){

int pivot=arr[s];
int count =0;
for (int i=s+1 ; i<=e;i++){
   if (arr[i]<=pivot)
      count++;
}

int pivotIdx=s+count; 

swap (arr[s],arr[pivotIdx]);

int i=s;int j=e;
while (i!=j){
    if (arr[i]<=pivot){
       i++;
    }
    else if (arr[j]>pivot)
    {
      j--;
    }
    else{
        swap(arr[i++],arr[j--]);
    }
    
}
return pivotIdx;

}





void QuickSort(int *arr, int s , int e) {

  if (s>=e){
    return;
  }
  int p = partition (arr,s,e);
  QuickSort(arr,s,p-1);
  QuickSort(arr,p+1,e);

}


int main () {

int n;
cin>>n;
int arr[n];
for (int i=0 ;i<n;i++){
    cin>>arr[i];
}
QuickSort(arr , 0 ,n-1);


for (int i=0 ;i<n;i++){
    cout<<arr[i];
}

}