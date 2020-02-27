#include<iostream>
#include<algorithm>
using namespace std;

void Heapify(int a[],int n,int i){
	int l,r,largest,temp=0;
	largest = i;
	l=2*i+1;
	r = 2*i+2;
	if(l<n && a[largest]<a[l]){
		largest = l;
	}
	if(r<n && a[largest]<a[r]){
		largest = r;
	}
	if(largest!=i){
		swap(a[i], a[largest]);
		Heapify(a,n,largest); 

	}
}

void build_heap(int a[]){
	int n,i;
	n = 10;
	for(i=n-1;i>=0;i--){
		Heapify(a,n,i);
	}
}

void HeapSort(int a[]){
	int i,n;
	n = 10;
	build_heap(a);
	for(i=n-1;i>=0;i--){
		swap(a[i], a[0]); 
		Heapify(a,n,0);
		
	}
}

int main(){
	int a[10]={4,3,2,5,8,7,9,1,6,10};
	
	cout<<"Before sorting::"<<endl;
	for(int i = 0 ; i<10;i++){
		cout<<a[i];
		cout<<endl;
	}
	HeapSort(a);
	
	cout<<"After sorting::"<<endl;
	for(int i = 0 ; i<10;i++){
		cout<<a[i];
		cout<<endl;
	}
	return 0;
}

