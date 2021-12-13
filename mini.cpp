#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstdlib>
#include <conio.h>
using namespace std;

double wait, DepositAmount;

//===========================================================

// phase 1
class phase1
{
    char name[30];
    char event[50];

public:
    phase1()
    {
        cout << "\n\n\t\tEnter the customer's first and last name:\t";
        cin.getline(name, 30);
        cout << "\n\t\tEnter the name of the event :\t";
        cin.getline(event, 50);
    }
};

//===========================================================

// phase 2
class date
{
    int dd;
    int mm;
    int z;

public:
    date()
    {
        cout << "\n\n\t\tEnter date of event" << endl
             << "\t\tDate must be between 1 to 31:\t";
        cin >> dd;
        try
        {
            if (dd == 0 || dd > 31)
            {
                throw dd;
            }
        }
        catch (int dd)
        {
            cout << "\n\tException! please enter a valid number instead of " << dd << endl;
        }
        cout << "\n\t\tEnter month number of event:\n"
                "\t\t\t1 : January  \t 2 : February \t 3 : March \n"
                "\t\t\t4 : April    \t 5 : May      \t 6 : June  \n"
                "\t\t\t7 : July     \t 8 : August   \t 9 : September\n"
                "\t\t\t10: Octomber \t 11: November \t 12: December\n";
        cout << "\n\t\t\tMonth : \t";
        cin >> mm;
    }
    friend int ch(date abc);
};

//===========================================================

// phase 3
class A
{
public:
    virtual void input() = 0;
};

class B : public A
{
public:
    int no_of_Guest, Event_time, Event_hrs, Event_min;

    void input()
    {
        cout << "\n\tEnter the number of guest in event:\t";
        cin >> no_of_Guest;
        cout << "\n\tEnter time of your event:\t";
        cin >> Event_time;
        cout << "\n\tEnter the number of Hours and Minutes in the event:\t";
        cin >> Event_hrs >> Event_min;
    }
    friend double sn(B guest_no); // jump to phase 7
    friend int gue_no(B g_no);    // jump to phase 8
};

class Bill
{

    double TotalFoodCost, AverageCost, TotalCost;
    const int Acc_Cost = 2000;
    const int CostForOneServer = 180;
    long int Total_Server;

public:
    Bill(int ab, int a, int abcd)
    {

        int No_of_Guest = abcd;
        int no_of_items = ab;
        int NumberOfServers = a;

        TotalFoodCost = (No_of_Guest * (10.70) * no_of_items);
        AverageCost = TotalFoodCost / (float)No_of_Guest;

        Total_Server = (CostForOneServer * NumberOfServers);

        TotalCost = TotalFoodCost + Total_Server + Acc_Cost;

        DepositAmount = TotalCost * 0.25;
        cout << "\n\t\tThe Cost for Each Server    :   " << CostForOneServer << endl;

        cout << "\t\tThe Cost for Food is          :   " << TotalFoodCost << endl;
        cout << "\t\tAvergae Cost Per Person       :   " << AverageCost << endl;

        cout << "\t\tCost of " << a << " server is\t:   " << (NumberOfServers * 180) << endl;
        cout << "\t\tCost for accessories          :   " << Acc_Cost << endl;

        cout << "\t\tTotal cost is                 :   " << TotalCost << endl;

        cout << "\t\tPlease deposite a 25%" << endl
             << "\t\tdeposit to reserve the event  " << endl;
        cout << "\t\tThe deposit needed is         :   " << DepositAmount << endl;
    }
};

//===========================================================

// phase 4

class mainfood;
class food
{
    char ch;
    int choice;

public:
    void Food();
    void Food_Display();
};

