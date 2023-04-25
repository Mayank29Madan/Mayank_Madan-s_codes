#include </usr/local/bin/include/bits/stdc++.h>

using namespace std;

int main(){
    //set: ordered,lowest element is on top ,and highest on bottom.
    //You can't iterate over set 
    //but can access elemnts using iterators
    //given n elements,tell me the number of unique elements
    //Implementation
    /*int n,x;
    cin>>n;
    set<int> st;
    for(int i=0;i<n;i++){
        cin>>x;
        st.insert(x);//TC of insert function is log(N),where N is the no. of elements inserted.
    }
    cout<<endl<<st.size()<<endl; //returns size of set

    //Iterators in set
    cout<<*(st.begin())<<endl;//lowest element
    cout<<*(st.rbegin())<<endl;
    //Iterating over whole set
    cout<<endl;
    for(auto it=st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;*/

    //erase functionality
    //can also be initialized explicitly after C++11 extension or later
    /*set<int> st={12,13,1,4,42};
    st.emplace(1);// takes less time;
    st.insert(2);
    st.insert(5);
    st.insert(2);
    st.insert(3);
    st.insert(7);
    st.insert(9);
    st.insert(5);
    st.insert(10);*/

    /*cout<<*st.begin()<<endl;
    st.erase(st.begin());//TC of st.erase(iterator) is O(log(N))
    cout<<*st.begin()<<endl;*/

    //first let's print the whole set using iterator
    /*for(auto it =st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;*/

    //erasing a partcular range through erase function
    //auto it=st.end();
    //it--;
    //st.erase(st.begin(), st.begin() + 2);//I don't fucking know ,why isn't it working!!
    /*st.erase(9);//st.erase(key);
    cout<<st.empty()<<endl;

    for(auto it =st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;*/

    /*set<int> st ={1,5,7,4};
    auto it =st.find(5);//if element present in set,then find returns iterator to element
    auto it1 =st.find(11);//if element not present in set,then find returns iteratot st.end();

    cout<<endl<<*it<<endl<<endl;
    cout<<endl<<*it1<<endl<<endl;*/


    //UNORDERED_SET
    //unordered_set<int> st={1,4,5};//Here we don't know order which element is where,not using iterator also
    //Average time complexity =O(1)
    //Worst case time complexity =O(n)
    //Initially use unordered_set when you just need to get distinct elemnts and has nothing to do with order.

    //st.insert(4);
    //st.emplace(10);
    //st.insert(9);

    //By printing elemnts we can see that there is no  fix order of elements.
    /*for(auto it =st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;*/

    //MULTISET

    //multiset<int> ms;
    //In this you can store duplicate elements also.
    //this has order
    //for example ms={1,1,2,3,4,4,4,5,6}//this is one of am example of multiset

    /*ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(4);
    ms.insert(4);
    ms.insert(5);
    ms.insert(6);*/

    /*for(auto it =ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;*/

    //ms.erase(4);//deletes all instances of key value;
    //auto it=ms.find(4);//returns iterator to first instance of element ,if present in set

    /*for(auto it =ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;*/

    //to delete entire set 
    //There are two ways
    //Ist way:
    //ms.erase(ms.begin(),ms.end());//[)
    //IInd way:
    //ms.clear();

    /*for(auto it =ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;*/

    //cout<<ms.count(4)<<endl;//return occurence of key value in multiset, for set it will always be equal to 1

    //MAP
    //KEY VALUE ->Key is unique
    //Similar to Dictionary

    /*map<string,int> mpp;
    mpp["Mayank"]=1;
    mpp["Abhay"]=2;
    mpp["Tushar"]=3;
    mpp["Bhavishya"]=1;
    mpp["Umesh"]=1;*/

    //Map always sorts according to keys
    //Here Abhay<Bhavishya<Mayank<Tushar<Umesh

    //TC of map is O(log(N))

    //mpp["Bhavishya"]=2;//1 will be overwritten by 2

    //mpp.emplace("Rohitash",4);
    //auto it=mpp.find("Rohitash");//mpp.find("Key")
    //cout<<it->first<<" "<<it->second<<endl;
    //Printing map

    //mpp.erase("Mayank"); //provided key
    //mpp.erase(mpp.begin());//provided iterator

    //mpp.clear();//clears whole map
    //mpp.erase(mpp.begin(),mpp.end());//clears whole map

    /*for(auto it : mpp){//it contains pair  of {Key Value}
        cout<<it.first<<" "<<it.second<<endl;
    }*/

    //UNORDERED MAP
    //unordered_map<int,int> mpp;
    //similar difference between map and unordered_map as it was between set and unordered_set
    //Time complexity is O(1) in almost all cases
    //Worst -case time complexity is O(N)

    //PAIR CLASS
    /*pair<int,int> pr={1,2};
    cout<<pr.first<<" "<<pr.second<<endl;

    pair<pair<int,int>,int> pr1={{1,2},3};
    cout<<"("<<(pr1.first).first<<","<<(pr1.first).second<<")"<<" "<<pr1.second<<endl;

    //similary
    pair<pair<int,int>,pair<int,int>> pr2={{1,2},{3,4}};
    cout<<pr2.first.first<<endl;//-->1
    cout<<pr2.second.first<<endl;//-->3*/

    //unordered_map<pair<int,int>,int> mpp; is not possible

    //MULTIMAP
    //similar difference between map and multimap as it was between set and multiset

    /*multimap<string,int> mpp;
    mpp.emplace("Mayank",1);
    mpp.emplace("Mayank",2);

    for(auto it : mpp){//it contains pair  of {Key Value}
        cout<<it.first<<" "<<it.second<<endl;
    }*/


    //STACK
    stack<int> st;//follows lifo--> last in first out
    //push,emplace
    //pop
    //top
    //size
    //empty
    /*st.push(1);
    st.emplace(2);
    st.push(3);
    st.emplace(4);*/
    
    //cout<<st.top()<<endl;
    /*st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.empty()<<endl;*/

    //to delete entire stack
   /* while(!st.empty()){
        st.pop();
    }*/

    //st.push(100);
    //cout<<st.top()<<endl;

    //cout<<endl<<st.size()<<endl;

    //Always remember while accessing top always first check wheteher stack is empty or not
    //if empty and you still try to access top,it will show run time error

    /*while(!st.empty()){
        st.pop();
    }

    if(!st.empty()){
        cout<<st.top()<<endl;
    }
    else{
        cout<<"Empty stack\n";
    }*/

    //QUEUE
    //queue<int> q;//follows fifo operation-->first in first out
    //push
    //front
    //pop
    //size
    //empty
    //TC of each operation is O(1)

    /*q.push(1);
    q.emplace(2);
    q.push(8);
    q.push(4);

    cout<<q.front()<<endl;//-->1
    q.pop();
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<q.empty()<<endl;*/

    //PRIORITY QUEUE
    //priority_queue<int> pq;
    //stores in sorted order
    //TC is of O(log(N))
    //front is the highest priority element i.e the greatest element
    //push
    //size
    //top
    //pop
    //empty

    /*pq.push(1);
    pq.push(5);
    pq.push(6);
    pq.push(2);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;*/

    //Priority_queue with pair values

    /*priority_queue<pair<int,int>> pq;
    pq.push({1,5});    
    pq.push({1,6});    
    pq.push({1,7});    

    cout<<pq.top().first<<" "<<pq.top().second<<endl;*/

    //Ways to store element in a priority queue in (lower priority--->higher priority)

    //One way:
    /*int n,x;
    cin>>n;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        cin>>x;
        pq.emplace(-1*x);
    }

    while(!pq.empty()){
        cout<<-1*pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;*/

    //Another way-->just remember the declaration of priority_queue
    /*priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;*/

    //Similarly we can store any data type in priority_queue in order (lower-->higher) using above format.
    // example : priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; 

    //DEQUE( doubly ended queue)
    //push_front()
    //push_back()
    //pop_front()
    //pop_back()
    //begin,end,rbegin,rend
    //size,clear,empty,at

    /*deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(0);*/

    //cout<<dq.at(2)<<endl;-->2
    //let's print deque in reverse using iterator
    /*for(auto it=dq.rbegin();it!=dq.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;*/

    //LIST

    //list<int> ls;
    //Similar functions as deque
    //one extra function remove is there which has TC of O(1)
    /*ls.push_front(1);
    ls.push_back(2);
    ls.push_back(5);
    ls.push_back(3);
    ls.push_back(5);*/

    //ls.remove(5);//removes all instances of 5

    /*for(auto it=ls.begin();it!=ls.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;*/


    //Question1 : Given N elements,print the elemnts that occurs maximum
    //Ans : using Map;

    /*unordered_map<int,int> mpp;
    int maxi=0;//let 0 is the most occuring element initially
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        mpp[x]++;
        if(mpp[x]>mpp[maxi]){
            maxi=x;
        }
    }
    cout<<endl<<maxi<<endl;*/

    //Question2 : given N elements ,print all elements in sorted order
    //Ans :using multiset
    /*multiset<int> ms;
    int x,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        ms.emplace(x);
    }

    for(auto it = ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;*/
    //OR//use above loop or loop like below to print. 
    /*for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;*/

    
    return 0;
}