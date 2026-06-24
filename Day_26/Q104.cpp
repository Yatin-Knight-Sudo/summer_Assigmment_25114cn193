#include <iostream>
#include <string>
using namespace std;

struct Quiz
{
    string question;
    string A;
    string B;
    string C;
    string D;
    char answer;
};

int main()
{
    Quiz q[3];

    q[0] = {
        "What is the capital of India?",
        "Mumbai",
        "Delhi",
        "Kolkata",
        "Chennai",
        'B'
    };

    q[1] = {
        "What is 2 + 2?",
        "2",
        "3",
        "4",
        "5",
        'C'
    };

    q[2] = {
        "Who developed C++?",
        "Bjarne Stroustrup",
        "Dennis Ritchie",
        "James Gosling",
        "Guido van Rossum",
        'A'
    };

    int score = 0;
    char userAnswer;

    for(int i = 0; i < 3; i++)
    {
        cout << "\nQuestion " << i + 1 << endl;
        cout << q[i].question << endl;

        cout << "A. " << q[i].A << endl;
        cout << "B. " << q[i].B << endl;
        cout << "C. " << q[i].C << endl;
        cout << "D. " << q[i].D << endl;

        cout << "Enter answer: ";
        cin >> userAnswer;

        if(userAnswer == q[i].answer)
        {
            score++;
        }
    }

    cout << "\nFinal Score = " << score << "/3";

    return 0;
}