#include <iostream>
using namespace std;

void findLongest(int *ptr, int n) 
{
    int longest = *ptr;

    for (int i = 1; i < n; i++) 
    {
        if (*(ptr + i) > longest) 
        {
            longest = *(ptr + i);
        }
    }

    cout << "Longest Episode Duration: "<< longest << "minutes" << endl;
}

int main() {
    int duration[6] = {30,60,35,45,75,55};
    findLongest(duration, 6);

    return 0;
}