class mainfood
{
    int ans;

public:
    mainfood();
    void main_displays();
};
void mainfood ::main_displays()
{
    switch (ans)
    {
    case 1:
        cout << "\n\t**************** Bhaji ****************";

        cout << "\n\t\tSukhi Batata Bhaji "
                "\n\t\tBhindi Masala Bhaji  "
                "\n\t\tBhindi Fry "
                "\n\t\tFlower Rassa Bhaji "
                "\n\t\tFlower Rassa "
                "\n\t\tFlower Matar Sukhi Bhaji  "
                "\n\t\tFlower Muttor Sukhi "
                "\n\t\tBatata Rassa Bhaji  "
                "\n\t\tBatata Rassa "
                "\n\t\tMatar Methi Kaju Batata Bhaji  "
                "\n\t\tMutter Methi Kaju Batata "
                "\n\t\tMoongche Bhirde Bhaji  "
                "\n\t\tWaalache Bhirde "
                "\n\t\tBharali Wangi Bhaji  "
                "\n\t\tBharali Wangi "
                "\n\t\tMoong Usal "
                "\n\t\tMatki Usal Bhaji  "
                "\n\t\tVangi Batata Bhaji  "
                "\n\t\tVangi Batata Rassa "
                "\n\t\tVangi Bharit "
                "\n\t\tVeg Kolhapuri  "
                "\n\t\tVeg Kolhapuri ";

        cout << "\n\n\t**************** Roti ****************";

        cout << "\n\t\tSadhi-Poli "
                "\n\t\tSadhi Poli "
                "\n\t\tFulka "
                "\n\t\tPuri ";

        cout << "\n\n\t**************** Roti ****************";

        cout << "\n\t\tShrikhand "
                "\n\t\tShrikhand (flavours) "
                "\n\t\tGulab jamun "
                "\n\t\tGajar Halwa "
                "\n\t\tMoong Dal Halwa "
                "\n\t\tJilebi "
                "\n\t\tMotichoor Ladoo "
                "\n\t\tSevai Kheer "
                "\n\t\tSevai Kheer "
                "\n\t\tModak "
                "\n\t\tNaralachi Karanaji "
                "\n\t\tGulkand Karanji "
                "\n\t\tPuran Poli "
                "\n\t\tDudhi Halwa ";

        cout << "\n\n\t**************** Rice ****************";

        cout << "\n\t\tPandhara Bhat"
                "\n\t\tPhodnicha Bhat"
                "\n\t\tKothimbir rice"
                "\n\t\tMirchi rice"
                "\n\t\tMasala Bhat";

        cout << "\n\n\t**************** Talan / Bhaji ****************";

        cout << "\n\t\tUdad Papad "
                "\n\t\tKanda Bhaji "
                "\n\t\tMoong Daal Papad "
                "\n\t\tPalak Bhaji "
                "\n\t\tGavhachi kurdai "
                "\n\t\tKothimbir Bhaji "
                "\n\t\tMoong Bhaji "
                "\n\t\tNachni Papad "
                "\n\t\tAloo wadi "
                "\n\t\tKobi Wadi "
                "\n\t\tSuralichi Vadi "
                "\n\t\tVangyache kaap ";

        break;

    case 2:

        cout << "\n\n\t**************** Sabji ****************";
        cout << "\n\t\tUndhiyu "
                "\n\t\tGujarati Kadhi "
                "\n\t\tMakai Capsicum "
                "\n\t\tRasawala Batata "
                "\n\t\tPalak Moong Dal "
                "\n\t\tShev Rassa ";

        cout << "\n\n\t**************** Roti ****************";
        cout << "\n\t\tNamkeen Thepla "
                "\n\t\tMethi Thepla "
                "\n\t\tNamkeen Puri "
                "\n\t\tGujarati Rotli ";

        cout << "\n\n\t**************** Chat ****************";
        cout << "\n\t\tSadhi Bhel "
                "\n\t\tBhel Puri "
                "\n\t\tWaldorf Salad "
                "\n\t\tSev Puri "
                "\n\t\tSev Ragda Puri "
                "\n\t\tTandoori Aloo Chat "
                "\n\t\tFruit Chaat "
                "\n\t\tChat Basket ";

        cout << "\n\n\t**************** Dal ****************";
        cout << "\n\t\tToor Dal Amti "
                "\n\t\tWhite Kadhi "
                "\n\t\tYellow Kadhi "
                "\n\t\tBBQ Pizza "
                "\n\t\tTrevti Dal "
                "\n\t\tJeera Dal "
                "\n\t\tFajeto Dal "
                "\n\t\tFarsan ";

        cout << "\n\n\t**************** Sundries/Chutney ****************";
        cout << "\n\t\tMint Chutney "
                "\n\t\tYoghurt Chutney "
                "\n\t\tTomato Chutney "
                "\n\t\tCoconut Chutney ";

        cout << "\n\n\t**************** Pickles ****************";

        cout << "\n\t\tMix Pickle "
                "\n\t\tMango Pickle "
                "\n\t\tChilli Lemon Pickle "
                "\n\t\tChilli Pickle ";

        cout << "\n\n\t**************** Other ****************";

        cout << "\n\t\tCorn Kachori "
                "\n\t\tKhasta Kachori "
                "\n\t\tKhaman Dhokla "
                "\n\t\tSandwich Dhokla "
                "\n\t\tKhandvi "
                "\n\t\tPatra ";

        break;

    case 3:
        cout << "\n\n\t**************** Sabji ****************";

        cout << "\n\t\tChhole Masala "
                "\n\t\tAmritsari Chhole "
                "\n\t\tAloo Matar "
                "\n\t\tChana Masala "
                "\n\t\tDum Aloo Punjabi "
                "\n\t\tPaneer masala "
                "\n\t\tPaneer Tikka "
                "\n\t\tPaneer Makhanwala "
                "\n\t\tTandoor paneer masala "
                "\n\t\tAloo butter Masala "
                "\n\t\tStuff Capsicum "
                "\n\t\tStuff Tomato Masala "
                "\n\t\tStuffed Potato Masala "
                "\n\t\tRajma Masala "
                "\n\t\tLauki Kofta Curry "
                "\n\t\tPaneer Kofta "
                "\n\t\tPaneer Bhurji "
                "\n\t\tTawaa Bhaji "
                "\n\t\tDiwani Handi "
                "\n\t\tBhindi Do Pyaza "
                "\n\t\tVeg Kurma "
                "\n\t\tVeg Kadhai ";

        cout << "\n\n\t**************** Roti ****************";

        cout << "\n\t\t "
                "\n\t\tSadhi-Poli "
                "\n\t\tAloo Paratha "
                "\n\t\tRoti "
                "\n\t\tStuffed Veg Paratha "
                "\n\t\tVeg Paratha "
                "\n\t\tGobi Paratha "
                "\n\t\tKabuli Paratha "
                "\n\t\tPaneer Paratha "
                "\n\t\tButter/Cheese Paratha "
                "\n\t\tRumali Roti ";

        cout << "\n\n\t**************** Rice ****************";

        cout << "\n\t\tMatar Pulao "
                "\n\t\tVeg Pulao "
                "\n\t\tVeg Biryani "
                "\n\t\tPaneer Biryani "
                "\n\t\tMushroom Biryani "
                "\n\t\tRajma Chawal ";

        cout << "\n\n\t**************** Papad ****************";

        cout << "\n\t\tMasala Papad "
                "\n\t\tRoasted Papad "
                "\n\t\tKhichiya Papad ";

        cout << "\n\n\t**************** Raita ****************";

        cout << "\n\t\tBundi Raita "
                "\n\t\tPotato Raita "
                "\n\t\tSprout Raita "
                "\n\t\tVeg Raita "
                "\n\t\tPalak Raita "
                "\n\t\tPineapple Raita ";

        break;

    case 4:
        cout << "\n\n\t**************** Sabji ****************";

        cout << "\n\t\tLuchi alur dom "
                "\n\t\tDimer dhokkar Dalna and Luchi "
                "\n\t\tBhappa Aloo "
                "\n\t\tChingri mallai curry "
                "\n\t\tSorsebata lIish Mach "
                "\n\t\tBengali Lamb curry "
                "\n\t\tDoi Maach "
                "\n\t\tBaigun Bhajja "
                "\n\t\tPatishapta "
                "\n\t\tChor chori ";

        cout << "\n\n\t**************** Rice ****************";

        cout << "\n\t\tBengali vegetable fried rice "
                "\n\t\tBasanta pulao "
                "\n\t\tVegetable pulao "
                "\n\t\tGhee bhat "
                "\n\t\tMishti pulao "
                "\n\t\tBengali khichdi "
                "\n\t\tBhaate-bhat(Bengali mashed vegetables) ";

        cout << "\n\n\t**************** Roti ****************";

        cout << "\n\t\tPlain roti "
                "\n\t\tFulka "
                "\n\t\tLuchi "
                "\n\t\tKhasta roti "
                "\n\t\tChawli leaves parotha "
                "\n\t\tBengali low Salt paratha ";

        cout << "\n\n\t**************** Sweets ****************";

        cout << "\n\t\tRasgulla "
                "\n\t\tPantua "
                "\n\t\tRajbhog "
                "\n\t\tMishti doi "
                "\n\t\tSandesh "
                "\n\t\tMihidana "
                "\n\t\tBonde "
                "\n\t\tRasmalai "
                "\n\t\tCham cham ";

        break;

    case 5:

        cout << "\n\n\t**************** Sabji ****************";

        cout << "\n\n\t Avial with coconut "
                "\n\t\tPoriyal"
                "\n\t\tLauki with Chana Dal"
                "\n\t\tKovakkai Masala (Tondli)"
                "\n\t\tParuppu Urundai Kuzhambu (Toor Dal)"
                "\n\t\tDrumstick Poricha Kuzhambu"
                "\n\t\tMushroom kuzhambu"
                "\n\t\tKondakadalai kuzhambu"
                "\n\t\tCabbage Masala"
                "\n\t\tEnnai kathirikai wang bharali"
                "\n\t\tVazhaipoo kuzhambu banana gravy"
                "\n\t\tSodhi kuzhambu"
                "\n\t\tMoru curry"
                "\n\t\tUlli theeyal";

        cout << "\n\n\t**************** Sambar ****************";

        cout << "\n\t\tMurungakkai Sambar "
                "\n\t\tPonnanganni Keerai Sambar "
                "\n\t\tPalak Sambar "
                "\n\t\tVendhaya Keerai Paruppu Kadayal "
                "\n\t\tRaw Mango Sambar "
                "\n\t\tKerala Varutharacha Sambar ";

        cout << "\n\n\t**************** Rice ****************";

        cout << "\n\t\tLemon Rice "
                "\n\t\tTomato Rice "
                "\n\t\tChitranna Rice "
                "\n\t\tCoconut Rice "
                "\n\t\tOne Pot Sambar Rice "
                "\n\t\tCurd Rice "
                "\n\t\tTamarind Rice "
                "\n\t\tGhee Rice "
                "\n\t\tBisibhela Bhath "
                "\n\t\tSesame Rice "
                "\n\t\tRasam Rice ";

        cout << "\n\n\t**************** Idli/ Dosa ****************";

        cout << "\n\t\tSada Dosa "
                "\n\t\tMasala Dosa "
                "\n\t\tButter Dosa "
                "\n\t\tChinese Dosa "
                "\n\t\tSadhi Idli "
                "\n\t\tMasala Idli "
                "\n\t\tFried Idli "
                "\n\t\tBroken Corn Idli "
                "\n\t\tIdli Sandwich "
                "\n\t\tPodi Idli "
                "\n\t\tKanchipuram Idli "
                "\n\t\tOnion Green Gram Dosa "
                "\n\t\tMysore Dosa "
                "\n\t\tGhee Onion Karapodi Dosa ";

        cout << "\n\n\t**************** Vada ****************";

        cout << "\n\t\tSamabhar Vada "
                "\n\t\tDal Vada "
                "\n\t\tDahi Vada "
                "\n\t\tRasam Vada "
                "\n\t\tMedu Vada ";

        cout << "\n\n\t**************** Uttapam ****************";

        cout << "\n\t\tPlain Uttapam "
                "\n\t\tOnion Uttapam "
                "\n\t\tTomato Uttapam "
                "\n\t\tMasala Uttapam ";

        cout << "\n\n\t**************** Pongal ****************";

        cout << "\n\t\tSweet Pongal "
                "\n\t\tSpicy Pongal "
                "\n\t\tRava Pongal ";

        break;

    case 6:

        cout << "\n\n\t**************** Sabji ****************";

        cout << "\n\t\tGatte ki sabji "
                "\n\t\tAchari arbi "
                "\n\t\tJodhpuri kabuli "
                "\n\t\tPalak kadhi "
                "\n\t\tDahi Aloo "
                "\n\t\tBesan mirch "
                "\n\t\tPanchmel dal "
                "\n\t\tDal bati churma ";

        cout << "\n\n\t**************** Roti ****************";
        cout << "\n\t\tPlain roti "
                "\n\t\tFulka "
                "\n\t\tBajra roti "
                "\n\t\tMissi roti "
                "\n\t\tKhoba roti "
                "\n\t\tBejar roti "
                "\n\t\tBajra aloo roti "
                "\n\t\tPaneer bajra roti ";

        cout << "\n\n\t**************** Rice ****************";
        cout << "\n\t\tJodhpuri Kabuli "
                "\n\t\tRajasthani pulao "
                "\n\t\tPlain rice "
                "\n\t\tJeera rice "
                "\n\t\tGatte ka pulao "
                "\n\t\tBajra khichdi "
                "\n\t\tRam pulao (gatta pulao) "
                "\n\t\tBasanti pulao ";

        cout << "\n\n\t**************** Sweets ****************";
        cout << "\n\t\tDoodhiya kheench "
                "\n\t\tDilkushar "
                "\n\t\tRabri ghevar "
                "\n\t\tBalushahi "
                "\n\t\tChurma laddoo "
                "\n\t\tMawa kachori "
                "\n\t\tMoong daal halwa ";

        break;

    case 7:

        cout << "\n\n\t**************** Food ****************";

        cout << "\n\t\tVeg Noodles "
                "\n\t\tHakka Noodles "
                "\n\t\tJapanese Noodles "
                "\n\t\tOnion Garlic Noodles "
                "\n\t\tAmerican Chop Suey "
                "\n\t\tVeg Triple Schezwan ";

        cout << "\n\n\t**************** Soup ****************";

        cout << "\n\t\tManchow Soup "
                "\n\t\tCream of Broccoli "
                "\n\t\tSpicy Mexican "
                "\n\t\tCorn Chowder ";

        cout << "\n\n\t**************** Salad ****************";

        cout << "\n\t\tCaesar Salad "
                "\n\t\tGarden Fresh Green Salad "
                "\n\t\tWaldorf Salad "
                "\n\t\tOriental Salad "
                "\n\t\tCorn Sprout Salad "
                "\n\t\tSauteed Veg Salad "
                "\n\t\tWatermelon Feta Salad "
                "\n\t\tFresh Veg Salad ";

        break;
    }
}
mainfood::mainfood()
{
    cout << "\nWhich type of food you want" << endl
         << "Choose from given option:";
    cout << "\n\t\t1) Maharashtrian";
    cout << "\n\t\t2) Gujarati";
    cout << "\n\t\t3) Punjabi";
    cout << "\n\t\t4) Bengali";
    cout << "\n\t\t5) South Indian";
    cout << "\n\t\t6) Rajasthani";
    cout << "\n\t\t7) Chinees";
    cout << "\n\nEnter Menu number you want to select:\t";
    cin >> ans;
}
void food::Food()
{
    cout << "\nDo you want starters(Y/N):\t";
    cin >> ch;
    if (ch == 'Y' || ch == 'y')
    {
        cout << "\nStarters Menu:";
        cout << "\n\t1) Veg Manchurian";
        cout << "\n\t2) Chicken Lollipop";
        cout << "\n\t3) Chilli Chicken";
        cout << "\n\t4) Chicken 65";
        cout << "\n\t5) Crispy Corn";
        cout << "\n\t6) Veg Fried Rice";
        cout << "\n\t7) Paneer Tikka";
        cout << "\n\t8) Chilli Paneer";
        cout << "\n\t9) Veg Noodles";
        cout << "\n\t10) Manchurian Noodles";
        cout << "\n\nEnter Menu number you want to select:\t";
        cin >> choice;
    }
}

