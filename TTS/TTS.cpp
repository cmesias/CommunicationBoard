// TTS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;


void Speak(string response) {

    // Clear screen
    system("CLS");

    // Print response
    cout << "################################################################################" << endl;
    cout << "##################################### OUTPUT ###################################" << endl;
    cout << endl;
    cout << "You said:" << endl;
    cout << endl;
    cout << response << endl;

    string command = "espeak \"" + response + "\"";
    const char* charCommand = command.c_str();
    system(charCommand);

    cout << endl;
    cout << endl;
    cout << "Enter key to continue..." << endl;

    // Clear cin input buffer or else this will not stop on cin.get()
    cin.clear();
    cin.get();
}

int main()
{
    bool quit = false;

    while (!quit) {

        // Clear screen
        system("CLS");

        // Print menu
        cout << "################################################################################" << endl;
        cout << "###################################### MENU ####################################" << endl;
        cout << endl;
        cout << "Please choose a command." << endl;
        cout << endl;
        cout << "1. Greetings"  << endl;
        cout << "2. Feelings"   << endl;
        cout << "3. Yes-No"     << endl;
        cout << endl;
        
        // Get input from user
        string response;
        cout << "Input: ";
        getline(cin, response);

        // Handle Greet
        if (response == "1") {

            // Clear screen
            system("CLS");

            // Print commands for Greetings
            cout << "################################################################################" << endl;
            cout << "#################################### Greetings #################################" << endl;
            cout << endl;
            cout << "Enter a greeting." << endl;
            cout << endl;
            cout << "1. Hello." << endl;
            cout << "2. Good morning." << endl;
            cout << "3. Good afternoon." << endl;
            cout << "4. Good evening." << endl;
            cout << endl;

            // Get input
            string greetResponse;
            cout << "Input: ";
            getline(cin, greetResponse);

            // Speak commands
            if (greetResponse == "1") {
                Speak("Hello.");
            }
            else if (greetResponse == "2") {
                Speak("Good morning.");
            }
            else if (greetResponse == "3") {
                Speak("Good afternoon.");
            }
            else if (greetResponse == "4") {
                Speak("Good evening.");
            }
            else {
                // go back
            }
        }

        // Handle Feelings
        else if (response == "2") {

            // Clear screen
            system("CLS");

            // Print commands for Feelings
            cout << "################################################################################" << endl;
            cout << "################################ Feelings / Page 1 #############################" << endl;
            cout << endl;
            cout << "Describe the way you feel."     << endl;
            cout << endl;
            cout << "1. I am feeling good."          << endl;
            cout << "2. I am not feeling well."      << endl;
            cout << "3. Pain." << endl;
            cout << endl;
            cout << "4. More options ->" << endl;
            cout << endl;

            // Get input
            string feelings;
            cout << "Input: ";
            getline(cin, feelings);

            // Speak commands
            if (feelings == "1") {
                Speak("I am feeling good.");
            }
            else if (feelings == "2") {
                Speak("I am not feeling well.");
            }
            else if (feelings == "3") {

                // Clear screen
                system("CLS");

                // Print commands for Feelings
                cout << "################################################################################" << endl;
                cout << "#################################### Pain Level ################################" << endl;

                // Print commands for Greetings
                cout << endl;
                cout << endl;
                cout << "Enter a pain level."       << endl;
                cout << endl;
                cout << "1. Some pain (0 - 3)"      << endl;
                cout << "2. Moderate pain (4 - 6)"  << endl;
                cout << "3. Severe pain (7 - 10)"   << endl;
                cout << endl;

                // Get user input of pain level
                string painLevel;
                cout << "Input: ";
                getline(cin, painLevel);

                // Speak pain level
                if (painLevel == "1") {
                    Speak("I have some pain.");
                }
                else if (painLevel == "2") {
                    Speak("I have moderate pain.");
                }
                else if (painLevel == "3") {
                    Speak("I have severe pain.");
                }
                else {
                    // go back
                }
            }

            // Page 2 of feelings
            else if (feelings == "4") {

                // Clear screen
                system("CLS");

                // Print commands for Feelings
                cout << "################################################################################" << endl;
                cout << "################################ Feelings / Page 2 #############################" << endl;
                cout << endl;
                cout << "Describe the way you feel." << endl;
                cout << endl;
                cout << "1. Sleepy." << endl;
                cout << "2. Dizzy." << endl;
                cout << "3. Nauseas." << endl;
                cout << endl;
                cout << "4. More options ->" << endl;
                cout << endl;

                // Get input
                string feelingsPg2;
                cout << "Input: ";
                getline(cin, feelingsPg2);

                // Speak commands
                if (feelingsPg2 == "1") {
                    Speak("Feeling sleepy.");
                }
                else if (feelingsPg2 == "2") {
                    Speak("Feeling dizzy.");
                }
                else if (feelingsPg2 == "3") {
                    Speak("Feeling nauseas.");
                }

                // Page 3 of feelings
                else if (feelingsPg2 == "4") {

                    // Clear screen
                    system("CLS");

                    // Print commands for Feelings
                    cout << "################################################################################" << endl;
                    cout << "################################ Feelings / Page 3 #############################" << endl;
                    cout << endl;
                    cout << "Describe the way you feel." << endl;
                    cout << endl;
                    cout << "1. Weak." << endl;
                    cout << "2. Restless." << endl;
                    cout << "3. Hungry." << endl;
                    cout << endl;

                    // Get input
                    string feelingsPg3;
                    cout << "Input: ";
                    getline(cin, feelingsPg3);

                    if (feelingsPg3 == "1") {
                        Speak("Feeling weak.");
                    }
                    else if (feelingsPg3 == "2") {
                        Speak("Feeling restless.");
                    }
                    else if (feelingsPg3 == "3") {
                        Speak("I would like something to eat.");
                    }
                    else {
                        // go back
                    }
                }
                else {
                    // go back
                }
            }
        }

        // Handle Yes/No
        else if (response == "3") {

            // Clear screen
            system("CLS");

            // Print commands for Greetings
            cout << "################################################################################" << endl;
            cout << "###################################### Yes/No ##################################" << endl;
            cout << endl;
            cout << "Enter a response." << endl;
            cout << endl;
            cout << "1. Yes" << endl;
            cout << "2. No." << endl;
            cout << "3. Kinda." << endl;
            cout << endl;

            // Get input
            string yesNoResponse;
            cout << "Input: ";
            getline(cin, yesNoResponse);

            // Speak commands
            if (yesNoResponse == "1") {
                Speak("Yes");
            }
            else if (yesNoResponse == "2") {
                Speak("No.");
            }
            else if (yesNoResponse == "3") {
                Speak("Kinda.");
            }
            else {
                // go back
            }
        }

    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
