#include</usr/local/bin/include/bits/stdc++.h>
using namespace std;

int main(){

    //BITSET
    //int->32 bits
    //char->8 bits
    //bitset->1 bit
    //bitset<5> bt;
    //cin>>bt;
    //cout<<bt<<endl;
    //Functions:
    //all,any,count,flip,none,set,reset,size,test

    //all->if all the bits are set returns true else false
    //cout<<bt.all()<<endl;

    //any->returns true if any bit is set else false.
    //cout<<bt.any()<<endl;

    //count->returns number of set bits
    //cout<<bt.count()<<endl;

    //flip-> flips the bit which is passed as a parameter,if no parameter is given flips all bits
    //cout<<bt.flip(2)<<endl;//bt.flip(parameter)-> return the bt with flipped bit
    //cout<<bt<<endl;

    //none->return true if none bit is set,else false.//opposite of any()
    //cout<<bt.none()<<endl;

    //set->sets the index given in the parameter
    //if no parameter is given sets all the bits
    //you can provide a second parameter also,where you can specify what you want to set the bit to (0) or (1).

    //bt.set();
    //cout<<bt<<endl;
    //bt.set(2);
    //cout<<bt<<endl;
    //bt.set(2,0);
    //cout<<bt<<endl;

    //reset
    //cout<<bt.reset()<<endl;
    //bt.set();
    //cout<<bt.reset(2)<<endl;

    //size->gives size 
    //cout<<bt.size()<<endl;

    //test(index)->check if bit is set or not at given index
    //cout<<bt.test(1)<<endl;

    //ALGORITHMS
    //Sorting
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    //sorting an array
    //sort(arr,arr+n);//sorts in asecending order
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //similary sorting a vector
    vector<int> vec;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.emplace_back(x);
    }
    //sort(vec.begin(),vec.begin()+3);//->[)

    for(auto it:vec){
        cout<<it<<" ";
    }
    cout<<endl;

    //Reverse 
    //Reversing an array
    //reverse(arr,arr+n);
    /*for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;*/

    //Reversing an vector
    //reverse(vec.begin(),vec.end());
    /*for(auto it:vec){
        cout<<it<<" ";
    }
    cout<<endl;*/

    //Max_element and Min_element in whole or any index range

    //by applying algorithm
    /*int maxi=INT32_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout<<maxi<<endl;*/

    //by stl
    //max_element(),min_element()->gives iterator to that location for both array and vectors ,but in array there

    /*cout<<*max_element(arr,arr+n)<<endl;

    cout<<*min_element(arr,arr+n)<<endl;

    cout<<*max_element(arr,arr+3)<<endl;

    cout<<*max_element(vec.begin(),vec.end())<<endl;

    cout<<*min_element(vec.begin(),vec.end())<<endl;

    cout<<*max_element(vec.begin(),vec.begin()+3)<<endl;*/

    //SUMMING
    //If i give you a range and I want you to find the sum in that range,i to j ,tell me the sum in that range i to j.

    //using Algorithm

    /*int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    cout<<s<<endl;*/

    //using stl Accumulate() function
    //-> Accumulate(startIterator ,EndIterator,initial sum)

    //for arr
    //int sum1_arr=accumulate(arr,arr+n,0);
    //cout<<sum1_arr<<endl;
    //over a range
    //int sum_arr=accumulate(arr,arr+3,0);
    //cout<<sum_arr<<endl;
    //for vector
    //int sum1_vec=accumulate(vec.begin(),vec.end(),0);
    //cout<<sum1_vec<<endl;
    //over a range
    //int sum_vec =accumulate(vec.begin(),vec.begin()+3,0);
    //cout<<sum_vec<<endl;


    //COUNT
    //tell me how many times an element x occurs in an array or vector.

    //using Algorithm
    /*int cnt0=0,x1;
    cin>>x1;
    for (int i=0;i<n;i++){
        if (arr[i]==x1){
            cnt0+=1;
        }
    }
    cout<<cnt0<<endl;*/

    //using stl count() function
    //count(firstIterator,lastIterator,x)
    //for an array
    /*int cnt=count(arr,arr+n,2);
    cout<<cnt<<endl;
    //over a range
    int cnt1=count(arr,arr+3,2);
    cout<<cnt1<<endl;
    //for vector
    int cnt_vec=count(vec.begin(),vec.end(),2);
    cout<<cnt_vec<<endl;
    //over a range
    int cnt1_vec=count(vec.begin(),vec.begin()+3,2);
    cout<<cnt1_vec<<endl;*/

    //Follow notebook for further algorithms and comparators
    return 0;
}