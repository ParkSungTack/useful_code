#include<utility>
using namespace std;

pair<type1,type2> p;    //정의

p.first;                  //p의 첫번째 인자
p.second;                 //p의 두번째 인자
make_pair(num1,num2);       //num1,num2가 들어간 pair생성;
operator ==,!=,<,>,<=,>=    //정의가 이미 되어있음

  

pair<int,int> p1=make_pair(10,20);
pair<int,string> p2=make_pair(10,"Hello_World");
