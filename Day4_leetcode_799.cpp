/*
EXPLANATION

The Approach is Simple we have stack Glasses in a pyramid.
Here first row has one glass ans the second row has 2 glasses, and so on to until 100th row.
some champagne is poured into the first glass at the top.
As , it got fulled the excess liquid get poured to remainig glasses.
When those glasses become full, any excess champagne will fall equally to the left and right of those glasses, and so on.
So if the first glass is full then only remaining glasses get poured.
So iterating over row.
now assume first glass when got filled so it overflow is divided equally in the 2 glasses which were at next level.
so assume 1 unit is the limit of top glass it can hold.
Threfore, the next level will got (v[i][j] - 1) / 2.0 as equal amout will be stored at next level.
At last we will return v[query_row][query_glass] the answer.
*/
class Solution {

public:

double champagneTower(int poured, int query_row, int query_glass) {

        

        //dp matrix

        double v[101][101] = {0.0};

    

        // as first glass will be poured always

        // ans overflow will be flowed to next level

        v[0][0] = poured;

    

        for (int i = 0; i < 100; i++)

        {

            for (int j = 0; j <= i; j++)

            {

                // If the glass >=1

                if (v[i][j] >= 1)

                {

                    // split  (v[i][j] - 1) into next level

                    v[i + 1][j]     += (v[i][j] - 1) / 2.0;

                    v[i + 1][j + 1] += (v[i][j] - 1) / 2.0;

                    v[i][j] = 1;

                }

            }

        }

        return v[query_row][query_glass];

    }

};
        
