/* Exp 2-:
Write a program to accept N numbers from the user and store them in an array. Then, accept another number from the user and search that using
 Linear Search.
*/




#include<iostream>
using namespace std;
int main(){
	int n,c,i,x=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>c;
	for(i=0;i<n;i++){
		if(c==a[i]){
			c=i;
			x++;
			break;
		}	
	}
	if(x==1){
		cout<<"Number Found at position:"<<c;
	}
	else{
		cout<<"Not found";
	}	
}
