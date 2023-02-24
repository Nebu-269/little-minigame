// little-minigame.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Wilkommen \n";
    cout << "Bitte waehle etwas aus. \n";
    cout << "Druecke 0 zum starten \n";
    string first;
    cin >> first;
    if (first == "0") {
        //Erste Frage
        cout << "Du gehst in die Schule und bemerkst dass du die Hausaufgaben nicht hast was tust du? \n\n";

        cout << "(1) Du machst nichts und bist erlich zu deinem Lehrer.\n";
        cout << "(2) Du schrebst schnell bei deinem Freund ab.\n";
        cout << "(3) Du gehst nach Hause und machst die Hausaufgaben und zeigst sie nach.\n";
        string q_one;
        cin >> q_one;

        // erster weg der ersten Frage
        if (q_one == "1") {
            cout << "Dein Lehrer verzeiht es dir. Als Strafe musst du die zwei Seitige Hausordnung abschreiben. \n";
            cout << "Was tust du?\n\n";

            cout << "(1) Den Text nicht Abschreiben und Fortnite spielen.\n";
            cout << "(2) Den Text braf abschreiben.\n";
            string q_one_one;
            cin >> q_one_one;
            cout << "Du hast den";
        }

        // zweiter weg erste Frage
        if (q_one == "2") {
            cout << "Dein Freund hat die Hausaufgaben auch nocht. Ihr bekommt beide Ärger von euren Eltern!\n";
            cout << "Tja Game Over!";
        }

        //dritter weg der ersten frage 
        if (q_one == "3") {
            cout << "Du kommst am nächsten Tag mit gemachten Hausaufgaben doch dein Lehrer will eine Entschuldigung von dir, doch du hast keine. \n";
            cout << "Was tust du?\n\n";

            cout << "(1)Keine Entschuldigung abgeben.\n";
            cout << "(2)Deine Mutter fragen ob sie dir eine Schreibt\n";
            string q_one_three;
            cin >> q_one_three;

            //antwort eins
            if (q_one_three == "1") {
                cout << "Tja das gibt dan 6 mal die Note 6. Du musst dich Anstrengen um deine guten Noten aufrecht zu halten.\n";
                cout << "Was tust du?\n\n";

                cout << "(1) Dich mehr am Unterricht beteiligen.\n";
                cout << "(2) Ein freiwilliges Referat zum Aktuellen Thema.\n";
                cout << "(3) Beides\n";
                cout << "(4) Gar nichts.\n";
                string q_one_three_one;
                cin >> q_one_three_one;
                //möglichkeit 1 und 2
                if (q_one_three_one == "1") {
                    cout << "Du bekommst auf dem Zeugniss eine 3.\n Super!";
                }
                if (q_one_three_one == "2") {
                    cout << "Du bekommst auf dem Zeugniss eine 3.\n Super!";
                }
                //möglichkeit 3
                if (q_one_three_one == "3") {
                    cout << "Du bekommst auf dem Zeugniss eine 2\n";
                    cout << "Dein Fleiß hat sich gelohnt.";
                }
                //möglichkeit 4
                if (q_one_three_one == "4") {

                }
            }

            //antwort zwei
            if (q_one_three == "2") {
                cout << "Deine Mutter fragt wo du warst, du bist ehrlich und sagst dass du geschwänzt hast.\n";
                cout << "Tja Game over";
            }
        }
    }
}
