//3-12 10-12 17-12 24-12
#include<bits/stdc++.h>
using namespace std;

void minmax1(int a[], int n, int *min, int *max){
    if(n==1){
        *min=a[0];
        *max=a[0];
    }
    else{
        minmax1(a,n-1,min,max);
        if(a[n-1]<min){
            *min=a[n-1];
        }
        if (a[n-1]>max)
        {
            *max=a[n-1];
        }
    }
}
void minmax2(int a[], int l, int h, int *min, int *max){
    int tmin1, tmin2, tmax1,tmax2;
    if(h-l > 1){
        int m=(l+h)/2;
        minmax2(a,l,m,&tmin1,&tmax1);
        minmax2(a,m+1,h,&tmin2,&tmax2);
        *min=(tmin1<tmin2)?tmin1:tmin2;
        *max=(tmax1>tmax2)?tmin1:tmin2;
    }
    else{
        *min=(a[l]<a[h])?a[l]:a[h];
        *max=(a[h]>a[l])?a[h]:a[l];
    }
}
int main(){
    int arry[10]={13,1,55,4,3,87,98,5,9,66};
    int min1,max1,min2,max2;
    minmax1(a,10,&min1,&max1);
    minmax2(a,0,9,&min2,max2);

    return 0;
}
