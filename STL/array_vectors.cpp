#include<iostream>
#include</usr/local/bin/include/bits/stdc++.h>
using namespace std;//says that we are using cout,cin etc.. defined in standard namespace .

namespace Mayank{//namespace is a declarative region that provides scope to the identifiers ,variables,function defined inside it.
    int val=50;
    int getVal(){return val;}
}

struct node{
    string str;
    int num;
    double doub;
    char x;
    //Constructor
    node(string str_,int num_,double doub_,char x_){
        str=str_;
        num=num_;
        doub=doub_;
        x=x_;
    }
    node(){}
};

//array <int ,5 > arr2;//declared globally ,hence initialized with zeroes arr2={0,0,0,0,0}
template <class t1>
void Display(t1 arr){
    for (int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    /*double val=10.0;
    //cout<<Mayank::val<<endl;
    //Wrong way of defining ,has no syntax error ,but still you shouldn't define like this
    //This method willn't work if there is no default constructor
    node Mayank;
    Mayank.str="Madan";
    Mayank.num=1;
    Mayank.doub=100.0;
    Mayank.x='X';
    //Correct way of defining
    node* Boy=new node("Mayank",1,10,'X');*/

    //Containers
    //Arrays
    //array <int ,100> arr;//100 size integer data type array declared
    //array <int ,3> arr1;//arr1={? ? ?}

    //array <int,5> arr={1,5,6}; //arr={1,5,6,0,0}
    //array<int ,5> arr={1};//arr={1,0,0,0,0}
    //arr.fill(5);//fills whole array with 5;
    //Display(arr,5);

    //iterators
    //begin(),rbegin(),end(),rend()
    // begin contains address of first element;
    // rbegin contains address of last element
    // end contains address of element after last element
    // rend contains address of element before first element

    //array<int,5>arr={1,2,4,7,5};
    //using for each loop
    /*for(auto it=arr.begin();it!=arr.end();it++) {
		cout << *it << " "; 
	}
    cout<<endl;*/

    /*for(auto it=arr.rbegin();it!=arr.rend();it++) {
		cout << *it << " "; 
	}
    cout<<endl;*/

    //for each loop
    /*for (auto it :arr){
        cout<<it<<" ";
    }
    cout<<endl;*/

    /*string s="Mayank Madan";
    for (char c:s){
        cout<<c<<" ";
    }
    cout<<endl;*/

    //size
    //cout<<arr.size()<<endl;
    
    //front
    //cout<<arr.front()<<endl;
    //back
    //cout<<arr.back()<<endl;


    //VECTOR//

    /*vector<int>arr;//arr={}
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);*/

    /*cout<<arr.size()<<endl;
    Display(arr);
    arr.pop_back();
    arr.pop_back();

    cout<<arr.size()<<endl;
    Display(arr);*/

    //arr.clear();
    //Display(arr);

    //declaring vector with some size
    //vector initializes itself with zeroes,if nothing is specified

    //vector<int> vec(5);
    //Display(vec);

    //vector<int> vec(4,10);
    //Display(vec);

    //Copying entire vec1 into vec2

    //vector<int> vec1(4,10);
    //vector<int> vec2(vec1.begin(),vec1.end()); One way
    //vector<int> vec2(vec1); Another way
    //Display(vec1);
    //Display(vec2);


    //Emplace back uses less time than push_back ,hence resolves TLE sometimes
    /*vec1.emplace_back(21);
    vec1.emplace_back(22);
    vec1.emplace_back(23);
    vec1.emplace_back(24);
    vec1.emplace_back(25);*/

    /*Display(vec1);

    vector<int> vec2(vec1.begin(),vec1.begin()+2);
    Display(vec2);

    swap(vec1,vec2);//->Swaps values of vec1 and vec2

    cout<<endl<<endl;
    Display(vec1);
    Display(vec2);*/

    //Defining 2D vectors

    /*vector< vector<int> > vec;

    vector<int>vec1;
    vec1.emplace_back(10);
    vec1.emplace_back(20);
    vec1.emplace_back(30);

    vec.emplace_back(vec1);

    vector<int>vec2;
    vec2.emplace_back(40);
    vec2.emplace_back(50);

    vec.emplace_back(vec2);

    vector<int>vec3;
    vec3.emplace_back(60);
    vec3.emplace_back(70);
    vec3.emplace_back(80);

    vec.emplace_back(vec3);

    for(auto vctr:vec){
        for(auto val:vctr){
            cout<<val<<" ";
        }
        cout<<endl;
    }*/

    //Defining 10*20 vector

    //vector< vector<int> > vec(10,vector<int> (20,0));
    /*for(auto vctr:vec){
        for(auto val:vctr){
            cout<<val<<" ";
        }
        cout<<endl;
    }*/

    //array of vector -type

    //vector<int> arr[4];
    //arr[0].push_back(1);

    //Defining a (10 * 20 * 30) 3D vector

    /*vector< vector < vector<int> > > vec(10 ,vector<vector<int> >(20, vector<int> (30,0)));
    for(auto vctr:vec){
        for(auto vctr1:vctr){
            for(auto val:vctr1){
                cout<<val<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }*/

    
    return 0;
}