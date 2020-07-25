
//url : https://www.hackerrank.com/challenges/time-conversion/problem

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */

	string strConversion;

	bool bAmPm = false;
	int nIdx = s.find("AM");
	int nHour = atoi(s.substr(0, 2).c_str());

	if (nIdx == -1)//! PM
	{
		nIdx = s.find("PM");
		if (nHour != 12)
			nHour += 12;
	}
	else//! AM
	{
		if (nHour == 12)
			nHour = 0;
	}

	char buff[100];
	snprintf(buff, sizeof(buff), "%02d%s", nHour, s.substr(2, nIdx - 2).c_str());
	strConversion = buff;

	return strConversion;  

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
