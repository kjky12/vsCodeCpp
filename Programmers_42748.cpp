//! ��� ���
#include <iostream>

//! ���ڿ� �Լ� ���
#include "string.h"

#include "algorithm"

//! ���� ���
#include <vector>

using namespace std;

/*
URL : https://programmers.co.kr/learn/courses/30/lessons/42748


���� ����
�迭 array�� i��° ���ں��� j��° ���ڱ��� �ڸ��� �������� ��, k��°�� �ִ� ���� ���Ϸ� �մϴ�.

���� ��� array�� [1, 5, 2, 6, 3, 7, 4], i = 2, j = 5, k = 3�̶��

array�� 2��°���� 5��°���� �ڸ��� [5, 2, 6, 3]�Դϴ�.
1���� ���� �迭�� �����ϸ� [2, 3, 5, 6]�Դϴ�.
2���� ���� �迭�� 3��° ���ڴ� 5�Դϴ�.
�迭 array, [i, j, k]�� ���ҷ� ���� 2���� �迭 commands�� �Ű������� �־��� ��, commands�� ��� ���ҿ� ���� �ռ� ������ ������ �������� �� ���� ����� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���ѻ���
array�� ���̴� 1 �̻� 100 �����Դϴ�.
array�� �� ���Ҵ� 1 �̻� 100 �����Դϴ�.
commands�� ���̴� 1 �̻� 50 �����Դϴ�.
commands�� �� ���Ҵ� ���̰� 3�Դϴ�.
����� ��
array	                commands	                        return
[1, 5, 2, 6, 3, 7, 4]	[[2, 5, 3], [4, 4, 1], [1, 7, 3]]	[5, 6, 3]
����� �� ����
[1, 5, 2, 6, 3, 7, 4]�� 2��°���� 5��°���� �ڸ� �� �����մϴ�. [2, 3, 5, 6]�� �� ��° ���ڴ� 5�Դϴ�.
[1, 5, 2, 6, 3, 7, 4]�� 4��°���� 4��°���� �ڸ� �� �����մϴ�. [6]�� ù ��° ���ڴ� 6�Դϴ�.
[1, 5, 2, 6, 3, 7, 4]�� 1��°���� 7��°���� �ڸ��ϴ�. [1, 2, 3, 4, 5, 6, 7]�� �� ��° ���ڴ� 3�Դϴ�.


*/

int main()
{   

    vector<int> array;
    vector<vector<int>> commands;

    ///////////////////////////////////////////////
    //Case 1
     const int nTmp1 = 7;
     int strTmp1[nTmp1] = {1, 5, 2, 6, 3, 7, 4};
     array.assign(strTmp1, strTmp1+nTmp1);

    vector<int> vecTmp;
    const int nTmp2 = 3;
    int strTmp2[nTmp2] = {2, 5, 3};
    vecTmp.assign(strTmp2, strTmp2+nTmp2);
    commands.push_back(vecTmp);

    int strTmp3[nTmp2] = {4, 4, 1};
    vecTmp.assign(strTmp2, strTmp2+nTmp2);
    commands.push_back(vecTmp);

    int strTmp4[nTmp2] = {1, 7, 3};
    vecTmp.assign(strTmp2, strTmp2+nTmp2);
    commands.push_back(vecTmp);

    //////////////////////////////////////////
    vector<int> answer;
    for (size_t i = 0; i < commands.size(); i++)
    {
        if(commands[i].size() == 3)
        {
            int nStartIdx = commands[i][0];
            int nEndIdx = commands[i][1];
            int nPosIdx = commands[i][2];

            vector<int> vecTemp(commands[i].begin() + nStartIdx, commands[i].begin() + nEndIdx);

            cout << vecTemp.size() << endl;

            for (size_t j = 0; j < vecTemp.size(); j++)
            {
                /* code */

                cout << vecTemp[j] << endl;
                
            }
            

            sort(vecTemp.begin(), vecTemp.end(), less<int>());


            //commands[i][]


        }
        


    }
    






    //cout << answer << endl;

    return 0;
}