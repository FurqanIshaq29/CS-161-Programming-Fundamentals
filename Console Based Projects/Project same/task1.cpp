#include <iostream>
#include <conio.h>
using namespace std;

// Global Variables
const int userArrSize = 10;
string users[userArrSize];
string passwords[userArrSize];
string roles[userArrSize];

int usersCount = 0;
//--------Global variables for the product listing
string productBrand[100];
string productName[100];
string productCategory[100];
string productDetails[100];
int productPrice[100];
int productReviews[100];

int placeCart;
int placeOrder;
int orderPlacement = 0; // Order place hone k bad is me increment ho jaye ga jis se seller ki menu3 me addition ho jaye gi
int productCount = 0;

int count = 0;
int addToCartProducts[100];

// functions
void topHeader();
void subMenuBeforeMainMenu(string submenu);
void submenu();
bool signUp(string name, string password, string role);
string signIn(string name, string password);
int loginMenu();
void clearScreen();

void adminInterface();
int adminMenu();

void sellerInterface();
int sellerMenu();

void customerInterface();
int customerMenu();

void sellerMenu1();
void sellerMenu2();
void sellerMenu3();
void sellerMenu4();
void sellerMenu5();
void sellerMenu6();
void sellerMenu7();
void sellerMenu8();
void sellerMenu9();

void customerMenu1();
void customerMenu2();
void customerMenu3();
void customerMenu4();
void customerMenu5();
void customerMenu6();
void customerMenu7();
void customerMenu8();
void customerMenu9();
void customerMenu10();
void customerMenu11();
void customerMenu12();

int main()
{
    int loginOption = 0;
    while (loginOption != 3)

    {
        topHeader();
        subMenuBeforeMainMenu("Login");
        loginOption = loginMenu();

        if (loginOption == 1)
        { // signup
            system("cls");
            string name;
            string password;
            string role;
            topHeader();
            subMenuBeforeMainMenu("SignUp");
            cout << "Enter your Name: " << endl;
            cin >> name;
            cout << "Enter your Password: " << endl;
            cin >> password;
            cout << "Enter your Role : " << endl;
            cin >> role;
            bool isValid = signUp(name, password, role);
            if (isValid)
            {
                cout << "SignedUp Successfully\n\n";
            }
            if (!isValid)
            {
                cout << "Users in the System have exceeded the Capacity" << endl;
            }
            clearScreen();
        }

        else if (loginOption == 2)
        {
            // Sign in interface

            system("cls");
            string name;
            string password;
            string role;
            topHeader();
            subMenuBeforeMainMenu("SignIn");
            cout << "Enter your Name: " << endl;
            cin >> name;
            cout << "Enter your Password: " << endl;
            cin >> password;
            role = signIn(name, password);
            if (role == "Admin")
            {
                clearScreen();
                adminInterface();
            }

            else if (role == "Seller")
            {
                clearScreen();
                sellerInterface();
            }

            else if (role == "Customer")
            {
                clearScreen();
                customerInterface();
            }
            else if (role == "undefined")
            {
                cout << "You Entered wrong Credentials" << endl;
            }
        }
    }
}

void topHeader()
{
    cout << "                   #@@@@@@@    @@@        @@@      ######         " << endl;
    cout << "                   #           @@  @     @ @@     #      #        " << endl;
    cout << "                   #           @@   @   @  @@     #               " << endl;
    cout << "                   #@@@@@@     @@    @ @   @@      # # # #        " << endl;
    cout << "                   #           @@     @    @@             #       " << endl;
    cout << "                   #           @@          @@      #      #       " << endl;
    cout << "                   #@@@@@@@    @@          @@       ######        " << endl;
    cout << "                                                                  " << endl;
    cout << "              ###############################################     " << endl;
    cout << "              ******** E-COMMERCE MANAGEMENT SYSTEM *********     " << endl;
    cout << "              ###############################################     " << endl;
    cout << "                         WELCOME TO E-COMMERCE SYSTEM             " << endl;
    cout << endl;
}

int loginMenu()
{
    int option;
    cout << "1. SignUp to get your Credentials" << endl;
    cout << "2. SignIn with your Credentials" << endl;
    cout << "3. Exit the Application" << endl;
    cout << endl;
    cout << "Enter the Option Number > ";
    cin >> option;
    return option;
}

