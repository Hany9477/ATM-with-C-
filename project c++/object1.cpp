// ATM_Automaten.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

///    \201 => ü       \204 = > ä       \224 = > ö

//******** Varible*********************//

double kontoStand = 3000; // blance
int einZahlen = 0;        // deposit
int ausZahlen = 0;        // withddraw
int passWord = 1234;
int ausWahlen = 0; // Choice
                   //*********End of Varible**************//

//********* Zeigt die Menu vo Atm Automaten************//
void display()
{
    cout << "****** \tMenu\t*******" << endl
         << endl;
    cout << "1 : Kontostand" << endl
         << endl;
    cout << "2 : Auszahlen" << endl
         << endl;
    cout << "3 : Einzahlen" << endl
         << endl;
    cout << "4 : Beenden" << endl
         << endl;
    cout << "*****************************" << endl;
}

void verfahren()
{

    cout << "Geben Sie Bitte Ihre Passw\224rt ein" << endl;
    cin >> passWord;
    do
    {
        if (passWord == 1234)
        {
            //    \201 => ü       \204 = > ä       \224 = > ö
            cout << " Dr\201cke deine auswahl :" << endl;
            cin >> ausWahlen;

            //    \201 => ü       \204 = > ä       \224 = > ö

            switch (ausWahlen)
            {
            case 1:
                cout << "deine Kontostand betr\204gt" << kontoStand << endl;
                break;
            case 2:
                cout << "!Deine Kontostand ist" << kontoStand << endl;
                cout << "Enter deine auszahlung" << endl;
                cin >> ausZahlen;
                // abfrage
                if (kontoStand >= ausZahlen)
                {
                    kontoStand = kontoStand - ausZahlen;
                    cout << "deine konto beträgt jetzt" << kontoStand << endl;
                }
                else
                {
                    cout << "Leider deine kontostand reich nicht f\201r die auszahlung" << endl;
                    //    \201 => ü       \204 = > ä       \224 = > ö
                }
                break;
                // kontoStand = kontoStand - ausZahlen;

                // kontoStand -= ausZahlen;
                // cout << "Jetzt :deine konto betr\204gt " << kontoStand << endl;

            case 3:
                cout << "Deine Akteulle Kontostand ist" << kontoStand << endl
                     << endl;
                cout << "Enter deine einzalung ein  : " << endl;
                cin >> einZahlen; // balnce=3000.auszahlen =100
                // kontoStand = kontoStand + einZahlen;
                kontoStand += einZahlen; // 1100
                cout << " Deine neu Kontostand betr\204gt : " << kontoStand << endl;
                break;
            case 4:
                cout << "Vielen Dank f\201r Ihren besuch" << endl;
                break;
            }
        }
        else
        {
            char test = 'g';
            cout << "password is wrong ,do you want try again press [Y] else press [n]";
            cin >> test;
            if (test == 'y' || test == 'Y')
            {
                cout << "enter your password againe" << endl;
                cin >> passWord;
            }
            else
            {
                ausWahlen = 4;
            }
        }

    } while (ausWahlen < 4); // انت شغال طول مه انا لم اختار رقم اربعة والسيستم هيشتغل مرة واحدة عالاقل

    //********loop damit in der menu bleibt*******
}

int main()
{
    display();
    verfahren();
    return 0;
}
