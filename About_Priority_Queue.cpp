#include<iostream>
#include<queue>
using namespace std;

priority_queue<int> q1;
priority_queue<int,vector<int>,less<int>> q2;     //Max Heap
priority_queue<int,vector<int>,greater<int>> q3;  //Min Heap

q.push(value);  // 큐에 값 입력
top=q.top();    // 우선순위에 의한 top값 반환
size=q.size();  //큐에 몇개가 들어있는지 리턴
empty=q.empty();//큐에 값 있으면 true아니면 false;
q.pop();        //큐의 top값 제거


//struct와 operator을 이용한 바리에이션

struct tmp{
	int HP;
	int MP;
	tmp(int HP,int MP):HP(HP),MP(MP){};
	
};

bool operator<(tmp t1,tmp t2){
	if(t1.HP!=t2.HP)
		return t1.HP<t2.HP;
	else
		return t1.MP<t2.MP;
}

priority_queue<tmp> TM;   //operator 의 기준에 맟춰 default: less()로 정렬해준다 와! 편하다! 잘 사용해보자
