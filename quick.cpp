#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&v,int low,int high)
{
    int i=low;
    int j=high;
    
}
void quicksort(vector<int>&v,int l,int h)
{
    if(l<h)
    {
        int pi = partition(v,l,h);
        quicksort(v,l,pi);
        quicksort(v,pi+1,h);
    }
}
int main()
{
    int n;
    cin>>n;

    vector<int>v(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    quicksort(v,0,n);

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}