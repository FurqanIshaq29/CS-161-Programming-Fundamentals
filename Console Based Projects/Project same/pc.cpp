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
float productReviews[100];

int num;
string city[100];
string removeProduct;
string Name;
string Number;
string shippingInfo;
string billingInfo;
int trackingNumber;
int placeCart;
int placeOrdered;
int reviewCount = 0;
int orderPlacement = 0; // Order place hone k bad is me increment ho jaye ga jis se seller ki menu3 me addition ho jaye gi
int productCount = 0;

bool inProgress = false;
bool shipped = false;
bool delivered = false;

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

void customerMenu1();
void customerMenu2();
void customerMenu3();
void customerMenu4();
void customerMenu5();
void customerMenu6();
void customerMenu7();

void adminMenu1();
void adminMenu2();
void adminMenu3();
void adminMenu4();
void adminMenu5();

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
    while (adminOption != 6)
    {
        topHeader();
        subMenu("Admin");
        adminOption = adminMenu();

        if (adminOption == 1)
        {
            system("cls");
            topHeader();
            subMenu("Total Products");
            adminMenu1();
        }

        if (adminOption == 2)
        {
            system("cls");
            topHeader();
            subMenu("Total Sellers");
            adminMenu2();
        }

        if (adminOption == 3)
        {
            system("cls");
            topHeader();
            subMenu("Warehouse Management");
            adminMenu3();
        }

        if (adminOption == 4)
        {
            system("cls");
            topHeader();
            subMenu("Capacity Management");
            adminMenu4();
        }

        if (adminOption == 5)
        {
            system("cls");
            topHeader();
            subMenu("Customer Care");
            adminMenu5();
        }

        clearScreen();
    }
}

void adminMenu1()
{
    cout << "Total Products : " << productCount + 1;
}

void adminMenu2()
{
    cout << "Total Sellers : " << productCount + 1;
}

void adminMenu3()
{
    cout << "Enter the number of Warehouses : ";

    cin >> num;
        cout << "Enter the city one by one : ";

    for (int i = 0; i < num; i++)
    {
        cin >> city[i];
    }
    cout << "Total Warehouses : \n";
    for (int i = 0; i < num; i++)
    {
        cout << city[i] << "\t";
    }
    cout << "\n";
}

void adminMenu4()
{
    int capacity[100];

    cout << "Enter the capacity for every Warehouse : ";

    for (int i = 0; i <3; i++)
    {
        cout << "Capacity for " << city[i] << " : ";
        cin >> capacity[i];
    }

    for (int i = 0; i < num; i++)
    {
        cout << "Warehouse # " << i + 1 << " : \t" << city[i] << " \t" << capacity[i] << "\n";
    }
}

void adminMenu5()
{
    cout << "Q 1: Who are your shipping partners ? \n";
    cout << "Q 2: How to cancel the order ? \n";
    cout << "Q 3: How to apply Coupon Code ? \n";
    cout << "Q 3: Do you accept COD ? \n";
    cout << "Enter your query : ";
    int op;
    cin >> op;
    if (op == 1)
    {
        cout << "BlueEx\tCall Courier\tTCS\tLeopord Courier\n";
    }

    else if (op == 2)
    {
        cout << "You can go to seller center to cancel the order by telling your order number.\n";
    }

    else if (op == 3)
    {
        cout << "Copy the coupon code and write at the time of checkout.\n";
    }

    else if (op == 4)
    {
        cout << "Yeah we accept COD.";
    }

    else
    {
        cout << "Wait for the answer.. (^.^)\n";
    }
}

