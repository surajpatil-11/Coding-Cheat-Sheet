#include <bits/stdc++.h>

using namespace std;
int main() {
    //Array 1D
    int a[5] = {1,2,3,4,5};
    cout << a[2] << endl ; //3
    
    //Array 2D
    int b[2][3] = {{1,2,3},{4,5,6}} ;
    cout << b[1][2] << endl ; //6
    
    //Vector 1D
    vector<string> v1 = {"hello", "world"};
    cout << v1[1] << endl ; //world
    
    vector<string> v2(5, "default");
    cout << v2[3] << endl ; //default
    
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    cout << v.size() << endl ;//2
    cout << v[0] << endl ; //3
    v.pop_back();
    cout << v.size() << endl ;//1
    v.clear();
    cout << v.size() << endl ;//0
    
    //Vector 2D
    vector<vector<int>> v2d = vector<vector<int>>(3, vector<int>(2,-1));
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout << v2d[i][j] << " " ;
        }
        cout << endl ;
    }
    
    //Stack
    stack<int> st ;
    st.push(1);
    st.push(2);
    cout << st.top() << endl ; //2
    st.pop();
    cout << st.top() << endl ; //1
    
    //Queue
    queue<int> q ;
    q.push(1);
    q.push(2);
    cout << q.front() << endl ; //1
    q.pop();
    cout << q.front() << endl ; //2
    
    //Map
    map<int, string> mp ;
    mp[3] = "suraj" ;
    mp[5] = "patil" ;
    cout << mp[3] << endl ; //suraj
    
    map<int, string> ::iterator it;
    for(it=mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl ;
    }
    
    if(mp.find(4) == mp.end()){
        cout << "4 no present" << endl ; 
    }
    
    //Set
    set<int> s ;
    s.insert(2);
    s.insert(3);
    s.insert(2);
    cout << s.size() << endl ; // 2
    set<int> ::iterator sit ;
    for(sit=s.begin();sit!=s.end();sit++){
        cout << *sit << endl ;
    }
  
    return 0;
}
