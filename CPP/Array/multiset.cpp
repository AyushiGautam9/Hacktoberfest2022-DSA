#include<bits/stdc++.h>
using namespace std;
// creating a function for printing an multiset:
void print_set(multiset<int>s){
    for(auto it:s){
        cout<<it<<endl;
    }
}
 
 //creating a function for inserting elements in multiset:
void insert(multiset<int> &s,int k){
    s.insert(k);
}

int main(){
    multiset<int>s;
    int n;
    cout<<"Enter size of multiset :"<<endl;
    cin>>n;

    // asking for elements from user: 
    for(int i=0;i<n;i++){
        int k;
        cout<<"Enter element :"<<endl;
        cin>>k;
        insert(s,k);
    }
    cout<<"The multiset is :"<<endl;
    print_set(s);

    //some functions in multiset:

    //1.To Find an element :
    int f;
    cout<<"Enter element to be found: "<<endl;
    cin>>f;
    auto it=s.find(f); 
    if(it!=s.end()){
        cout<<(*it)<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    //2.To erase an element :

    int l;
    cout<<"Enter element to erased :"<<endl;
    cin>>l;
    auto y=s.find(l);
    if(y!=s.end()){
        // it will erase all occurences of that element
        s.erase(l);   
    }
    
    else{
        cout<<"Element not present"<<endl;
    }
    cout<<"The map is"<<endl;
    print_set(s);

    //3. Find size of map
    cout<<"The size of map is: "<<s.size()<<endl;
}  