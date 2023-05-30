#include <bits/stdc++.h>
using namespace std; 
void explainPair() {
    pair < int,int > p = {1,2};

    cout<< p.first<<" "<< p.second << "\n";
    pair < int ,pair<int,int>> k = {1,{2,3}};
    cout<< k.second.first<<" "<< k.second.second << " " << k.first<<"\n";
    // pair type array 
    pair <int, int > arr[] = {{1,2},{34,1212},{122,1}};
    cout<<"array[1].second = "<< arr[1].second<< "\n";


}

void explainVector(){
    vector<int> v ; 
    // adding the elements even if the size is predefined 
    v.push_back(1); 
    v.emplace_back(234);

    vector<pair<int,int>> vecPair ;
    vecPair.push_back({12,21});
    vecPair.emplace_back(1,2);
     //  for creating a vector with 5 elements and each one of them being 1009 
    vector <int> tempa(5,1009);
    // for copying a vector to another vector just keep the input in the new vector as the old one
    vector <int> vCopy(tempa);
    // iterator for the vCopy
    vector<int>::iterator it = vCopy.begin();
    vCopy[1] = 123;
    it++;
    cout<<*(it)<<" "<<vCopy.at(2)<<" "<<vCopy[2]<<"\n";
    it+=2;
    cout<<*(it) << " ";
    // looops 
    cout<<"loops\n";
    for(vector<int>::iterator its = vCopy.begin() ; its != vCopy.end() ; its++){
        cout<<*(its)<<"\n";
    }
    cout<<"better loop using auto\n";
    for(auto a = vCopy.begin();a!=vCopy.end();a++){
        cout<<*(a)<<"\n";
    }
    // smallest iteration
    // The range-based for loop syntax can be used to iterate over any container that supports iterators. 
    // It is a powerful tool that can make your code more concise and readable.
    // for(auto element : collection)
    //    {
    //          body of loop
    //    }

    for(auto ii : vCopy){
        cout<<ii<<" ";
    }
}

void explainList(){
    list<int> ls ;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5); 
    ls.emplace_front(23);
}
void explainStack(){
    stack<int> st; 
    st.push(1); 
    st.push(123);
    st.push(12);
    st.push(90);
    st.emplace(88);
    st.size();
    cout<< st.top()<<endl;
    st.pop();

    cout<< st.top()<<endl;
    cout<< st.size()<<endl;
    cout<< st.empty()<<endl;

}
void explainQueue(){
    queue<int>   qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    cout<<"front = "<<qu.front()<<"\n";
    qu.pop();
    cout<<"front = "<<qu.front()<<"\n";
    qu.pop();
    cout<<"front = "<<qu.front()<<"\n";
    qu.pop();
    cout<<"front = "<<qu.front()<<"\n";
    qu.pop();
    cout<<"front = "<<qu.front()<<"\n";
    qu.pop();
    cout<<"front = "<<qu.front()<<"\n";

}
void explainPriorityQueue() {
    priority_queue<int> pq;
    pq.push(100);
    pq.push(2);
    pq.push(23);
    pq.emplace(1002);

    cout<< pq.top()<<"\n";
    pq.pop();
    cout<< pq.top()<<"\n";
    pq.pop();
    cout<< pq.top()<<"\n";
    pq.pop();
    cout<< pq.top()<<"\n";
    
}
void explainSet(){
    set<int> st; 
    st.insert(10);
    st.insert(12);
    st.insert(11);
    st.insert(15);
    st.emplace(120);

    auto it = st.find(120); 
    cout<<*(it);
    auto it = st.find(11);
    cout<<"\n"<<*(it);
    st.erase(it);
    int count = st.count(11);


}
bool comp(pair<int,int> p1, pair<int,int> p2){

}
void explainExtra(){
    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    sort(a,a+3,comp);
    int num = 7;
    int cnt = __builtin_popcount(num);
    long long lo1;
    int cnt1 = __builtin_popcountll(lo1);
    int aa[] ={1,2,3,4,54,43,2};
    int maxi = *max_element(aa,aa+3);

}
int main (){
    // explainPair();
    //explainVector();
    //explainStack();
    //explainQueue();
    // explainPriorityQueue();
    
    return 0;
    
} 