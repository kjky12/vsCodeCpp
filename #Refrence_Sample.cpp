//! 출력 사용
#include <iostream>

//! 문자열 사용
#include "string"
//! 문자열 함수 사용
#include "string.h"

//! 알고리즘 소팅 사용
#include "algorithm"

//! 백터 사용
#include <vector>

//! 큐 사용!
#include <queue>

using namespace std;


void 초기_데이터_만들기()
{
    //초기 배열형태의 문자 데이터를 벡터에 넣을때 사용된다!!

    vector<string> participant;
    vector<string> completion;
    
    const int nTmp1 = 3;
    string strTmp1[nTmp1] = {"leo", "kiki", "eden"};
    participant.assign(strTmp1, strTmp1+nTmp1);

    const int nTmp2 = 2;
    string strTmp2[nTmp2] = {"eden", "kiki"};
    completion.assign(strTmp2, strTmp2+nTmp2);


    //! 데이터 출력 테스트!
    for (size_t i = 0; i < participant.size(); i++)
    {
        cout << participant[i] << endl;        
    }
}


int main()
{

  

    return 0;
}