/* COSC 1430 Group 32
Archibald Cruz		- 34
Sara Mendoza		- 33
Benjamin Shapiro	- 33
*/

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int length(const char *a);
// Finds the length of a cstring, which is here defined as const char*.
// This does not count the terminating NULL character.

int main( )
{

    char *words[9];
    char *t3[9];
    char *t4[9];
    char *t5[9];
    int t3c = 0, t4c = 0, t5c = 0;



    fstream file;

    file.open("file.txt");
    for (int i = 0; i < 9; i++)
    {
      words[i] = new char;
      t3[i] = new char;
      t4[i] = new char;
      t5[i] = new char;
    }

    for (int z = 0; z < 9; z++)
    {
      file >> words[z];
      cout << words[z] << endl;
      int len = length(words[z]);
      switch (len)
      {
      case 3: t3[t3c] = words[z]; t3c++; break;
      case 4: t4[t4c] = words[z]; t4c++; break;
      case 5: t5[t5c] = words[z]; t5c++; break;
      }

      for (int p = 0; p < len; p++)
      {
        cout << words[z][p] << endl;
      }


    }

    cout << "Words with 3 letters: " << endl;

    for (int i = 0; i < t3c; i++)
    {
      cout << t3[i] << endl;
    }

    cout << "Words with 4 letters: " << endl;

    for (int i = 0; i < t4c; i++)
    {
      cout << t4[i] << endl;
    }

    cout << "Words with 5 letters: " << endl;

    for (int i = 0; i < t5c; i++)
    {
      cout << t5[i] << endl;
    }
    return 0;

}

int length(const char *a)
{
    int len = 0;
    while (*a != '\0')
    {
        a++;


        len++;
    }
    return len;

}
