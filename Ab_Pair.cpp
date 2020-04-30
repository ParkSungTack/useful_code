#include<utility>
using namespace std;

pair<type1,type2> p;    //정의

p.first;                  //p의 첫번째 인자
p.second;                 //p의 두번째 인자
make_pair(num1,num2);       //num1,num2가 들어간 pair생성;
operator ==,!=,<,>,<=,>=    //정의가 이미 되어있음

  

pair<int,int> p1=make_pair(10,20);
pair<int,string> p2=make_pair(10,"Hello_World");

//딕셔너리
#include<map>
map<string,int> M;

//insert
m.insert(pair<string,int("string",5)>);
m.insert(make_pair("string",5));
m["hello"]=5;

//iterate
   map<string, int>::iterator it; // auto it = m.begin()도 가능
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    for (pair<string, int> atom : m) {
        cout << atom.first << " " << atom.second << endl;
    }

//find
    m.find("string")->first
    m.find("string")->second
    m["string"]

//erase
    m.erase("string");
    m.erase(m.find("string"));
    for (pair<string, int> atom : m) {
        cout << atom.first << " " << atom.second << endl;
      
//size
    m.size()    
    
//empty
    m.empty()
