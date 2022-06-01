#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int UnlockMotorcycle(int);

void IfChoiceA(char);

void IfChoiceB(char);

void IfChoiceC(char);

int main() {
    string userYesOrNo;
    char userChoice1;
    char userChoice2;

    while (userYesOrNo != "no") {
        cout << "Welcome to the game!" << endl;
        cout << "Are you ready to begin?" << endl;
        cout << "Type \"Yes\" or \"No\" (No to quit): ";
        cin >> userYesOrNo;
        if (userYesOrNo == "Yes" || userYesOrNo == "yes") {
            cout << "Your name is Esteban Julio Ricardo Montoya De la Rosa Ramirez. You are the starting striker for the "
                    "Colombian National Futbol Team. \n"
                    "You are lined up to take the game deciding penalty kick in the championship game of the South American "
                    "Futbol Championship Cup against your rival Argentina.\n"
                    "The penalty kick score is plus one in favor of Argentina.\n"
                    "If you miss now, Colombia loses. Need I remind you that you are playing on home turf. \n"
                    "\n"
                    "You shoot.\n"
                    "\n"
                    "You miss. \n"
                    "\n"
                    "By a lot. \n"
                    "\n"
                    "You black out for a second. You're not exactly sure what happened. The next thing you hear is the sound"
                    " of thousands of feet rushing down the bleachers, \n"
                    "over the barriers, and onto the field. The "
                    "crazed and furious fans are closing in quickly on you. \n"
                    "The colors of your home country, Colombia, overtake the green of the grass field. \n"
                    "What do you do now?\n"
                    "Do you (a): Lay down and give up your life?\n"
                    "\n"
                    "\t   (b): Decide to find a way to survive? \n"
                    "\n";
        }
        else if (userYesOrNo == "No" || userYesOrNo == "no") {
            cout << "Have a nice day!" << endl;
            return 0;
        }
        else {
            cout << "Invalid selection" << endl;
        }

        cout << "Type 'a' or 'b': ";
        cin >> userChoice1;

        if (userChoice1 == 'a') {
            cout << "You perish at the hands of your own." << endl;
            cout << "END" << endl;
            return 0;
        }
        else if (userChoice1 == 'b') {
            cout << "What do you do now?" << endl;
        }
        else {
            cout << "Invalid selection" << endl;
            return 0;
        }

        cout << "Do you: " << endl << "a) turn and run as fast as you can out of the stadium?" << endl << "b) take your cleats off and use them as weapons?"
             << endl << "c) stop, put your hands up, and try to reason with the fans?" << endl;

        cout << "Type your choice as a single letter: ";
        cin >> userChoice2;

        if (userChoice2 == 'a') {
            IfChoiceA(userChoice2);
        }
        else if (userChoice2 == 'b') {
            IfChoiceB(userChoice2);
        }
        else if (userChoice2 == 'c') {
            IfChoiceC(userChoice2);
        }
        else {
            cout << "Invalid selection" << endl;
            return 0;
        }

    }

    return 0;
}

int UnlockMotorcycle(int enterDigit) {
    int motorcycleCode = rand() %10;
    int motorcycleFailCode = rand() %10;
    while (enterDigit != motorcycleCode) {
        cout << "Enter a digit (0-9): ";
        cin >> enterDigit;
        if (enterDigit == motorcycleCode) {
            cout << "You did it! You unlocked the bike! Now you are off flying down the freeway to safety!" << endl;
            cout << "The number you selected as a quantity: ";
            for (int i = 0; i < motorcycleCode; ++i) {
                cout << "*";
            }
            cout << endl;
            cout << "END" << endl;
            break;
        }
        else if (enterDigit != motorcycleFailCode) {
            cout << "Try again!" << endl;
        }
        else {
            cout << "Uh-Oh, you selected the wrong number and triggered the fail safe. You turn to run, "
                    "but you are met by an obese Colombian fan who smothers you to death." << endl;
            cout << "END" << endl;
            break;
        }
    }
    return enterDigit;
}

