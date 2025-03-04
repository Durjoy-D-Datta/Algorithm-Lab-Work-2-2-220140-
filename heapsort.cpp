#include<bits/stdc++.h>
using namespace std;

void heapify (int arr[] , int n , int i) {

    int largest =i;
    int leftidx =2*i;
    int rightidx =2*i+1;
  
    if (leftidx<=n && arr[leftidx]>arr[largest]) {
      largest=leftidx;
    }
  
    if (rightidx<=n && arr[rightidx]>arr[largest]) {
      largest=rightidx;
    }
    if (largest!=i){
      swap(arr[i],arr[largest]);
      heapify(arr,n,largest); 
    }
  
  return;
  }
  void heapSort(int arr[] , int siz) {
 
    int size=siz;
  
    while (size>1)
    {    //swap root with last element
      swap (arr[1],arr[size]);
      //decrease size cuz last element already gone to the ssorted part
      size--;
      //take root to the right position
      heapify(arr,size,1);
    }
  
  }
  int main () {

    //heapify and heap sort
    int arr[10]={-1,10,20,30,2,29,3,40};
    int n=7;
    cout<<endl;


for (int i = 7/2; i >0; i--)
{

heapify(arr,n,i);

}
cout<<endl;
heapSort(arr,7);
for (int i = 1; i <=7; i++)
{
cout<<arr[i]<<' ';
}

}