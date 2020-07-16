#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the maximumPerimeterTriangle function below.
vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    sort(sticks.begin(),sticks.end());

    vector<vector<int>> valid_triangles;

    int size = sticks.size();
    // loop through until 3rd to last value
    for(int i=0;i<size-2;i++){
        vector<int> triangle(3,0);
        bool invalid = (sticks[i] + sticks[i+1])<=sticks[i+2]; // to check for degenerate

        if(!invalid){ // If triangle is NOT degenerate 
            triangle[0]=sticks[i];
            triangle[1]=sticks[i+1];
            triangle[2]=sticks[i+2];
            valid_triangles.push_back(triangle);
        }
    }

    if(valid_triangles.empty()){ // If there are NO valid triangles
        vector<int> triangle(1,-1);
        valid_triangles.push_back(triangle); // If No valid triangles exist, print -1
    }else{
        int max_side = valid_triangles[0][2]; // Initial selection for max side
        int valid_tirangles_size = valid_triangles.size();
        for(vector<vector<int>>::iterator itr=valid_triangles.begin()+1;itr!=valid_triangles.end();++itr){
            if(max_side>(*itr)[2]){ // If current max side is NOT bigger than intial max side
                valid_triangles.erase(itr); // Erase this triangle, NO use!
            }else{ // <= to initial max_side
                max_side = (*itr)[2];
                valid_triangles.erase(--itr); // erase previous max side
            }
        }
    }
    return valid_triangles[0]; // return the first triangle
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string sticks_temp_temp;
    getline(cin, sticks_temp_temp);

    vector<string> sticks_temp = split_string(sticks_temp_temp);

    vector<int> sticks(n);

    for (int i = 0; i < n; i++) {
        int sticks_item = stoi(sticks_temp[i]);

        sticks[i] = sticks_item;
    }

    vector<int> result = maximumPerimeterTriangle(sticks);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
