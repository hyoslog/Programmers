#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) 
{
	vector<int> answer;

	map<string, int> nameScores;
	for (size_t index = 0; index < name.size(); ++index)
	{
		nameScores.emplace(name[index], yearning[index]);
	}

	for (const vector<string>& datas : photo)
	{
		int score = 0;
		for (const string& data : datas)
		{
			const auto iter = nameScores.find(data);
			if (iter != nameScores.end())
			{
				score += iter->second;
			}
		}

		answer.emplace_back(score);
	}

	return answer;
}

int main()
{
	return 0;
}