void food ::Food_Display()
{
    if (ch == 'Y' || ch == 'y')
    {
        switch (choice)
        {
        case 1:
            cout << "\n\tVeg Manchurian";
            break;
        case 2:
            cout << "\n\tChicken Lollipop";
            break;
        case 3:
            cout << "\n\tChilli Chicken";
            break;
        case 4:
            cout << "\n\tChicken 65";
            break;
        case 5:
            cout << "\n\tCrispy Corn";
            break;
        case 6:
            cout << "\n\tVeg Fried Rice";
            break;
        case 7:
            cout << "\n\tPaneer Tikka";
            break;
        case 8:
            cout << "\n\tChilli Paneer";
            break;
        case 9:
            cout << "\n\tVeg Noodles";
            break;
        case 10:
            cout << "\n\tManchurian Noodles";
            break;
        }
    }
}

//===========================================================

// phase 5
template <class T>
class GetMenu
{
    T a[50];

public:
    int n;
    void GgetMenu(int s)
    {
        n = s;
    }
    void getdata()
    {
        cin.get();
        for (int i = 0; i < n; i++)
        {
            cout << "\t\tEnter item name : ";
            getline(cin, a[i]);
        }
    }
    void display()
    {
        system("cls");
        cout << "\t\tYour items are:\t" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "\t\t\t" << a[i] << endl;
        }
    }
};

