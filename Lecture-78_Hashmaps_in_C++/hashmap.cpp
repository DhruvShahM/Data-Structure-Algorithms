#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    // creation
    unordered_map<string,int> mapping;

    //insertion

    //1 way
    pair<string,int> pair1=make_pair("dhruv",3);
    mapping.insert(pair1);

    //2 way
    pair<string,int> pair2("love",2);
    mapping.insert(pair2);

    //3 way
    mapping["sila"]=1;
    mapping["sila"]=2;

    cout<<mapping["sila"]<<endl; // output 2


    //search
    cout<<mapping["sila"]<<endl; //output 2
    cout<<mapping.at("dhruv")<<endl; //output 3


    cout<<mapping["taker"]<<endl; //throwing error below
    //terminate called after throwing an instance of 'std::out_of_range'  
    //  what():  _Map_base::at

    cout<<mapping.size()<<endl; //output 4


    //to check the presence
    cout<<mapping.count("love")<<endl; //output 1

    // erase
    mapping.erase("love");
    cout<<mapping.size()<<endl; //output 3

    // itearting values
    for(auto ele:mapping)
        cout<<ele.first<<" "<<ele.second<<endl;

    // output
    // taker 0
    // sila 2
    // dhruv 3

    cout<<endl;
    //iterator
    unordered_map<string,int> :: iterator it=mapping.begin();

    while(it!=mapping.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }  

    // output
    // taker 0
    // sila 2
    // dhruv 3      

    return 0;

}

// T.C(TimeComplexity)
// map => O(logn) 
// unordered_map => O(1)

