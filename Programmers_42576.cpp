//! ��� ���
#include <iostream>

//! ���ڿ� ���
#include "string"
//! ���ڿ� �Լ� ���
#include "string.h"

#include "algorithm"

//! ���� ���
#include <vector>

using namespace std;

/*
URL : https://programmers.co.kr/learn/courses/30/lessons/42576

���� ����
������ ������ �������� �����濡 �����Ͽ����ϴ�. �� �� ���� ������ �����ϰ�� ��� ������ �������� �����Ͽ����ϴ�.
�����濡 ������ �������� �̸��� ��� �迭 participant�� ������ �������� �̸��� ��� �迭 completion�� �־��� ��, �������� ���� ������ �̸��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���ѻ���
������ ��⿡ ������ ������ ���� 1�� �̻� 100,000�� �����Դϴ�.
completion�� ���̴� participant�� ���̺��� 1 �۽��ϴ�.
�������� �̸��� 1�� �̻� 20�� ������ ���ĺ� �ҹ��ڷ� �̷���� �ֽ��ϴ�.
������ �߿��� ���������� ���� �� �ֽ��ϴ�.

participant 
[leo, kiki, eden]
[marina, josipa, nikola, vinko, filipa]	
[mislav, stanko, mislav, ana]	

completion
[eden, kiki]	
[josipa, filipa, marina, nikola]	
[stanko, ana, mislav]	


����� �� ����
���� #1
leo�� ������ ��ܿ��� ������, ������ ��ܿ��� ���� ������ �������� ���߽��ϴ�.

���� #2
vinko�� ������ ��ܿ��� ������, ������ ��ܿ��� ���� ������ �������� ���߽��ϴ�.

���� #3
mislav�� ������ ��ܿ��� �� ���� ������, ������ ��ܿ��� �� ��ۿ� ���� ������ �Ѹ��� �������� ���߽��ϴ�.



*/

int main()
{   
    vector<string> participant;
    
    vector<string> completion;
   
   
  

    ///////////////////////////////////////////////
    //Case 1
    // const int nTmp1 = 3;
    // string strTmp1[nTmp1] = {"leo", "kiki", "eden"};
    // participant.assign(strTmp1, strTmp1+nTmp1);

    // const int nTmp2 = 2;
    // string strTmp2[nTmp2] = {"eden", "kiki"};
    // completion.assign(strTmp2, strTmp2+nTmp2);

    ////////////////////////////////////////////////
    //Case 2
/*     const int nTmp1 = 5;
    string strTmp1[nTmp1] = {"marina", "josipa", "nikola", "vinko", "filipa"};
    participant.assign(strTmp1, strTmp1+nTmp1);

    const int nTmp2 = 4;
    string strTmp2[nTmp2] = {"josipa", "filipa", "marina", "nikola"};
    completion.assign(strTmp2, strTmp2+nTmp2);
 */

    ////////////////////////////////////////////////
    //Case 2
    const int nTmp1 = 4;
    string strTmp1[nTmp1] = {"mislav", "stanko", "mislav", "ana"};
    participant.assign(strTmp1, strTmp1+nTmp1);

    const int nTmp2 = 3;
    string strTmp2[nTmp2] = {"stanko", "ana", "mislav"};
    completion.assign(strTmp2, strTmp2+nTmp2);
 
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
    
    string answer = "";

    sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());


	int nIdx = 0;
	for (vector<string>::const_iterator iterParti = participant.begin(); iterParti != participant.end(); iterParti++)
	{
		bool bFlag = false;

		vector<string>::const_iterator itercompl = completion.begin() + nIdx;
		while (itercompl != completion.end())
		{
			nIdx++;

			if (*iterParti == *itercompl)
			{
				bFlag = true;

				break;
			}

			itercompl++;
		}

		if (bFlag == false)
		{
			answer = *iterParti;
			break;
		}
	}


    cout << answer << endl;

    return 0;
}