//============================================================================

// phase 6  offer available section
int ch(date abc)
{
    return abc.mm;
}

//===========================================================

// phase 7

double sn(B o)
{
    return o.no_of_Guest / 20;
}

// Phase 8
int gue_no(B ab1)
{
    return ab1.no_of_Guest + 0;
}

// ==========================================================

// phase 9
class address
{
    char Address[80];
    char District[20];
    char State[20];
    double pin_code;

public:
    address()
    {
        cin.get();

        cout << "\n\tEnter your Address:\t";
        cin.getline(Address, 80);

        cout << "\n\tEnter District:\t";
        cin.getline(District, 20);

        cout << "\n\tEnter State:\t";
        cin.getline(State, 20);

        cout << "\n\tEnter Pin-Code:\t";
        cin >> pin_code;
    }
};

//===========================================================

// phase 10
class Pay_Method
{
public:
    void offline();
    void net_banking();
    void upi();
};
void Pay_Method ::offline()
{
    cout << "\n\t\tOffice address:";
    cout << "\n\t\tStreet        :  431, Narshi Natha Road, Katha Bazar, Masjid Bunder(e)";
    cout << "\n\t\tCity          :  Mumbai";
    cout << "\n\t\tState         :  Maharashtra";
    cout << "\n\t\tPhone number  :  02223421298";
    cout << "\n\t\tZip code      :  400009";
}

