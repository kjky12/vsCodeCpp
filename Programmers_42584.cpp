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

/*

문제 설명
초 단위로 기록된 주식가격이 담긴 배열 prices가 매개변수로 주어질 때, 가격이 떨어지지 않은 기간은 몇 초인지를 return 하도록 solution 함수를 완성하세요.

제한사항
prices의 각 가격은 1 이상 10,000 이하인 자연수입니다.
prices의 길이는 2 이상 100,000 이하입니다.

입출력 예
prices	            return
[1, 2, 3, 2, 3]	    [4, 3, 1, 1, 0]
입출력 예 설명


1초 시점의 ₩1은 끝까지 가격이 떨어지지 않았습니다.
2초 시점의 ₩2은 끝까지 가격이 떨어지지 않았습니다.
3초 시점의 ₩3은 1초뒤에 가격이 떨어집니다. 따라서 1초간 가격이 떨어지지 않은 것으로 봅니다.
4초 시점의 ₩2은 1초간 가격이 떨어지지 않았습니다.
5초 시점의 ₩3은 0초간 가격이 떨어지지 않았습니다.
※ 공지 - 2019년 2월 28일 지문이 리뉴얼되었습니다.

*/

int main()
{   
   vector<int> prices;
   
  

    ///////////////////////////////////////////////
    //Case 1
    const int nTmp1 = 5;
    int naTmp1[nTmp1] = {1, 2, 3, 2, 3};
    prices.assign(naTmp1, naTmp1+nTmp1);


    ////////////////////////////////////////////////
    ////////////////////////////////////////////////
    ////////////////////////////////////////////////
    ////////////////////////////////////////////////
    
    vector<int> answer;
    answer.resize(prices.size());

    int nIdx = 0;
    for (vector<int>::const_iterator iterTmp = prices.begin(); iterTmp != prices.end(); iterTmp++)
    {   
        int nTmp1 = *iterTmp;
        vector<int>::const_iterator iterTmp2 = iterTmp;
        iterTmp2++;
        
        int nIdxCnt = 0;
        bool bFlag = false;
        for (; iterTmp2 != prices.end(); iterTmp2++)
        {   
            nIdxCnt++;

            int nTmp2 = *iterTmp2;
            
            if(nTmp1 > nTmp2)
            {
                answer[nIdx] = nIdxCnt;
                bFlag = true;
            }
        }

        if(bFlag == false)
        {
            answer[nIdx] = nIdxCnt;
        }

        nIdx++;
    }
    
    for (size_t i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << "," << ends;
    }
    

    return 0;
}