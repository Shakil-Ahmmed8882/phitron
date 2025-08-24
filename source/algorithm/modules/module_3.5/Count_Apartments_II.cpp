#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> buildingMap;
vector<vector<bool>> visited;
int rows, cols;

vector<pair<int,int>> directions = {{-1,0}, {0,1}, {1,0}, {0,-1}};

bool isValid(int r, int c){
    return r >= 0 && r < rows && c >= 0 && c < cols;
}

int bfs(int startRow, int startCol){
    queue<pair<int,int>> q;
    q.push({startRow, startCol});
    visited[startRow][startCol] = true;
    int roomCount = 1;

    while(!q.empty()){
        auto [r, c] = q.front(); q.pop();
        for(auto [dr, dc] : directions){
            int nr = r + dr;
            int nc = c + dc;
            if(isValid(nr, nc) && !visited[nr][nc] && buildingMap[nr][nc] == '.'){
                visited[nr][nc] = true;
                roomCount++;
                q.push({nr, nc});
            }
        }
    }

    return roomCount;
}

int main(){
    cin >> rows >> cols;
    cin.ignore();

    buildingMap = vector<vector<char>>(rows, vector<char>(cols));
    visited = vector<vector<bool>>(rows, vector<bool>(cols, false));

    for(int i = 0; i < rows; i++){
        string line;
        getline(cin, line);
        for(int j = 0; j < cols; j++)
            buildingMap[i][j] = line[j];
    }

    vector<int> apartmentSizes;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(buildingMap[i][j] == '.' && !visited[i][j]){
                apartmentSizes.push_back(bfs(i, j));
            }
        }
    }

    if(apartmentSizes.empty()){
        cout << 0 << endl;
    } else {
        sort(apartmentSizes.begin(), apartmentSizes.end());
        for(int size : apartmentSizes)
            cout << size << " ";
        cout << endl;
    }

    return 0;
}
