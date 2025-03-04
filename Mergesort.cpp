#include<bits/stdc++.h>
using namespace std;


void merge (int arr[],int s, int e){

int mid =(s+e)/2;
int len1= mid -s +1;
int len2= e-mid;

int *first =new int [len1];
int *second = new int [len2];

int mainIdx=s;

for (int i=0 ; i<len1;i++){
 
first[i]=arr[mainIdx++]; 

}
for (int i=0 ; i<len1;i++){
 
second[i]=arr[mainIdx++]; 

}

//merge two sorted array

mainIdx=s;
int i=0;
int j=0;
while (i<len1 && j<len2)
{
  if (first[i]<second[j])
  {
    arr[mainIdx++]=first[i++];
  }
  else {
    arr[mainIdx++]=second[j++];
  }
  
}

while (i<len1)
{
 arr[mainIdx++]=first[i++];
}

while (j<len2)
{
     arr[mainIdx++]=second[j++];
}





}






void mergeSort (int arr[],int s,int e) {

   if (s>=e) {

  return;
   }
 
   int mid=(s+e)/2;

   mergeSort(arr,s,mid); //for left side sort

   mergeSort(arr,mid+1,e); //for right side sort

   merge(arr,s,e);



}


int main () {
int n;
cin>>n;
int arr[n];
for (int i=0 ;i<n;i++){
    cin>>arr[i];
}
mergeSort(arr , 0 ,n-1);

for (int i=0 ;i<n;i++){
    cout<<arr[i];
}

}