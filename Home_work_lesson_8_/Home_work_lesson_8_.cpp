#include <iostream>

enum game {new_game,countinu_game,leave_gmae};

using namespace std;

int main()
{
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";
    unsigned int number_1;
    cout << "\tEnter a 6-digit number: ";
    cin >> number_1;

    if (number_1 >= 100000 && number_1 <= 999999)
    {
        int a_ = number_1 % 10;
        int b_ = (number_1 / 10) % 10;
        int r_ = (number_1 / 100) % 10;
        int u_ = (number_1 / 1000) % 10;
        int n_ = (number_1 / 10000) % 10;
        int o_ = (number_1 / 100000) % 10;

        int num_1 = o_ + n_ + u_;
        int num_2 = r_ + b_ + a_;

        num_1 == num_2 && cout << "\tPleasnt number" || cout << "\tUnpleasnt number";
    }
    else
    {
        cout << "\tYou have entered an incorrect number";
    }

    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";
    int choice;
    cout << "\tEnter choice :";
    cin >> choice;
    game game_ = (game)choice;

    switch (game_)
    {
    case 1:
        cout << "\tNew game";
        break;
    case 2:
        cout << "\tContinue gmae";
        break;
    case 3:
        cout << "\tFinish game";
        break;
    default:
        cout << "\tYou have entered an incorrect choice";
        break;
    }
    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 3";
    cout << "\n\n\n\n";
    int age;
    char gender;
    cout << "\tEnter age :";
    cin >> age;
    cout << "\tEnter gender :";
    cin >> gender;
    if ((age > 61 && (gender == 'W' || gender == 'w')) || (age > 64 && (gender == 'M' || gender == 'm')))
    {
        cout << "\n\tYou are of retirement age";
        cout << "\n\tAge: " << age;
        cout << "\n\tGender: " << gender;
    }
    else
    {
        cout << "\n\tYou are not of retirement age";
    }
    // m - man
   // w - woman
    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 4";
    cout << "\n\n\n\n";
    unsigned int time;
    cout << "\tEnter time :";
    cin >> time;

    if (time == 1 || time == 2 || time == 3 || time == 4 || time == 5)
    {
        cout << "\tGood Night";
    }
    else if (time == 6 || time == 7 || time == 8 || time == 9 || time == 10 || time == 11)
    {
        cout << "\tGood Mornig";
    }
    else if (time == 12 || time == 13 || time == 14 || time == 15 || time == 16 || time == 17)
    {
        cout << "\tGood Afternoon";
    }
    else if (time == 18 || time == 19 || time == 20 || time == 21 || time == 22 || time == 23)
    {
        cout << "\tGood Evening";
    }
    else
    {
        cout << "\tUncorrect time";
    }
    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 5";
    cout << "\n\n\n\n";
    unsigned int year;
    cout << "\tEnter year :";
    cin >> year;
    if (year % 100 != 0 || year % 4 == 100 && year % 400 == 0)
    {
        cout << "\tLong Year";
    }
    else
    {
        cout << "\tShort Year";
    }
    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 6";
    cout << "\n\n\n\n";
    unsigned int day_;
    unsigned int month_;
    unsigned int year_;
    cout << "\tEnter day :";
    cin >> day_;
    cout << "\tEnter month :";
    cin >> month_;
    cout << "\tEnter year :";
    cin >> year_;
    const int days_Month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month_ >= 1 && month_ <= 12 && day_ >= 1 && day_ <= days_Month[month_])
    {
        if (day_ < days_Month[month_])
        {
            day_++;
        }
        else {
            day_ = 1;
            month_++;

            if (month_ > 12)
            {
                month_ = 1;
                year_++;
            }
        }
        cout << "\tNext day : " << day_ << "/" << month_ << "/" << year_;
    }
    else
    {
        cout << "\tInvalid date entered.";
    }
    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 7";
    cout << "\n\n\n\n";
    unsigned int weight;
    unsigned int height;
    cout << "\tEnter weight :";
    cin >> weight;
    cout << "\tEnter height :";
    cin >> height;
    int answer_7 = height * 100 - 100;
    if (answer_7 < weight)
    {
        cout << "\tWeight should icrease :" << answer_7 - weight;
    }
    else if (answer_7 > weight)
    {
        cout << "\tWeight should br reduced :" << weight - answer_7;
    }
    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 8";
    cout << "\n\n\n\n";
    unsigned int number_8;
    cout << "\tEnter number :";
    cin >> number_8;
    if (number_8 >= 10000 && number_8 <= 99999)
    {
        int o_ = number_8 % 10;
        int n_ = (number_8 * 10) % 10;
        int u_ = (number_8 % 100) % 10;
        int r_ = (number_8 % 1000) % 10;
        int b_ = (number_8 % 10000) % 10;

        if (o_ % 2 != 0 || o_ == 2 || o_ == 9)
        {
            cout << "\tSimple number";
        }
        else if (n_ % 2 != 0 || n_ == 2 || n_ == 9)
        {
            cout << "\tSimple number";
        }
        else if (u_ % 2 != 0 || u_ == 2 || u_ == 9)
        {
            cout << "\tSimple number";
        }
        else if (r_ % 2 != 0 || r_ == 2 || r_ == 9)
        {
            cout << "\tSimple number";
        }
        else if (b_ % 2 != 0 || b_ == 2 || b_ == 9)
        {
            cout << "\tSimple number";
        }
        else
        {
            cout << "\tComlex number";
        }
    }
    else {
        cout << "\tIncorrect number";
    }
    cout << "\n\n\n";
    cout << "=======================================================";
    cout << "\n\n";
    cout << "Tap - 9";
    cout << "\n\n\n\n";
    unsigned int number_9;
    cout << "\tEnter number :";
    cin >> number_9;

   unsigned int symbol = number_9 / 9;
   unsigned int rank  = number_9 % 9;

   if (number_9 > 0 && number_9 < 36) {
       switch (symbol) {
       case 0:
           cout << "\tHeart ";
           break;
       case 1:
           cout << "\tBrick ";
           break;
       case 2:
           cout << "\tPick ";
           break;
       case 3:
           cout << "\tCross ";
           break;
       default:
           cout << "\tWrong Choice";
           break;
       }

       switch (rank) {
       case 0:
           cout << "\t6";
           break;
       case 1:
           cout << "\t7";
           break;
       case 2:
           cout << "\t8";
           break;
       case 3:
           cout << "\t9";
           break;
       case 4:
           cout << "\t10";
           break;
       case 5:
           cout << "\tDuz";
           break;
       case 6:
           cout << "\tDama";
           break;
       case 7:
           cout << "\tWalet";
           break;
       case 8:
           cout << "\tKarol";
           break;
       default:
           cout << "\tWrong choice";
           break;
       }
   }
   else {
       cout << "\tWrong Number";
   }
   cout << "\n\n\n";
   cout << "=======================================================";
}
