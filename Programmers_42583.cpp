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
URL : https://programmers.co.kr/learn/courses/30/lessons/42583

문제 설명

트럭 여러 대가 강을 가로지르는 일 차선 다리를 정해진 순으로 건너려 합니다. 모든 트럭이 다리를 건너려면 최소 몇 초가 걸리는지 알아내야 합니다. 트럭은 1초에 1만큼 움직이며, 다리 길이는 bridge_length이고 다리는 무게 weight까지 견딥니다.
※ 트럭이 다리에 완전히 오르지 않은 경우, 이 트럭의 무게는 고려하지 않습니다.

예를 들어, 길이가 2이고 10kg 무게를 견디는 다리가 있습니다. 무게가 [7, 4, 5, 6]kg인 트럭이 순서대로 최단 시간 안에 다리를 건너려면 다음과 같이 건너야 합니다.

경과 시간	다리를 지난 트럭	다리를 건너는 트럭	    대기 트럭
0	        []	                []	                [7,4,5,6]
1~2	        []	                [7]                 [4,5,6]
3	        [7]	                [4]                 [5,6]
4	        [7]	                [4,5]	            [6]
5	        [7,4]	            [5]	                [6]
6~7	        [7,4,5]             [6]	                []
8	        [7,4,5,6]	        []	                []


따라서, 모든 트럭이 다리를 지나려면 최소 8초가 걸립니다.

solution 함수의 매개변수로 다리 길이 bridge_length, 다리가 견딜 수 있는 무게 weight, 트럭별 무게 truck_weights가 주어집니다. 이때 모든 트럭이 다리를 건너려면 최소 몇 초가 걸리는지 return 하도록 solution 함수를 완성하세요.



제한 조건

bridge_length는 1 이상 10,000 이하입니다.
weight는 1 이상 10,000 이하입니다.
truck_weights의 길이는 1 이상 10,000 이하입니다.
모든 트럭의 무게는 1 이상 weight 이하입니다.


입출력 예
bridge_length	    weight	    truck_weights	                    return
2	                10	        [7,4,5,6]	                        8
100	                100	        [10]	                            101
100	                100	        [10,10,10,10,10,10,10,10,10,10]	    110


*/


int main()
{   
   int bridge_length = 0;
   int weight = 0;
   vector<int> truck_weights;
   
  

    ///////////////////////////////////////////////
    //Case 1
    bridge_length = 2;
    weight = 10;
    const int nTmp1 = 4;
    int naTmp1[nTmp1] = {7,4,5,6};
    truck_weights.assign(naTmp1, naTmp1+nTmp1);


    ////////////////////////////////////////////////
    //Case 2
    // bridge_length = 100;
    // weight = 100;
    // const int nTmp1 = 1;
    // int naTmp1[nTmp1] = {10};
    // truck_weights.assign(naTmp1, naTmp1+nTmp1);

    ////////////////////////////////////////////////
    //Case 3
    // bridge_length = 100;
    // weight = 100;
    // const int nTmp1 = 10;
    // int naTmp1[nTmp1] = {10,10,10,10,10,10,10,10,10,10};
    // truck_weights.assign(naTmp1, naTmp1+nTmp1);

 
    ////////////////////////////////////////////////
    ////////////////////////////////////////////////
/*     for (size_t i = 0; i < participant.size(); i++)
    {
        cout << participant[i] << endl;
        
    } */
   

    ////////////////////////////////////////////////
    ////////////////////////////////////////////////
    ////////////////////////////////////////////////
    ////////////////////////////////////////////////
    

    int answer = 0;

    //! 도착한 트럭
    queue<int> qFinish;
    //! 입력될 트럭!
    queue<int> qInput;
    for (vector<int>::const_iterator iterTmp = truck_weights.begin(); iterTmp != truck_weights.end(); iterTmp++)
        qInput.push(*iterTmp);
    //! 다리위 값
    queue<int> qBridge;
    for (size_t i = 0; i < bridge_length; i++)
        qBridge.push(-1);
    
    bridge_length;
    weight;
    int nCurrentWeight = 0;


    //while (!qInput.empty() || qFinish.size() != truck_weights.size())
    while (qFinish.size() != truck_weights.size())
    {

        //7, 4, 5, 6순으로 출력됨!
        //cout << qInput.front() << endl;
        // qInput.pop();
        int nTruckWeight = 0;
        if(!qInput.empty())
            nTruckWeight = qInput.front();

        if(nCurrentWeight + nTruckWeight > weight || qInput.empty()) //! 크기가 넘어서면 -1값을 입력해줌
        {
            qBridge.push(-1);

            int nOutValue = qBridge.front();
            
            if(nOutValue > 0)
            {
                nCurrentWeight -= nOutValue;
                qFinish.push(nOutValue);
            }         
                
        }
        else                                        //! 크기가 되면 다음 트럭 무게를 넣어줌
        {
            qBridge.push(nTruckWeight);            
            nCurrentWeight += nTruckWeight;
            qInput.pop();
        }

        qBridge.pop();
        answer++;

        cout << "TI:"<< answer << "\t" << ends;
        cout << "FI:"<< qFinish.size() << "\t" << ends;
        cout << "IN:"<< qBridge.size() << "\t" << ends;
        cout << "WA:"<< qInput.size() << "\t" << endl;        
    }
    

    int a= 0;

    // for (vector<int>::const_iterator iterTmp = truck_weights.begin(); iterTmp != truck_weights.end(); )
    // { 
    //     nCurrentWeight += *iterTmp;
    //     iterTmp++;  

    //     int nPopValue = -2;
    //     //! 다음 트럭 무게를 더햇는데 초과하면 가장 가까운 트럭을 보냄
    //     while (nCurrentWeight + *iterTmp > weight)
    //     {   
    //         nPopValue = qBridge.front();
    //         //! 다리에 트럭이 없는경우 다시 한칸
    //         while (nPopValue == -1)
    //         {
    //             qBridge.push(-1);
    //             qBridge.pop();   

    //             nPopValue = qBridge.front();

    //             answer++;
    //         }

    //         //! Pop된 데이터가 0초과의 경우 현재 무게를 빼준다!
    //         nCurrentWeight -= nPopValue;                
    //         if(nPopValue > 0)
    //         {
    //             qFinish.push(nPopValue);

    //             nCurrentWeight += *iterTmp;
    //             iterTmp++;
    //         }
    //     }

    //     // if(nPopValue == -2)
    //     // {
    //     //     answer++;
    //     // }

    //     // nCurrentWeight += *iterTmp;        

    //     // qBridge.push(*iterTmp);
    //     // qBridge.pop();
    //     // answer++;
        
    //     // iterTmp++;      
    // }


    // answer += qBridge.size();

    // //! 다음이 없는데 큐가 다 안끝나고 트럭이 전부 건너지 못하는 경우
    //  while(qBridge.size() > 0)
    //  {
    //      qBridge.pop();
    //      nPopValue = qBridge.front();

    //      answer++;

    //     if(nPopValue > 0)
    //     {
    //         break;
    //     }
    //  }



    

    return 0;
}