void IfChoiceA(char A) {
    string runTowardsHome;
    cout << "You somehow manage to escape the wild fans and get outside of the stadium. Do you now start to run towards your home?" << endl;
    cout << "Type \"Yes\" or \"No\": ";
    cin >> runTowardsHome;
    if (runTowardsHome == "Yes" || runTowardsHome == "yes") {
        string talkToWoman;
        cout << "You start running and you take the shortcut you know through the back roads. You run into a very beautiful "
                "woman. Do you stop and talk to her (Yes/No): ";
        cin >> talkToWoman;
        if (talkToWoman == "Yes" || talkToWoman == "yes") {
            string continueToTalk;
            cout
                    << "You find out she is from Argentina, the country to which you lost the championship just 5 minutes prior. "
                       "Do you continue to talk with her? (Yes/No): ";
            cin >> continueToTalk;
            if (continueToTalk == "Yes" || continueToTalk == "yes") {
                cout
                        << "You run away to Argentina with her. You change your name and your hair style. You live happily ever after."
                        << endl;
                cout << "END" << endl;
            } else if (continueToTalk == "No" || continueToTalk == "no") {
                cout << "You keep running and never look back." << endl;
                cout << "END" << endl;
            } else {
                cout << "Invalid selection" << endl;
            }
        }
        else if (talkToWoman == "No" || talkToWoman == "no") {
            string takeShower;
            cout << "You keep running to your house. You finally get inside and lock the doors."
                    " You sit down to catch your breath and forget about the game. Do you take a shower? (Yes/No): ";
            cin >> takeShower;
            if (takeShower == "Yes" || takeShower == "yes") {
                cout << "You slip in the shower and die." << endl;
                cout << "END" << endl;
            }
            else if (takeShower == "No" || takeShower == "no") {
                cout << "You fall asleep on the couch and dream about scoring the game winning penalty kick." << endl;
                cout << "END" << endl;
            }
            else {
                cout << "Invalid selection" << endl;
            }
        }
    }
    else if (runTowardsHome == "No" || runTowardsHome == "no") {
        string unlockMotorcycle;
        cout << "You find a motorcycle with a surprising one-digit lock code on it." << endl;
        cout << "You know that the lock has a fail-safe number that if pressed will trigger a permanent locking system." << endl;
        cout << "Do you test your luck and start punching in random digits until you unlock it? (Yes/No): ";
        cin >> unlockMotorcycle;
        if (unlockMotorcycle == "Yes" || unlockMotorcycle == "yes") {
            int motorcycleCode = 0;
            cout << "You risk it and start pressing number 0-9. One digit will trigger a permanent lock, and one digit will unlock the motorcycle." << endl;
            UnlockMotorcycle(motorcycleCode);
        }
        else if (unlockMotorcycle == "No" || unlockMotorcycle == "no") {
            string hideInBar;
            cout << "You decide to turn and run down the street at full speed. Do you pull over and hide in the local bar? (Yes/No): ";
            cin >> hideInBar;
            if (hideInBar == "Yes" || hideInBar == "yes") {
                cout << "The people in the bar happened to have been watching the game on the television. "
                        "Better yet, they are severely intoxicated. They attack you, and you die at the hands of drunkards." << endl;
                cout << "END" << endl;
            }
            else if (hideInBar == "No" || hideInBar == "no") {
                cout << "You keep running and running and running. To your dismay, you ran in a complete circle, "
                        "back to the stadium, only to run right into the angry fans. Goodbye." << endl;
                cout << "END" << endl;
            }
            else {
                cout << "Invalid selection" << endl;
            }
        }
    }
}

void IfChoiceB(char B) {
    cout << "You throw your cleats and knock out two people, but then you are mauled and attacked by the "
            "remaining thousands." << endl;
    cout << "END" << endl;
}

void IfChoiceC(char C) {
    string speakKindWords;
    cout << "Do you speak kind words, asking for their forgiveness?" << endl;
    cout << "Type \"Yes\" or \"No\": ";
    cin >> speakKindWords;
    if (speakKindWords == "Yes" || speakKindWords == "yes") {
        string singNationalAnthem;
        cout << "Do you sing the national anthem? (Yes/No): ";
        cin >> singNationalAnthem;
        if (singNationalAnthem == "Yes" || singNationalAnthem == "yes") {
            cout << "Under extreme pressure you mix up the words and sing off key. The fans are furious and charge you." << endl;
            cout << "END";
        }
        else if (singNationalAnthem == "No" || singNationalAnthem == "no") {
            cout << "You start to give a heartfelt speech about your love of futbol, Colombia, and all the fans. They "
                    "decide to forgive you and let you live." << endl;
            cout << "END";
        }
        else {
            cout << "Invalid selection" << endl;
        }
    }
    else if (speakKindWords == "No" || speakKindWords == "no") {
        string yellAtFans;
        cout << "Do you yell at them and say it was their fault that you missed the goal? (Yes/No): ";
        cin >> yellAtFans;
        if (yellAtFans == "Yes" || yellAtFans == "yes") {
            cout << "This infuriates them more. They attack you." << endl;
            cout << "END";
        }
        else if (yellAtFans == "No" || yellAtFans == "no") {
            cout << "You try to reason with them logically, saying you are the only hope for a future championship."
                    " For some reason they believe you and let you live." << endl;
            cout << "END";
        }
        else {
            cout << "Invalid selection" << endl;
        }
    }
    else {
        cout << "Invalid selection" << endl;
    }
}
