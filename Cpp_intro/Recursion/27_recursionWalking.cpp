#include<iostream>
using namespace std;

void reachHome(int source, int destination){

    // base case
    if(source == destination){
        cout<<"reached!!!"<<endl;
        return 0;
    }

    // progress
    source++;

    // Recursive relation
    reachHome(source,destination);


}

int main(){

    int source = 1;
    int destination = 25;

    cout<<endl;

    reachHome(source,destination);

}