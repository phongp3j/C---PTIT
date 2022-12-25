#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    int x = 0, y = 0 , goc=90;
    for (int i = 0; i < strlen(s); i++)
    {
        if (i == 0)
        {
            if (s[0] == 'G')
                y += 1;
            if (s[0] == 'L')
                x -= 1;
                goc+=90;
            if (s[0] == 'R')
                x += 1;
                goc+=270;
            if (s[0] == 'B')
                y -= 1;
                goc+=180;
        }
        else
        {
            if ((goc%360)==90)
            {
                if (s[i] == 'G')
                    y += 1;
                if (s[i] == 'L')
                    x -= 1;
                    goc+=90;
                if (s[i] == 'R')
                    x += 1;
                    goc+=270;
                if (s[i] == 'B')
                    y -= 1;
                    goc+=180;
            }
            if ((goc%360)==180)
            {

                if (s[i] == 'G')
                    x -= 1;
                if (s[i] == 'L')
                    y -= 1;
                    goc+=90;
                if (s[i] == 'R')
                    y += 1;
                    goc+=270;
                if (s[i] == 'B')
                    x += 1;
                    goc+=180;
            }
            if ((goc%360)==270)
            {

                if (s[i] == 'G')
                    y-= 1;
                if (s[i] == 'L')
                    x += 1;
                    goc+=90;
                if (s[i] == 'R')
                    x -= 1;
                    goc+=270;
                if (s[i] == 'B')
                    y+= 1;
                    goc+=180;
            }
            if ((goc%360)==0)
            {
                if (s[i] == 'G')
                    x += 1;
                if (s[i] == 'L')
                    y += 1;
                    goc+=90;
                if (s[i] == 'R')
                    y -= 1;
                    goc+=270;
                if (s[i] == 'B')
                    x -= 1;
                    goc+=180;
            }
        }
    }
    cout << x << " " << y;
}