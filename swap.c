# include<stdio.h>
# include<cs50.h>
# include<string.h>
# include<ctype.h>
# include<assert.h>
# include<stdlib.h>

void swap_max(int arr[],int l,int n){
int max=0;
int i=0;
int position;
int temp;
for(i=n; i<l; i++){
  if(arr[i] > max){
       max=arr[i];
  }
 }

for(int i=0;i<l;i++){
  if(arr[i] == max){
       position=i;
       temp=arr[position];
       arr[position]=arr[n];
       arr[n]=temp;
  }  
 }
}

void ssort(int arr[],int l){
for(int j=0;j<=(l-1);j++){
  swap_max(arr,l,j);
 }
}