int adminMenu()
{
    int option;
    cout << "Select one of the following options number..." << endl;
    cout << "1.\tTotal Products" << endl;
    cout << "2.\tTotal Sellers" << endl;
    cout << "3.\tWarehouse Management" << endl;
    cout << "4.\tCapacity Management" << endl;
    cout << "5.\tCustomer Care" << endl;
    cout << "6.\tExit" << endl;
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

        else if (sellerOption == 2)
        {
            // seller Menu2 = Product Management
            system("cls");
            topHeader();
            subMenu("Product Management");
            sellerMenu2();
        }

        else if (sellerOption == 3)
        {
            // seller Menu3 = Order Fulfillment
            system("cls");
            topHeader();
            subMenu("Order Fulfillment");
            sellerMenu3();
        }

        else if (sellerOption == 4)
        {
            // seller Menu4 =
            system("cls");
            topHeader();
            subMenu("Remove Product");
            sellerMenu4();
        }

        else if (sellerOption == 5)
        {
            // seller Menu5 =
            system("cls");
            topHeader();
            subMenu("Payment and Shipping");
            sellerMenu5();
        }

        else if (sellerOption == 6)
        {
            // seller Menu6 =
            system("cls");
            topHeader();
            subMenu("Discounts");
            sellerMenu6();
        }

        else if (sellerOption == 7)
        {
            // seller Menu6 =
            system("cls");
            topHeader();
            subMenu("Customer Care");
            sellerMenu7();
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

//-----------------Order Fulfillment / Menu 3

void sellerMenu3()
{
    for (int i = 0; i < placeOrdered + 1; i++)
    {
        cout << "Order # " << i + 1 << " : \n";
        cout << "Brand Name : " << productBrand[placeOrdered] << endl;
        cout << "Product Name : " << productName[placeOrdered] << endl;
        cout << "Product Price : " << productPrice[placeOrdered] << endl;
        cout << "Product Category : " << productCategory[placeOrdered] << endl;
        cout << "Product Reviews : " << productReviews[placeOrdered] << "\n";
        cout << "Product Description : " << productDetails[placeOrdered] << "\n\n";
        cout << "Product Price : " << (productPrice[placeOrdered] + 150) << "\n";
        cout << "Enter the current **in Progress** : ";
        cin >> inProgress;
        cout << "Enter the current **Shipped** : ";
        cin >> shipped;
        cout << "Enter the current **Delivered** : ";
        cin >> delivered;
    }

    if (orderPlacement = 0)
    {
        cout << "You have not any orders yet (^.^)\n";
    }
}

//-----------------Remove Product / Menu 4
void sellerMenu4()
{
    cout << "Enter a product name : ";
    cin.ignore();
    getline(cin, removeProduct);
    for (int i = 0; i < productCount; i++)
    {
        if (removeProduct == productName[i])
        {
            productName[i] = productName[i + 1];
            productBrand[i] = productBrand[i + 1];
            productCategory[i] = productCategory[i + 1];
            productPrice[i] = productPrice[i + 1];
            productDetails[i] = productDetails[i + 1];
            productReviews[i] = productReviews[i + 1];
        }
    }
}

//-----------------Payment and Shipping / Menu 5
void sellerMenu5()
{
    string payment[3];
    cout << "Enter the payment method : ";
    for (int i = 0; i < 3; i++)
    {
        cin >> payment[i];
    }

    cout << "How much shipping companies will you collaborate : ";
    int com;
    cin >> com;
    string shipping[com];
    cout << "Enter the shipping company name : ";
    for (int i = 0; i < com; i++)
    {
        cin >> shipping[i];
    }

    cout << "Payment Option : \n";
    for (int i = 0; i < 3; i++)
    {
        cout << payment[i] << "\t";
    }
    cout << "\n\n";

    for (int i = 0; i < com; i++)
    {
        cout << shipping[i] << "\t";
    }

    cout << "\n";
}

//-----------------Discounts / Menu 6
void sellerMenu6()
{
    cout << "Buy 3 items to get 10% discount.\n";
    cout << "CheckOut a Total of 10,000 to avail 20% discount.\n";
    cout << "More Options coming soon.\n";
}

//-----------------Customer Care / Menu 7
void sellerMenu7()
{
    cout << "Q 1: Who are your shipping partners ? \n";
    cout << "Q 2: How to cancel the order ? \n";
    cout << "Q 3: How to apply Coupon Code ? \n";
    cout << "Q 3: Do you accept COD ? \n";
    cout << "Enter your query : ";
    int op;
    cin >> op;
    if (op == 1)
    {
        cout << "BlueEx\tCall Courier\tTCS\tLeopord Courier\n";
    }

    else if (op == 2)
    {
        cout << "You can go to seller center to cancel the order by telling your order number.\n";
    }

    else if (op == 3)
    {
        cout << "Copy the coupon code and write at the time of checkout.\n";
    }

    else if (op == 4)
    {
        cout << "Yeah we accept COD.";
    }

    else
    {
        cout << "Wait for the answer.. (^.^)\n";
    }
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
        subMenu("Customer");
        customerOption = customerMenu();

        //-----------Search a Product
        if (customerOption == 1)
        {
            system("cls");
            topHeader();
            subMenu("Search Product");
            customerMenu1();
        }

        //----------Product Under Budget
        if (customerOption == 2)
        {
            system("cls");
            topHeader();
            subMenu("Product Under Budget");
            customerMenu2();
        }

        //----------Show Cart
        if (customerOption == 3)
        {
            system("cls");
            topHeader();
            subMenu("Show Cart");
            customerMenu3();
        }

        //----------Shipping Details
        if (customerOption == 4)
        {
            system("cls");
            topHeader();
            subMenu("Shipping Details");
            customerMenu4();
        }

        //----------Generate Bill
        if (customerOption == 5)
        {
            system("cls");
            topHeader();
            subMenu("Generate Bill");
            customerMenu5();
        }

        //----------Track Order
        if (customerOption == 6)
        {
            system("cls");
            topHeader();
            subMenu("Track Order");
            customerMenu6();
        }

        //----------Give Review
        if (customerOption == 7)
        {
            system("cls");
            topHeader();
            subMenu("Give Review");
            customerMenu7();
        }

        clearScreen();
    }
}

//---------------Search Product-------------//
void customerMenu1()
{
    string searchProductName;
    char placeCartOption;
    int productCartNumber;

    cout << "Enter the Product Name : ";
    cin.ignore();
    getline(cin, searchProductName);

    for (int i = 0; i < productCount; i++)
    {
        if (searchProductName == productName[i])
        {
            cout << i + 1 << ".\n";
            cout << "Brand Name : " << productBrand[i] << endl;
            cout << "Product Name : " << productName[i] << endl;
            cout << "Product Price : " << productPrice[i] << endl;
            cout << "Product Category : " << productCategory[i] << endl;
            cout << "Product Reviews : " << productReviews[i] << "\n";
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
        if (searchProductBudget <= productPrice[i])
        {
            cout << "Product" << i + 1 << ". " << productName[i] << "\n";
        }
    }
    cout << "Enter the product name to find its details : ";
    cin.ignore();
    getline(cin, productUnderBudgetName);
    cout << "\n\n";
    for (int i = 0; i < productCount; i++)
    {
        if (productUnderBudgetName == productName[i])
        {
            cout << "Brand Name : " << productBrand[i] << endl;
            cout << "Product Name : " << productName[i] << endl;
            cout << "Product Price : " << productPrice[i] << endl;
            cout << "Product Category : " << productCategory[i] << endl;
            cout << "Product Reviews : " << productReviews[i] << endl;
            cout << "Product Description : " << productDetails[i] << endl;
        }
    }
}

//---------------Show Cart-------------//
void customerMenu3()
{
    int menu6;
    for (int i = 0; i < count; i++)
    {
        menu6 = addToCartProducts[i];
        cout << i + 1 << ".\n";
        cout << "Brand Name : " << productBrand[menu6] << endl;
        cout << "Product Name : " << productName[menu6] << endl;
        cout << "Product Price : " << productPrice[menu6] << endl;
        cout << "Product Category : " << productCategory[menu6] << endl;
        cout << "Product Reviews : " << productReviews[menu6] << "\n";
        cout << "Product Description : " << productDetails[menu6] << "\n\n";
    }

    cout << "Press P to PLACE THE ORDER or press any key to continue : ";
    char a;
    cin >> a;
    if (a == 'P' || a == 'p')
    {
        int b;
        cout << "Enter the product number : ";
        cin >> b;
        cout << endl;
        placeOrdered = addToCartProducts[b - 1];
        cout << "Product Details : \n";
        cout << "Brand Name : " << productBrand[placeOrdered] << endl;
        cout << "Product Name : " << productName[placeOrdered] << endl;
        cout << "Product Price : " << productPrice[placeOrdered] << endl;
        cout << "Product Category : " << productCategory[placeOrdered] << endl;
        cout << "Product Reviews : " << productReviews[placeOrdered] << "\n";
        cout << "Product Description : " << productDetails[placeOrdered] << "\n\n";
        cout << "Now Add the Shipping Information and Generate the bill to CONFIRM THE ORDER.\n";
    }
}

//---------------Shipping Details-------------//
void customerMenu4()
{
    cout << "Enter your Name : ";
    cin.ignore();
    getline(cin, Name);
    cout << "Enter your Shipping Details here : ";
    getline(cin, shippingInfo);
    cout << "Enter your Billing Info : ";
    getline(cin, billingInfo);
    cout << "Enter your Phone Number : ";
    getline(cin, Number);
}

//---------------Generate Bill-------------//
void customerMenu5()
{
    if (placeOrdered == -1)
    {
        cout << "You have any order Yet (^.^)";
    }
    else
    {
        trackingNumber = 1298;
        cout << "Your Order Details : \n";
        cout << "Brand Name : " << productBrand[placeOrdered] << endl;
        cout << "Product Name : " << productName[placeOrdered] << endl;
        cout << "Product Price : " << productPrice[placeOrdered] << endl;
        cout << "Product Category : " << productCategory[placeOrdered] << endl;
        cout << "Product Reviews : " << productReviews[placeOrdered] << "\n";
        cout << "Product Description : " << productDetails[placeOrdered] << "\n";
        cout << "Your Shipping Fee : 150" << endl;
        cout << "Your Name : " << Name << endl;
        cout << "Your Phone Number : " << Number << endl;
        cout << "Your Shipping Details : " << shippingInfo << "\n";
        cout << "Your Billing Details : " << billingInfo << "\n";
        cout << "Your Generated Bill : " << (productPrice[placeOrdered] + 150) << endl;
        cout << "Your order has been placed successfully (^.^) \n";
        cout << "Your Tracking number is : " << trackingNumber << endl;
    }
}

//---------------Track Order-------------//
void customerMenu6()
{
    int a;
    cout << "Enter your Tracking Number : ";
    cin >> a;
    if (a != 1298)
    {
        cout << "There are no records yet.Please enter a valid tracking number.\n";
    }
    else
    {
        cout << "Your Tracking Information : \n";
        cout << "Your tracking number : " << a << "\n";
        cout << "In Progress : " << inProgress << "\n";
        cout << "Shipped     : " << shipped << "\n";
        cout << "Delivered   : " << delivered << "\n";
    }
}

//---------------Give Review-------------//
void customerMenu7()
{
    if (delivered == true)
    {
        cout << "Give rating out of 5.0 : ";
        cin >> productReviews[orderPlacement];
        orderPlacement++;
    }
}

int customerMenu()
{
    int option;
    cout << "Select one of the following options number..." << endl;
    cout << "1. \tSearch Product" << endl;
    cout << "2. \tProduct Under Budget" << endl;
    cout << "3. \tShow Cart" << endl;
    cout << "4. \tShipping Details" << endl;
    cout << "5. \tGenerate Bill" << endl;
    cout << "6. \tTrack Order" << endl;
    cout << "7. \tGive Review" << endl;
    cout << "8. \tExit" << endl;

    cout << "Your Option...";
    cin >> option;
    return option;
}