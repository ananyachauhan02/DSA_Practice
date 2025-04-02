 #include<bits/stdc++.h>
 using namespace std;

 int main(){

     int mx = -199999; // we are giving such a small value to mx because we have to maximise it at every point
     int n;
     cin>>n;

     int a[n];
     for(int i = 0; i<n ; i++){
         cin>>a[i];
     } 
     for(int i = 0; i<n;i++){
         mx = max(mx,a[i]);
         cout << mx << endl;

     }
     return 0;
     }


