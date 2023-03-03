#include<iostream>

using namespace std;


int main(int argc,char *argv[]){

double sum=0;
int count = argc-1;

if(argc==1) cout<<"Please input numbers to find average.";
else{
for(int i=0;i<argc;i++){
    sum+=atoi(argv[i]);
}
sum=sum/count;
cout<<"---------------------------------"<<"\n";
cout<<"Average of "<<count<<" numbers = "<<sum<<"\n";
cout<<"---------------------------------";
}
return 0;
}
