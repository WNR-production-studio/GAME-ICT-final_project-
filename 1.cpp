//#include<iostream>
//#include<cmath>
//#include<fstream>
//#include<ctime>
//#include<cstdlib>
//#include<string>
//
//using namespace std;
//int feedback(int difference)
//{
//    if (difference == 0)
//    {
//        return 0;
//    }
//    else if (difference > 40)
//    {
//        return 1;
//    }
//    else if (difference > 20 && difference < 40)
//    {
//        return 2;
//    }
//    else if (difference > 10 && difference < 20)
//    {
//        return 3;
//    }
//    else if (difference < 10)
//    {
//        return 4;
//    }
//    return -1;
//}
//
//
//int main() {
//
//	cout << "***********************************************************************  **************************************************************************" << endl;
//	cout << "**** MUHAMMAD WALEED ************************************************      ****************************************************** RAVEHA MUNIR ****" << endl;
//	cout << "**** 24L-6023 ***************************************************** NUMGUESS ******************************************************** 24L-6004 ****" << endl;
//	cout << "**** 1B-1 *******************************************************              ********************************************************** 1B-1 ****" << endl;
//	cout << "***************************************************************    Powered By    ******************************************************************" << endl;
//	cout << "*************************************************************        WARAV         ****************************************************************" << endl;
//	cout << "***************************************************************************************************************************************************" << endl << endl;
//	cout << "------------------------------------------------------------------[ WELCOME ]----------------------------------------------------------------------" << endl;
//	string name_of_user, level;
//	cout << "Please Enter your name : ";
//	getline(cin, name_of_user);
//	cout << endl;
//	cout << "Dear " << name_of_user << ", please select the Difficulty level you want to play from below." << endl << endl;
//	cout << "-------------------------------------------------------------SELECT DIFFICULTY LEVEL---------------------------------------------------------------" << endl << endl << endl;
//	cout << "\t\t\t" << "1. Easy" << "\t\t\t\t\t" << "  2. Medium" << "\t\t\t\t\t" << "3. Hard" << endl << endl << endl;
//	cout << "Enter the difficulty level (easy, medium, hard) you want to play:";
//	getline(cin, level);
//	if (level != "easy" && level != "medium" && level != "hard")
//	{
//		while (level != "easy" && level != "medium" && level != "hard")
//		{
//			cout << endl << "\t\t\t\t\t\t\t" << "     !!! INVALIDE ENTRY !!!" << endl << endl;
//			cout << "Please Re-enter the difficulty level in this form (easy, medium, hard), then GAME will start: ";
//			cin >> level;
//			continue;
//		}
//	}
//    if (level == "easy")
//    {
//
//        srand(time(0));
//        int random_no = rand() % 50 + 1;
//        cout << random_no;
//        bool correct = false;
//
//        int num, attempts_left = 12, hints_used = 0, score;
//
//        for (int attempts = 1; attempts <= 12; attempts++)
//        {
//            attempts_left--;
//
//            char hint_and_attempt;
//            cout << "-------------------" << endl;
//            cout << "Enter H for hint" << endl;
//            cout << "Enter A for attempt" << endl;
//            cout << "-------------------" << endl;
//            cin >> hint_and_attempt;
//
//            if ((hint_and_attempt == 'H' || hint_and_attempt == 'h') && (attempts > 0))
//            {
//                cout << ((random_no % 2 == 0) ? "The number is Even" : "The number is Odd") << ". ";
//                cout << ((random_no > (50 / 2)) ? "The number is in Upper half." : "The number is in Lower half.");
//                hints_used++;
//                cout << endl;
//            }
//
//            else if ((hint_and_attempt == 'A' || hint_and_attempt == 'a'))
//            {
//
//                cout << "Select your number between 1 and 50 : ";
//                cin >> num;
//                int difference_value = abs(random_no - num);
//
//                switch (feedback(difference_value))
//                {
//                case 0:
//                    cout << "Correct! You have guessed the number" << endl;
//                    score = ((attempts_left * 10) - (hints_used * 5));
//                    cout << "Your final score is : " << score << endl;
//
//                    cout << "=============================" << endl;
//                    cout << "*GAME OVER*" << endl;
//                    cout << "=============================" << endl;
//                    correct = true;
//                    return 0;
//                case 1:
//                    cout << "Way off " << endl;
//                    break;
//                case 2:
//                    cout << "Still quite far " << endl;
//                    break;
//                case 3:
//                    cout << "You're getting close!" << endl;
//                    break;
//                case 4:
//                    cout << "Almost there" << endl;
//                    break;
//                default:
//                    cout << "Usexpected case" << endl;
//                    break;
//                }
//            }
//        }
//
//        if (!correct)
//        {
//            cout << "The correct number was: " << random_no << endl;
//            score = 0;
//            cout << "Your final score is : " << score << endl;
//            cout << "=============================" << endl;
//            cout << "*GAME OVER*" << endl;
//            cout << "=============================" << endl;
//        }
//    }
//
//    // For Medium Level
//
//    else if (level == "medium")
//    {
//
//        srand(time(0));
//        int random_no = rand() % 50 + 1;
//        cout << random_no;
//        bool correct = false;
//
//        int num, attempts_left = 10, hints_used = 0, score;
//
//        for (int attempts = 1; attempts <= 10; attempts++)
//        {
//            attempts_left--;
//
//            char hint_and_attempt;
//            cout << "-------------------" << endl;
//            cout << "Enter H for hint" << endl;
//            cout << "Enter A for attempt" << endl;
//            cout << "-------------------" << endl;
//            cin >> hint_and_attempt;
//
//            if ((hint_and_attempt == 'H' || hint_and_attempt == 'h') && (attempts > 0))
//            {
//                cout << ((random_no % 2 == 0) ? "The number is Even" : "The number is Odd") << ". ";
//                cout << ((random_no > (50 / 2)) ? "The number is in Upper half." : "The number is in Lower half.");
//                hints_used++;
//                cout << endl;
//            }
//
//            else if ((hint_and_attempt == 'A' || hint_and_attempt == 'a'))
//            {
//
//                cout << "Select your number between 1 and 50 : ";
//                cin >> num;
//                int difference_value = abs(random_no - num);
//
//                switch (feedback(difference_value))
//                {
//                case 0:
//                    cout << "Correct! You have guessed the number" << endl;
//                    score = ((attempts_left * 10) - (hints_used * 5));
//                    cout << "Your final score is : " << score << endl;
//
//                    cout << "=============================" << endl;
//                    cout << "*GAME OVER*" << endl;
//                    cout << "=============================" << endl;
//                    correct = true;
//                    return 0;
//                case 1:
//                    cout << "Way off " << endl;
//                    break;
//                case 2:
//                    cout << "Still quite far " << endl;
//                    break;
//                case 3:
//                    cout << "You're getting close!" << endl;
//                    break;
//                case 4:
//                    cout << "Almost there" << endl;
//                    break;
//                default:
//                    cout << "Usexpected case" << endl;
//                    break;
//                }
//            }
//        }
//
//        if (!correct)
//        {
//            cout << "The correct number was: " << random_no << endl;
//            score = 0;
//            cout << "Your final score is : " << score << endl;
//            cout << "=============================" << endl;
//            cout << "*GAME OVER*" << endl;
//            cout << "=============================" << endl;
//        }
//    }
//
//    // For Difficult Level
//
//    else if (level == "hard")
//    {
//
//        srand(time(0));
//        int random_no = rand() % 200 + 1;
//        cout << random_no;
//        bool correct = false;
//
//        int num, attempts_left = 8, hints_used = 0, score;
//
//        for (int attempts = 1; attempts <= 8; attempts++)
//        {
//            attempts_left--;
//
//            char hint_and_attempt;
//            cout << "-------------------" << endl;
//            cout << "Enter H for hint" << endl;
//            cout << "Enter A for attempt" << endl;
//            cout << "-------------------" << endl;
//            cin >> hint_and_attempt;
//
//            if ((hint_and_attempt == 'H' || hint_and_attempt == 'h') && (attempts > 0))
//            {
//                cout << ((random_no % 2 == 0) ? "The number is Even" : "The number is Odd") << ". ";
//                cout << ((random_no > (50 / 2)) ? "The number is in Upper half." : "The number is in Lower half.");
//                hints_used++;
//                cout << endl;
//            }
//
//            else if ((hint_and_attempt == 'A' || hint_and_attempt == 'a'))
//            {
//
//                cout << "Select your number between 1 and 50 : ";
//                cin >> num;
//                int difference_value = abs(random_no - num);
//
//                switch (feedback(difference_value))
//                {
//                case 0:
//                    cout << "Correct! You have guessed the number" << endl;
//                    score = ((attempts_left * 10) - (hints_used * 5));
//                    cout << "Your final score is : " << score << endl;
//
//                    cout << "=============================" << endl;
//                    cout << "*GAME OVER*" << endl;
//                    cout << "=============================" << endl;
//                    correct = true;
//                    return 0;
//                case 1:
//                    cout << "Way off " << endl;
//                    break;
//                case 2:
//                    cout << "Still quite far " << endl;
//                    break;
//                case 3:
//                    cout << "You're getting close!" << endl;
//                    break;
//                case 4:
//                    cout << "Almost there" << endl;
//                    break;
//                default:
//                    cout << "Usexpected case" << endl;
//                    break;
//                }
//            }
//        }
//
//        if (!correct)
//        {
//            cout << "The correct number was: " << random_no << endl;
//            score = 0;
//            cout << "Your final score is : " << score << endl;
//            cout << "=============================" << endl;
//            cout << "*GAME OVER*" << endl;
//            cout << "=============================" << endl;
//        }
//    }
//
//    return 0;
//}
