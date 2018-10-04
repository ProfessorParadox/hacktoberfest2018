#include<iostream.h>
int Bsearch(int[],int,int);
int main()
{int AR[50],item,N,index;
cout<<"\n Enter desired array size (max 50)...\n";
cin>>N;
cout<<"\n Enter array elements   (Must be sorted in Asc. order)\n";
for(int i=0;i<N;i++)
{cin>>AR[i];}
cout<<"\n Enter element to be searched for...\n";
cin>>item;
index=Bsearch(AR,N,item);
if(index == -1)
cout<<"\n Sorry !! Given element could not be found\n";
else
cout<<"\n Element found at index : "<<index<<" & Position : "<<index +1<<endl;
return 0;
}
int Bsearch(int AR[],int size,int item)
{int beg,mid,last;
beg=0;
last=size-1;
while(beg<=last)
{mid=(beg+last)/2;
if(item==AR[mid])return mid;
else if(item>AR[mid])beg=mid+1;
else last = mid-1;
}
return -1;
}