void subMenuBeforeMainMenu(string submenu)
{
    string message = submenu + " Menu";
    cout << message << endl;
    cout << "---------------------" << endl;
}

void subMenu(string submenu)
{
    string message = "Main Menu > " + submenu;
    cout << message << endl;
    cout << "---------------------" << endl;
}

bool signUp(string name, string password, string role)
{
    if (usersCount < userArrSize)
    {
        users[usersCount] = name;
        passwords[usersCount] = password;
        roles[usersCount] = role;
        usersCount++;
        return true;
    }
    else
    {
        return false;
    }
}

string signIn(string name, string password)
{
    for (int index = 0; index < usersCount; index++)
    {
        if (users[index] == name && passwords[index] == password)
        {
            return roles[index];
        }
    }
    return "undefined";
}

void clearScreen()
{
    cout << "Press Any Key to Continue.." << endl;
    getch();
    system("cls");
}

void adminInterface()
{
    int adminOption = 0;
    while (adminOption != 7)
    {
        topHeader();
        subMenu("");
        adminOption = adminMenu();
        if (adminOption == 1)
        {
            system("cls");
            topHeader();
            subMenu("Product Management");
        }
        clearScreen();
    }
}

int adminMenu()
{
    int option;
    cout << "Select one of the following options number..." << endl;
    cout << "1.     Product Management" << endl;
    cout << "2.     Order Management" << endl;
    cout << "3.     Customer Management" << endl;  // product list under budget
    cout << "4.     Inventory Management" << endl; //
    cout << "5.     Payment and Shipping" << endl; // reutrned  orders
    cout << "6.\t\tCustomer Care" << endl;         // warehouses
    cout << "7.\t\tExit" << endl;                  // Free delivery
    cout << "Your Option..";
    cin >> option;
    return option;
}

void sellerInterface()
{
    int sellerOption = 0;
    while (sellerOption != 8)
    {
        topHeader();
        subMenu("Seller");
        sellerOption = sellerMenu();

        if (sellerOption == 1)
        {
            // seller Menu1 = Product listing
            system("cls");
            topHeader();
            subMenu("List the Products");
            sellerMenu1();
        }

        if (sellerOption == 2)
        {
            // seller Menu2 = Product Management
            system("cls");
            topHeader();
            subMenu("Product Management");
            sellerMenu2();
        }

        if (sellerOption == 3)
        {
            // seller Menu3 = Order Fulfillment
            system("cls");
            topHeader();
            subMenu("Order Fulfillment");
            sellerMenu3();
        }

        if (sellerOption == 4)
        {
            // seller Menu4 =
            system("cls");
            topHeader();
            subMenu("Order Fulfillment");
            sellerMenu4();
        }

        if (sellerOption == 5)
        {
            // seller Menu5 =
            system("cls");
            topHeader();
            subMenu("Order Fulfillment");
            sellerMenu5();
        }

        if (sellerOption == 6)
        {
            // seller Menu6 =
            system("cls");
            topHeader();
            subMenu("Order Fulfillment");
            sellerMenu6();
        }
        clearScreen();
    }
}

//-----------------product Listing / Menu 1
void sellerMenu1()
{
    cout << "Enter the brand name : ";
    cin.ignore();
    getline(cin, productBrand[productCount]);

    cout << "Enter the product name : ";
    getline(cin, productName[productCount]);

    cout << "Enter the product category : ";
    getline(cin, productCategory[productCount]);

    cout << "Enter the Price : ";
    cin >> productPrice[productCount];

    cout << "Enter the description : ";
    cin.ignore();
    getline(cin, productDetails[productCount]);

    cout << "Enter the Review : ";
    cin >> productReviews[productCount];

    productCount++;
}

