//! 출력 사용
#include <iostream>

//! 문자열 사용
#include "string"
//! 문자열 함수 사용
#include "string.h"

#include "algorithm"

//! 백터 사용
#include <vector>


//! 큐 사용!
#include <queue>

using namespace std;

//////////////////////////////////////////////////////////////////////////////////////
/*

설명 : priority_queue는 Heap이라고 하며 우선순위에 따라서 값이 출력된다.

하단의 경우 5, 2, 8, 9, 1, 14가 입력되며

[5, 2, 8, 9, 1, 14] => [1, 2, 5, 8, 9, 14]로 정렬되며 

priority_queue<자료형, 구현체, 비교 연산자>로 입력해야 한다.

priority_queue< int, vector<int>, greater<int> > pq;
-> int형 자료 구조
-> 데이터 구조
-> greater<int> 더큰 int, less<int>작은 int의미
greater => [1, 2, 5, 8, 9, 14]
less 	=> [14, 9, 8, 5, 2, 1]
로 생성이 된다.

	priority_queue<int> q;
	q.push(5);
	q.push(5);
	q.push(2);
	q.push(8);
	q.push(9);
	q.push(1);
	q.push(14);

	출력 : [14 9 8 5 5 2 1]

*/


int main()
{   
	// priority_queue
	priority_queue< int, vector<int>, less<int> > pq;


	// push(element)
	pq.push(5);
	pq.push(2);
	pq.push(8);
	pq.push(9);
	pq.push(1);
	pq.push(14);

	// pop()
	// pq.pop();
	// pq.pop();


	// top();
	cout << "pq top : " << pq.top() << '\n';


	// empty(), size()
	if(!pq.empty()) cout << "pq size : " << pq.size() << '\n';


	// pop all
	while(!pq.empty()){
		cout << pq.top() << " ";
		pq.pop();
	}

	cout << '\n';
	



    return 0;
}



// 2. min-heap 구현, class(또는 struct)의 greater than operator 선언

// #include <iostream>
// #include <functional>
// #include <queue>
// using namespace std;

// class rect {
// public:
//     rect (int w, int h) : _w(w), _h(h) {}

//     void print () { cout << "rect : " << _w << " * " << _h << " = " << _w * _h << endl; }

//     // greater-than operator > 를 정의합니다. 이 operator는 min-heap을 정의할 때 쓰입니다.
//     // class 대신에 struct를 쓰는 것도 가능합니다.
//     bool operator > (const rect& rhs) const { return _w * _h > rhs._w * rhs._h; }

// private:
//     int _w, _h;
// };

// int main ()
// {
//     // min-heap을 선언합니다.
//     priority_queue<rect, vector<rect>, greater<rect> > q;
//     q.push (rect (1, 5));
//     q.push (rect (7, 6));
//     q.push (rect (1, 2));
//     q.push (rect (8, 2));

//     while (!q.empty ()) {
//         rect t = q.top ();
//         q.pop ();

//         t.print ();  // print (1,2), (1,5), (8,2), (7,6)
//     }

//     return 0;
// }
