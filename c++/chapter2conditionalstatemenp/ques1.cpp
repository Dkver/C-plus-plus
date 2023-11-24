// if cost price and selling price of an
 //item is input through the keyboard, write a program to determine 
 //whether the seller has made profit or incurred loss or no profit no loss. 
 //also determine how much profit he made or loss he incurred
 #include<iostream>
 using namespace std;
 int main(){
    int sp,cp ;
    cout<<"enter the cp:";
    cin>>cp;
    cout<<"enter the sp:";
    cin>>sp;
    if(sp>cp){
       // cout<<"profit"<<endl;
         cout<<"profit is: "<<sp-cp;
        //p=sp-cp;
       // cout<<p;

    }
    else if(cp>sp){
       // cout<<"loss"<<endl;
         cout<<"loss is :"<<cp-sp;
       // l=cp-sp;
       // cout<<l;
    }
    else{
        cout<<"no profit no loss";
    }
 }