//-----------------Product Management / Menu 2
void sellerMenu2()
{

    int productOption;
    for (int i = 0; i < productCount; i++)
    {
        cout << "Product " << i + 1 << "."
             << " " << productName[i] << endl;
    }
    cout << endl;
    cout << "Enter the number of the product : ";
    cin >> productOption;
    for (int i = 0; i < productCount; i++)
    {
        if (productOption == i + 1)
        {
            cout << "Brand Name : " << productBrand[i] << endl;
            cout << "Product Name : " << productName[i] << endl;
            cout << "Product Price : " << productPrice[i] << endl;
            cout << "Product Category : " << productCategory[i] << endl;
            cout << "Product Reviews : " << productReviews[i] << "\n\n";
            cout << "Product Description : " << productDetails[i] << endl;
        }
    }
}

//-----------------Order Fulfillment / Menu 2

void sellerMenu3()
{
    for (int i = 0; i < orderPlacement; i++)
    {
    }

    if (orderPlacement = 0)
    {
        cout << "You have not any orders yet (^.^)\n";
    }
}

void sellerMenu4()
{
}

void sellerMenu5()
{
}

void sellerMenu6()
{
}

int sellerMenu()
{
    int option;
    cout << "Select one of the following options number..." << endl;
    cout << "1.	List the Products" << endl;  // done
    cout << "2.	Product Management" << endl; // done
    cout << "3.	Order Fulfillment" << endl;
    cout << "4.	Remove Product" << endl;
    cout << "5.	Payment and Shipping" << endl;
    cout << "6.	Discounts" << endl;
    cout << "7. Customer Care" << endl;
    cout << "8. Exit" << endl;
    cout << "Your Option..";
    cin >> option;
    return option;
}

//-----------------------CUSTOMER OPTION----------------------//
void customerInterface()
{
    int customerOption = 0;
    while (customerOption != 8)
    {
        topHeader();
        subMenu("");
        customerOption = customerMenu();

        //-----------Search a Product
        if (customerOption == 1)
        {
            system("cls");
            topHeader();
            subMenu("Search Product");
            customerMenu1();
        }

        if (customerOption == 2)
        {
            system("cls");
            topHeader();
            subMenu("Product Under Budget");
            customerMenu2();
        }

        if (customerOption == 3)
        {
            system("cls");
            topHeader();
            subMenu("Product Details");
            customerMenu3();
        }

        if (customerOption == 4)
        {
            system("cls");
            topHeader();
            subMenu("Add to Cart");
            customerMenu4();
        }

        if (customerOption == 5)
        {
            system("cls");
            topHeader();
            subMenu("Remove from Cart");
            customerMenu5();
        }

        if (customerOption == 6)
        {
            system("cls");
            topHeader();
            subMenu("Show Cart");
            customerMenu6();
        }

        if (customerOption == 7)
        {
            system("cls");
            topHeader();
            subMenu("Place Order");
            customerMenu7();
        }

        if (customerOption == 8)
        {
            system("cls");
            topHeader();
            subMenu("Generate Bill");
            customerMenu8();
        }

        if (customerOption == 9)
        {
            system("cls");
            topHeader();
            subMenu("Track Order");
            customerMenu9();
        }

        if (customerOption == 10)
        {
            system("cls");
            topHeader();
            subMenu("Give Review");
            customerMenu10();
        }

        if (customerOption == 11)
        {
            system("cls");
            topHeader();
            subMenu("Return Item");
            customerMenu11();
        }

        if (customerOption == 12)
        {
            system("cls");
            topHeader();
            subMenu("Exit");
            customerMenu12();
        }
    }
}

//---------------Search Product-------------//
void customerMenu1()
{
    string searchProductName;
    char placeCartOption;
    int productCartNumber;

    cout << "Enter the Product Name : ";
    getline(cin, searchProductName);

    for (int i = 0; i < productCount; i++)
    {
        if (productName[i] == searchProductName)
        {
            cout << i + 1 << ".\n\n";
            cout << "Brand Name : " << productBrand[i] << endl;
            cout << "Product Name : " << productName[i] << endl;
            cout << "Product Price : " << productPrice[i] << endl;
            cout << "Product Category : " << productCategory[i] << endl;
            cout << "Product Reviews : " << productReviews[i] << "\n\n";
            cout << "Product Description : " << productDetails[i] << "\n\n";
            placeCart = i;
        }
    }

    // Add to Cart
    cout << "\n\n";
    cout << "Press A to ADD TO CART or any other key to continue.. ";
    cin >> placeCartOption;

    if (placeCartOption == 'a' || placeCartOption == 'A')
    {
        cout << "Enter the product number to add to cart : ";
        cin >> productCartNumber;

        addToCartProducts[count] = placeCart;

        count++;
    }
}

