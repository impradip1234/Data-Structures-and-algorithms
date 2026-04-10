#include<iostream>
#include<vector>
using namespace std;

//function for printing vecter elements
void print(vector<int>vectarr){
    int size=vectarr.size();
    for(int i=0;i<size;i++){
        cout<<vectarr[i]<<"  ";
    }
}
int main(){
    // vector<int>vectarr;//initialization ---> vector <datatype> name_of_vector

    //push / insertion of elements..........
    // vectarr.push_back(1);
    // vectarr.push_back(2);
    // vectarr.push_back(3);
    // vectarr.push_back(4);
    // vectarr.push_back(5);
    // vectarr.push_back(6);
    // for(int i=0;i<vectarr.size();i++){
    //     cout<<vectarr[i]<<"  ";
    // }

    //infinite loop for printing capacity and size for observation
    // vector<int>vect;
    // while(1){
    //     int a;
    //     cin>>a;
    //     vect.push_back(a);
        
    //     cout<<"capacity "<<vect.capacity()<<" size "<<vect.size()<<endl;
    // }

    //deletion in vector---> only possible through end 
    // vectarr.push_back(1);
    // vectarr.push_back(2);
    // vectarr.pop_back();
    // print(vectarr);

    //insertion after the taking size input then also inserting ---> dynamic nature of vector 
    // int n;
    // cout<<"enter size of vector:";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int element;
    //     cin>>element;
    //     vectarr.push_back(element);
    // }
    // // print(vectarr);

    // //inserting additonal element beyond it's size 

    // for(int i=0 ;i<10;i++){
    //     vectarr.push_back(30);
    // }
    // // for deleting all element at once 
    // vectarr.clear();
    // print(vectarr);
    // //after clear()--> size will decrease to zero but capacity will not decrease it will be same
    // cout<<"vector size after deleting elements: "<<vectarr.size()<<endl;
    // cout<<"vector capacity after deleting elements: "<<vectarr.capacity()<<endl;

    //many different ways to initialise vector

    //default:---->
    // vector<data type> vector_name
            //vector<int>arrvect;
    //with size and a specific value
            //vector<int>vectarr(5,-1);//-->> vecter will be initialised with size 5 and with all elements as -1
    //simillar to array
            //vector<int>vectname={2,3,4,6,3,6};//-->> OR 
            //vector<int>vectname2{3,5,7,6,5,8,9};


    // how to copy vector

    // vector<int>vect1{3,5,6,7,3,9};
    // vector<int>vect2(vect1);
    // print(vect2);

    
}