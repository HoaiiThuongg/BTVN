#include <vector>
#include <iostream>

using namespace std;

void duocHayKhong(string *map, int w, int Y, int x, bool &song, int h, vector<vector<bool>> &dungSai)
{
    if (!song)
    {
        if (x < 0 || x == w || dungSai[Y][x])
            return;
        dungSai[Y][x] = true;
        if (Y == h - 1)
        {
            song = true;
            return;
        }
        else
        {
            if ((x <= w - 2) && (map[Y][x + 1] == 'E') && (map[Y + 1][x + 1] != 'R') && !song)
            {
                duocHayKhong(map, w, Y + 1, x + 1, song, h, dungSai);
            }
            if (x >= 1 && map[Y][x - 1] == 'E' && map[Y + 1][x - 1] != 'R' && !song)
            {
                duocHayKhong(map, w, Y + 1, x - 1, song, h, dungSai);
            }
            if (map[Y + 1][x] != 'R' && !song)
            {
                duocHayKhong(map, w, Y + 1, x, song, h, dungSai);
            }
        }
    }
}

int main()
{
    int w, h;
    cin >> w >> h;
    string s[2000];
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }

    int x = s[0].find('Y');

    bool song = false;
    vector<vector<bool>> dungSai(h, vector<bool>(w, false));

    duocHayKhong(s, w, 0, x, song, h, dungSai);
    song ? cout << "YES" : cout << "NO";
    return 0;
}