void Pay_Method ::net_banking()
{
    cout << "\n\t\tBank Details :";
    cout << "\n\t\tName of Beneficiary  :  SSR Catters";
    cout << "\n\t\tType of Account      :  CURRENT";
    cout << "\n\t\tBank Name            :  STATE BANK OF INDIA";
    cout << "\n\t\tAccount no.          :  21453678564";
    cout << "\n\t\tIFSC  Beneficiary    :  SBIN000368";
}

void Pay_Method ::upi()
{
    cout << "\n\t\tDeposit your amount on UPI number : 8379045609 ";
}
//=======================================================

// phase 11
class Rating
{
    int rate;

public:
    Rating()
    {
        do
        {
            cout << "\n\t\tRate our service out of 5     :\t";
            cin >> rate;

            if (rate > 5 || rate < 0)
            {
                cout << "\n\t\tInvalid rating";
            }
            else
            {
                cout << "\n\n\t\t\t**THANKYOU**";
            }
        } while (rate > 5 || rate < 0);
    }
};
//=======================================================

int main()
{
    // phase 1
    cout << "\n\t\t********** Welcome to SSR Catering Services **********\n";
    phase1 p;
    //===========================================================

    // phase 2
    system("cls");
    date dm;
    //===========================================================

    // phase 3
    system("cls");
    A *f;
    B s;
    f = &s;
    f->input();
    //===========================================================

    // phase 4
    system("cls");
    food starter;
    starter.Food();
    system("cls");
    mainfood type;
    // starter.Food_Display();
    type.main_displays();
    //===========================================================

    // phase 5
    GetMenu<string> g;
    int ab;
    cout << "\n\n\t\tEnter how many items you required for your Event :\t ";
    cin >> ab;
    g.GgetMenu(ab);
    g.getdata();
    system("cls");

    //===========================================================

    // phase 6 offers available
    ch(dm);
    switch (ch(dm))
    {
    case 1:
        cout << "\nSorry no offers available";
        break;

    case 2:
        cout << "\nSorry no offers available";
        break;

    case 3:
        cout << "\nSorry no offers available";
        break;

    case 4:
        cout << "\nSorry no offers available";
        break;

    case 5:
        cout << "\nSorry no offers available";
        break;

    case 6:
        cout << "\nSorry no offers available";
        break;

    case 7:
        cout << "\nSorry no offers available";
        break;

    case 8:
        cout << "\nSorry no offers available";
        break;

    case 9:
        cout << "\nSorry no offers available";
        break;

    case 10:
        cout << "\nSorry no offers available";
        break;

    case 11:
        cout << "\nSorry no offers available";
        break;

    case 12:
        cout << "\nSorry no offers available";
        break;
    }

    //===========================================================
    // phase 7
    int Wait = sn(s);
    // wait = ceil(Test);
    cout << "\n\n\tWaiters required for your event is:\t" << Wait;
    int waiter_sum, add_more_waiter = 0;
    char wt_choice;
    cout << "\n\tEnter 'Y / N' if you want to add more waiters :\t";
    cin >> wt_choice;
    if (wt_choice == 'Y' || wt_choice == 'y')
    {
        cout << "\n\tEnter how many waiters you want to add with ' " << sn(s) << " ' :\t";
        cin >> add_more_waiter;
    }
    waiter_sum = Wait + add_more_waiter;

    //===========================================================

    // phase 8
    B guestnumber;
    int abcd;
    abcd = gue_no(guestnumber);
    cout << "\n\tTotal waiters for your event is:\t" << waiter_sum;

    cout << "\n\tClick Enter to cotinue...";
    getch();
    system("cls");

    g.display();
    Bill C_cost(ab, waiter_sum, abcd);

    //===========================================================

    // phase 9

    string yes_no;
    cout << "\n\tType 'Y / N' if you want to continue with your order:\t";
    cin >> yes_no;
    system("cls");
    if (yes_no == "Y" || yes_no == "y")
    {
        int z, Captcha;
        srand(time(0));
        cout << "\n\tEnter the given captcha code to confirm order:" << endl;
        z = 100000 + (rand() % 999999);
        cout << "\n\n\t\t\t'Captcha code'";
        cout << "\n\n\t\t\t   " << z;

        cout << "\n\n\t      Enter code : ";
        cin >> Captcha;
        system("cls");
        if (Captcha == z)
        {
            address ad;
        }
    }
    //==================================================================

    // phase 10
    system("cls");

    Pay_Method pay;
    int pay_opt;

    cout << "\n\t\tBy which method you want to pay deposit";
    cout << "\n\t\t1. Offline:"
            "\n\t\t2. Net banking:"
            "\n\t\t3. UPI method:";

    cout << "\n\n\t\tEnter option number:\t";
    cin >> pay_opt;
    switch (pay_opt)
    {
    case 1:
    {
        pay.offline();
        break;
    }
    case 2:
    {
        pay.net_banking();
        break;
    }
    case 3:
    {
        pay.upi();
        break;
    }
    default:
    {
        printf("\n\n\n\t\tPlease enter Valid choice");
    }
    }

    cout << "\n\n\n\t\tThank you for connecting with SSR Catering Services";

    // phase 11
    Rating R;

    return 0;
}