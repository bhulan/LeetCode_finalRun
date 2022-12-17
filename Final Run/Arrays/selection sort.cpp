#include<bits/stdc++.h>
using namespace std;
void prac(int arr[],int n){
  int c=1;
  while(c<n){
  	for(int i=0;i<n-c;i++){
  		if(arr[i]>arr[i+1])
  		swap(arr[i],arr[i+1]);
	  }
	  c++;
  }
  for(int i=0;i<n;i++){
  	cout<<arr[i]<<" ";
  }
}

int main(){
	int ar[10]={1,3,7,45,32,65,63,1,7,76};
	prac(ar,10);
	
}
