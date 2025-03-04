#include<bits/stdc++.h>
using namespace std;

class item {
  public:
  int weight;
  int profit;

  item (int profit , int weight){
   
   this->profit=profit;
   this->weight=weight;

  }

};

bool cmp (item a , item b){

 double r1=(double)(a.profit/a.weight);
  double r2=(double)(b.profit/b.weight);
  
  return r1>r2;

}

double FracKnap (item iArr[] ,int maxW,int n) {
 

    sort(iArr,iArr+n,cmp);

  double maxProfit =0;
  
  for (int i=0;i<n;i++)
  {
    if (iArr[i].weight<=maxW){
   

    maxProfit +=iArr[i].profit;
    maxW -=iArr[i].weight;

   }
   else 
   {
      maxProfit += (double) (iArr[i].profit/iArr[i].weight)*maxW;
   }

  }
  
return maxProfit;

}
int main () 
{

int w=50;
item iArr[]={ { 60, 10 }, { 100, 20 }, { 120, 30 } };
int N=sizeof(iArr)/sizeof(iArr[0]);

double mP=FracKnap(iArr,w,N);
cout<<mP;



}