//---------------Product Under Budget-------------//
void customerMenu2()
{
    int searchProductBudget;
    string productUnderBudgetName;
    cout << "Enter your Budget : ";
    cin >> searchProductBudget;
    for (int i = 0; i < productCount; i++)
    {
        if (productPrice[i] <= searchProductBudget)
        {
            cout << "Product" << i + 1 << ". " << productName[i] << "\n";
        }
    }
    cout << "Enter the product name to find its details : ";
    getline(cin, productUnderBudgetName);
    cout << "\n\n";
    for (int i = 0; i < productCount; i++)
    {
        if (productName[i] == productUnderBudgetName)
        {
            cout << "Brand Name : " << productBrand[i] << endl;
            cout << "Product Name : " << productName[i] << endl;
            cout << "Product Price : " << productPrice[i] << endl;
            cout << "Product Category : " << productCategory[i] << endl;
            cout << "Product Reviews : " << productReviews[i] << endl
                 << endl;
            cout << "Product Description : " << productDetails[i] << endl;
        }
    }
}

//---------------Product Details-------------//
void customerMenu3()
{
}

//---------------Add to Cart-------------//
void customerMenu4()
{
}
//---------------Remove from Cart-------------//
void customerMenu5()
{
}

//---------------Show Cart-------------//
void customerMenu6()
{
    int menu6;
    for (int i = 0; i < count; i++)
    {
        addToCartProducts[i] = menu6;
        cout << i + 1 << ".\n\n";
        cout << "Brand Name : " << productBrand[menu6] << endl;
        cout << "Product Name : " << productName[menu6] << endl;
        cout << "Product Price : " << productPrice[menu6] << endl;
        cout << "Product Category : " << productCategory[menu6] << endl;
        cout << "Product Reviews : " << productReviews[menu6] << "\n\n";
        cout << "Product Description : " << productDetails[menu6] << "\n\n\n";
    }

    cout << "Press P to PLACE THE ORDER or press any key to continue : ";
    char a;
    cin >> a;
    if (a == 'P' || a == 'p')
    {
        int b, c;
        cout << "Enter the product number : ";
        cin >> b;
        cout << endl;
        c = addToCartProducts[b - 1];
        cout << "Product Details : \n";
        cout << "Brand Name : " << productBrand[c] << endl;
        cout << "Product Name : " << productName[c] << endl;
        cout << "Product Price : " << productPrice[c] << endl;
        cout << "Product Category : " << productCategory[c] << endl;
        cout << "Product Reviews : " << productReviews[c] << "\n\n";
        cout << "Product Description : " << productDetails[c] << "\n\n\n";
    }
}

//---------------Place Order-------------//
void customerMenu7()
{
}

//---------------Generate Bill-------------//
void customerMenu8()
{
}

//---------------Track Order-------------//
void customerMenu9()
{
}

//---------------Give Review-------------//
void customerMenu10()
{
}

//---------------Return Item-------------//
void customerMenu11()
{
}

//---------------Exit-------------//
void customerMenu12()
{
}

int customerMenu()
{
    int option;
    cout << "Select one of the following options number..." << endl;
    cout << "1. \t\tSearch Product" << endl;
    cout << "2. \t\tProduct Under Budget" << endl;
    cout << "3. \t\tProduct Details" << endl;
    cout << "4. \t\tAdd to Cart" << endl;
    cout << "5. \t\tRemove from Cart" << endl;
    cout << "6. \t\tShow Cart" << endl;
    cout << "7. \t\tPlace Order" << endl;
    cout << "8. \t\tGenerate Bill" << endl;
    cout << "9.\t\tTrack Order" << endl;
    cout << "10.\t\tGive Review" << endl;
    cout << "11.\t\tReturn Item\n";
    cout << "12.\t\tExit" << endl;
    cout << "Your Option...";
    cin >> option;
    return option;
}