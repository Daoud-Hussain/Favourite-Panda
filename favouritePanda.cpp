#include <iostream>
using namespace std;

struct OrderList
{
    string name;                         // Variable to store customer name
    string address;                      // Variable to store customer address
    string phone;                        // Variable to store customer phone number
    string email;                        // Variable to store customer email
    string cuisine;                      // Variable to store order cuisine
    string *orders = new string[5];      // Array to store orders
    int *orderTime = new int[5];         // Array to store orders required time
    OrderList* next;
};
OrderList* first;
OrderList* last;

// Working functions
void askForOrder()
{
    //Incase of empty nodes (No orders)
    if(first == NULL){
        int choice, option;
        bool flag = true;
        OrderList *newOrder = new OrderList();
        // Customer credentials
        cout<<endl;
        cout << "*********** Ask for Order ***********" << endl;
        cout << "Enter the customer name: "
            << " ";
        cin >> newOrder->name;
        cout << "Enter the customer address: "
            << " ";
        cin >> newOrder->address;
        cout << "Enter the mobile number: "
            << " ";
        cin >> newOrder->phone;
        cout << "Enter the email: "
            << " ";
        cin >> newOrder->email;
        cout<<endl<<endl;
        
        cout << "************* Order Details: ****************\n";

        while (flag)
        {
            cout << "Enter the order cuisine: \n";
            cout << "0 for Continental: \n";
            cout << "1 for Chinese: \n";
            cout << "2 for Thai: \n";
            cout << "3 for Italian: \n";
            cout << "4 for Indian: \n";
            cout << "5 to go back: \n";
            cout << "Enter your choice: ";
            cin >> choice;
            cout<<endl;

            if (choice == 0)
            {
                cout << "************ Continental Cuisine *************" << endl;
                cout << "1. Muesli Yogurt Parfait:                    " << endl;
                cout << "2. Southwestern Fried Chicken Strips:        " << endl;
                cout << "3. Roasted Garlic Chicken Soup:              " << endl;
                cout << "4. Creamy Chicken Rice Bowl:                 " << endl;
                cout << "5. Ranch Baked Chicken Brown Rice:           " << endl;
                cout << "*********************************************" << endl
                    << endl;
                cout << "Enter your choice: ";
                cin >> option;

                switch (option)
                    {
                    case 1:
                    {
                        newOrder->orders[choice] = "Muesli Yogurt Parfait";
                        newOrder->orderTime[choice] = 20;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 2:
                    {
                        newOrder->orders[choice] = "Southwestern Fried Chicken Strips";
                        newOrder->orderTime[choice] = 20;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 3:
                    {
                        newOrder->orders[choice] = "Roasted Garlic Chicken Soup";
                        newOrder->orderTime[choice] = 20;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 4:
                    {
                        newOrder->orders[choice] = "Creamy Chicken Rice Bowl";
                        newOrder->orderTime[choice] = 20;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 5:
                    {
                        newOrder->orders[choice] = "Ranch Baked Chicken Brown Rice";
                        newOrder->orderTime[choice] = 20;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    default:
                    {
                        cout << "Invalid input!!" << endl;
                        break;
                    }
                }
            }
            else if (choice == 1)
            {
                cout << "************ Chinese Cuisine *************" << endl;
                cout << "1. Peking Roasted Duck:                 " << endl;
                cout << "2. Kung Pao Chicken:                    " << endl;
                cout << "3. Sweet and Sour Pork:                 " << endl;
                cout << "4. Dim Sum:                             " << endl;
                cout << "5. Micronies:                           " << endl;
                cout << "*****************************************" << endl
                    << endl;
                cout << "Enter your choice: ";
                cin >> option;

                switch (option)
                    {
                    case 1:
                    {
                        newOrder->orders[choice] = "Peking Roasted Duck";
                        newOrder->orderTime[choice] = 25;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 2:
                    {
                        newOrder->orders[choice] = "Kung Pao Chicken";
                        newOrder->orderTime[choice] = 25;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 3:
                    {
                        newOrder->orders[choice] = "Sweet and Sour Pork";
                        newOrder->orderTime[choice] = 25;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 4:
                    {
                        newOrder->orders[choice] = "Dim Sum";
                        newOrder->orderTime[choice] = 25;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 5:
                    {
                        newOrder->orders[choice] = "Micronies";
                        newOrder->orderTime[choice] = 25;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    default:
                    {
                        cout << "Invalid input!!" << endl;
                        break;
                    }
                }
            }
            else if (choice == 2)
            {
                cout << "************ Thai Cuisine *************" << endl;
                cout << "1. Fully loaded Shawarma:             " << endl;
                cout << "2. Chocolate Treat Waffle:            " << endl;
                cout << "3. Chicken Roll Paratha:              " << endl;
                cout << "4. Chicken Cheese Shawarma:           " << endl;
                cout << "5. Banana Waffle:                     " << endl;
                cout << "***************************************" << endl
                    << endl;
                cout << "Enter your choice: ";
                cin >> option;

                switch (option)
                    {
                    case 1:
                    {
                        newOrder->orders[choice] = "Fully loaded Shawarma";
                        newOrder->orderTime[choice] = 30;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 2:
                    {
                        newOrder->orders[choice] = "Chocolate Treat Waffle";
                        newOrder->orderTime[choice] = 30;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 3:
                    {
                        newOrder->orders[choice] = "Chicken Roll Paratha";
                        newOrder->orderTime[choice] = 30;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 4:
                    {
                        newOrder->orders[choice] = "Chicken Cheese Shawarma";
                        newOrder->orderTime[choice] = 30;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 5:
                    {
                        newOrder->orders[choice] = "Banana Waffle";
                        newOrder->orderTime[choice] = 30;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    default:
                    {
                        cout << "Invalid input!!" << endl;
                        break;
                    }
                }
            }
            else if (choice == 3)
            {
                cout << "************ Italian Cuisine *************" << endl;
                cout << "1. Insalata Caprese:                    " << endl;
                cout << "2. Tiramisu:                            " << endl;
                cout << "3. Caponata:                            " << endl;
                cout << "4. Vitello Tonnato:                     " << endl;
                cout << "5. Culurgiones:                         " << endl;
                cout << "*****************************************" << endl
                    << endl;
                cout << "Enter your choice: ";
                cin >> option;

                switch (option)
                    {
                    case 1:
                    {
                        newOrder->orders[choice] = "Insalata Caprese";
                        newOrder->orderTime[choice] = 25;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 2:
                    {
                        newOrder->orders[choice] = "Tiramisu";
                        newOrder->orderTime[choice] = 25;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 3:
                    {
                        newOrder->orders[choice] = "Caponata";
                        newOrder->orderTime[choice] = 25;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 4:
                    {
                        newOrder->orders[choice] = "Vitello Tonnato";
                        newOrder->orderTime[choice] = 25;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 5:
                    {
                        newOrder->orders[choice] = "Culurgiones";
                        newOrder->orderTime[choice] = 25;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    default:
                    {
                        cout << "Invalid input!!" << endl;
                        break;
                    }
                }
            }
            else if (choice == 4)
            {
                cout << "************ Indian Cuisine *************" << endl;
                cout << "1. Biryani:                             " << endl;
                cout << "2. Butter chicken:                      " << endl;
                cout << "3. Chaat:                               " << endl;
                cout << "4. Gulab Jamun:                         " << endl;
                cout << "5. Korma:                               " << endl;
                cout << "*****************************************" << endl
                    << endl;
                cout << "Enter your choice: ";
                cin >> option;

                switch (option)
                    {
                    case 1:
                    {
                        newOrder->orders[choice] = "Biryani";
                        newOrder->orderTime[choice] = 15;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 2:
                    {
                        newOrder->orders[choice] = "Butter chicken";
                        newOrder->orderTime[choice] = 15;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 3:
                    {
                        newOrder->orders[choice] = "Chaat";
                        newOrder->orderTime[choice] = 15;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 4:
                    {
                        newOrder->orders[choice] = "Gulab Jamun";
                        newOrder->orderTime[choice] = 15;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    case 5:
                    {
                        newOrder->orders[choice] = "Korma";
                        newOrder->orderTime[choice] = 15;
                        cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                        break;
                    }
                    default:
                    {
                        cout << "Invalid input!!" << endl;
                        break;
                    }
                }
            }
            //Going back!!
            else if(choice = 5){
                cout<<endl;
                flag = false;

            }
            else{
                cout<<"Invalid Order!!!"<<endl<<endl;
            }
        }

        //Linking linkedlist nodes
        newOrder->next = NULL;
        first = newOrder;
        last = newOrder;
    }

    else {
        //Checking how many orders are in process
        int count = 0;
        OrderList* curr = first;
        while(curr != NULL){
            count++;
            curr = curr->next;
        }
        
        //Checking if no more than four orders are placed
        if(count< 4){
            cout<<endl;
            int choice, option;
            bool flag = true;
            OrderList *newOrder = new OrderList();
            // Customer credentials
            cout << "*********** Ask for Order ***********" << endl;
            cout << "Enter the customer name: "
                << " ";
            cin >> newOrder->name;
            cout << "Enter the customer address: "
                << " ";
            cin >> newOrder->address;
            cout << "Enter the mobile number: "
                << " ";
            cin >> newOrder->phone;
            cout << "Enter the email: "
            << " ";
            cin >> newOrder->email;
            cout<<endl<<endl;
            cout << "************* Order Details: ****************\n";

            while (flag)
            {
                cout << "Enter the order cuisine: \n";
                cout << "0 for Continental: \n";
                cout << "1 for Chinese: \n";
                cout << "2 for Thai: \n";
                cout << "3 for Italian: \n";
                cout << "4 for Indian: \n";
                cout << "5 to go back: \n";
                cout << "Enter your choice: ";
                cin >> choice;            

                if (choice == 0)
                {
                    cout << "************ Continental Cuisine *************" << endl;
                    cout << "1. Muesli Yogurt Parfait:                    " << endl;
                    cout << "2. Southwestern Fried Chicken Strips:        " << endl;
                    cout << "3. Roasted Garlic Chicken Soup:              " << endl;
                    cout << "4. Creamy Chicken Rice Bowl:                 " << endl;
                    cout << "5. Ranch Baked Chicken Brown Rice:           " << endl;
                    cout << "*********************************************" << endl
                        << endl;
                    cout << "Enter your choice: ";
                    cin >> option;

                    switch (option)
                        {
                        case 1:
                        {
                            newOrder->orders[choice] = "Muesli Yogurt Parfait";
                            newOrder->orderTime[choice] = 20;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 2:
                        {
                            newOrder->orders[choice] = "Southwestern Fried Chicken Strips";
                            newOrder->orderTime[choice] = 20;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 3:
                        {
                            newOrder->orders[choice] = "Roasted Garlic Chicken Soup";
                            newOrder->orderTime[choice] = 20;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 4:
                        {
                            newOrder->orders[choice] = "Creamy Chicken Rice Bowl";
                            newOrder->orderTime[choice] = 20;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 5:
                        {
                            newOrder->orders[choice] = "Ranch Baked Chicken Brown Rice";
                            newOrder->orderTime[choice] = 20;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        default:
                        {
                            cout << "Invalid input!!" << endl;
                            break;
                        }
                    }
                }
                else if (choice == 1)
                {
                    cout << "************ Chinese Cuisine *************" << endl;
                    cout << "1. Peking Roasted Duck:                 " << endl;
                    cout << "2. Kung Pao Chicken:                    " << endl;
                    cout << "3. Sweet and Sour Pork:                 " << endl;
                    cout << "4. Dim Sum:                             " << endl;
                    cout << "5. Micronies:                           " << endl;
                    cout << "*****************************************" << endl
                        << endl;
                    cout << "Enter your choice: ";
                    cin >> option;

                    switch (option)
                        {
                        case 1:
                        {
                            newOrder->orders[choice] = "Peking Roasted Duck";
                            newOrder->orderTime[choice] = 25;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 2:
                        {
                            newOrder->orders[choice] = "Kung Pao Chicken";
                            newOrder->orderTime[choice] = 25;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 3:
                        {
                            newOrder->orders[choice] = "Sweet and Sour Pork";
                            newOrder->orderTime[choice] = 25;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 4:
                        {
                            newOrder->orders[choice] = "Dim Sum";
                            newOrder->orderTime[choice] = 25;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 5:
                        {
                            newOrder->orders[choice] = "Micronies";
                            newOrder->orderTime[choice] = 25;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        default:
                        {
                            cout << "Invalid input!!" << endl;
                            break;
                        }
                    }
                }
                else if (choice == 2)
                {
                    cout << "************ Thai Cuisine *************" << endl;
                    cout << "1. Fully loaded Shawarma:             " << endl;
                    cout << "2. Chocolate Treat Waffle:            " << endl;
                    cout << "3. Chicken Roll Paratha:              " << endl;
                    cout << "4. Chicken Cheese Shawarma:           " << endl;
                    cout << "5. Banana Waffle:                     " << endl;
                    cout << "***************************************" << endl
                        << endl;
                    cout << "Enter your choice: ";
                    cin >> option;

                    switch (option)
                        {
                        case 1:
                        {
                            newOrder->orders[choice] = "Fully loaded Shawarma";
                            newOrder->orderTime[choice] = 30;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 2:
                        {
                            newOrder->orders[choice] = "Chocolate Treat Waffle";
                            newOrder->orderTime[choice] = 30;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 3:
                        {
                            newOrder->orders[choice] = "Chicken Roll Paratha";
                            newOrder->orderTime[choice] = 30;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 4:
                        {
                            newOrder->orders[choice] = "Chicken Cheese Shawarma";
                            newOrder->orderTime[choice] = 30;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 5:
                        {
                            newOrder->orders[choice] = "Banana Waffle";
                            newOrder->orderTime[choice] = 30;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        default:
                        {
                            cout << "Invalid input!!" << endl;
                            break;
                        }
                    }
                }
                else if (choice == 3)
                {
                    cout << "************ Italian Cuisine *************" << endl;
                    cout << "1. Insalata Caprese:                    " << endl;
                    cout << "2. Tiramisu:                            " << endl;
                    cout << "3. Caponata:                            " << endl;
                    cout << "4. Vitello Tonnato:                     " << endl;
                    cout << "5. Culurgiones:                         " << endl;
                    cout << "*****************************************" << endl
                        << endl;
                    cout << "Enter your choice: ";
                    cin >> option;

                    switch (option)
                        {
                        case 1:
                        {
                            newOrder->orders[choice] = "Insalata Caprese";
                            newOrder->orderTime[choice] = 25;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 2:
                        {
                            newOrder->orders[choice] = "Tiramisu";
                            newOrder->orderTime[choice] = 25;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 3:
                        {
                            newOrder->orders[choice] = "Caponata";
                            newOrder->orderTime[choice] = 25;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 4:
                        {
                            newOrder->orders[choice] = "Vitello Tonnato";
                            newOrder->orderTime[choice] = 25;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 5:
                        {
                            newOrder->orders[choice] = "Culurgiones";
                            newOrder->orderTime[choice] = 25;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        default:
                        {
                            cout << "Invalid input!!" << endl;
                            break;
                        }
                    }
                }
                else if (choice == 4)
                {
                    cout << "************ Indian Cuisine *************" << endl;
                    cout << "1. Biryani:                             " << endl;
                    cout << "2. Butter chicken:                      " << endl;
                    cout << "3. Chaat:                               " << endl;
                    cout << "4. Gulab Jamun:                         " << endl;
                    cout << "5. Korma:                               " << endl;
                    cout << "*****************************************" << endl
                        << endl;
                    cout << "Enter your choice: ";
                    cin >> option;

                    switch (option)
                        {
                        case 1:
                        {
                            newOrder->orders[choice] = "Biryani";
                            newOrder->orderTime[choice] = 15;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 2:
                        {
                            newOrder->orders[choice] = "Butter chicken";
                            newOrder->orderTime[choice] = 15;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 3:
                        {
                            newOrder->orders[choice] = "Chaat";
                            newOrder->orderTime[choice] = 15;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 4:
                        {
                            newOrder->orders[choice] = "Gulab Jamun";
                            newOrder->orderTime[choice] = 15;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        case 5:
                        {
                            newOrder->orders[choice] = "Korma";
                            newOrder->orderTime[choice] = 15;
                            cout<<newOrder->orders[choice]<<" is ordered successfully"<<endl<<endl;
                            break;
                        }
                        default:
                        {
                            cout<<"Invalid Order!!!"<<endl;
                            break;
                        }
                    }
                }
                //Going back!!
                else if(choice = 5){
                    cout<<endl;
                    flag = false;
                }
                else{
                    cout<<"Invalid Order!!!"<<endl<<endl;
                }
            }

            //Linking linkedlist nodes
            last->next = newOrder;
            newOrder->next = NULL;
            last = newOrder;
        }
        else{
            cout<<"Four orders are allready being prepared!! Please Wait!!";
            cout<<endl<<endl;
        }
    }   
    
}

//Delivering orders of customers
void deliverOrders(){
    OrderList* temp = first;
        if(temp == NULL){
            cout<<"No order placed!!! Place first!!"<<endl;
        }

    while(temp != NULL){
        cout<<"-------------- Your Orders -------------------"<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<"Customer Name:          "<<temp->name<<endl;
        cout<<"Customer Address:       "<<temp->address<<endl;
        cout<<"Customer Phone:         "<<temp->phone<<endl;
        cout<<"Customer Email:         "<<temp->email<<endl;
        cout<<"Customer Order:         ";
        for (int i = 0; i <= 4; i++)
        {   
            if(temp->orders[i]!=""){
                cout<<temp->orders[i]<<", ";
            }
        }

        cout<<endl<<"----------------------------------------------"<<endl;

        //Deleting the delivered order from order list
    }

    cout<<endl<<endl;
}

int main()
{   
    bool flag = true;
    while (flag){
        int option;
        cout << "*********** Favourite Panda ***********" << endl;
        cout << "Enter 1 to order food: "<<endl;
        cout << "Enter 2 to deliver food: "<<endl;
        cout << "Enter 3 to exit: "<<endl;
        cout<<"*****************************************"<<endl;

        cout << "Enter your choice: ";
        cin>>option;

        if(option == 1){
            askForOrder();
        }
        else if(option == 2){
            deliverOrders();
        }
        else if(option == 2){
            flag = false;
        }
        else{
            cout<<"Invalid Input!!"<<endl;
        }
    }

}