//https://www.codechef.com/NOV19B/problems/HRDSEQ

#include <bits/stdc++.h>
using namespace std;
int main() {
    map<int,int> freq;
    freq[0]=2;

    int arr[130]={0,0};
    for(int i=2;i<130;i++){
        int count=0;
        bool found=false;
        for(int j=i-2;j>=0;j--){
            count++;
            if(arr[i-1]==arr[j]){

                found=true;
                break;
            }
        }
        if(found){
            arr[i]=count;
            freq[arr[i]]++;
        }
        else{
            arr[i]=0;
            freq[arr[i]]++;
        }

    }


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=arr[n-1];
        int count=0;
        for(int i=0;i<n;i++){
            if(k==arr[i]){
                count++;
            }

        }
        cout<<count<<endl;


    }

}
