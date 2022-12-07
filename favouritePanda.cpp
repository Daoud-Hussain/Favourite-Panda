#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int alternatePaths=2;
// string shortestPath;
vector<vector<int>> shortest_path;
vector<vector<int>> alternative_paths;
string cities[16] = {"H","A","B","C","D","E","F","G", "I" , "J", "K", "L", "M", "N", "O", "P"};
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
void askForOrder(OrderList *newOrder)
{
    //Incase of empty nodes (No orders)
    if(first == NULL){
        int choice, option;
        bool flag = true;
        
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
    int min=9999;
    int count = 0;

    if(temp != NULL){
        cout<<"-------------- Your Orders -------------------"<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<"Customer Name:          "<<temp->name<<endl;
        cout<<"Customer Address:       "<<temp->address<<endl;
        cout<<"Customer Phone:         "<<temp->phone<<endl;
        cout<<"Customer Email:         "<<temp->email<<endl;
        cout<<"Shortest Path : ------------------------"<<endl;
        for(int i=0; i<shortest_path.size(); i++){
            for(int j=0; j<shortest_path[i].size(); j++){
                if(j == shortest_path[i].size()-1){
                    cout<<cities[shortest_path[i][j]]<<" ";
                }
                else{
                    cout<<cities[shortest_path[i][j]]<<"-->";
                }
            }
            cout<<endl;
        }

        cout<<"\nAlternative Paths : ------------------------"<<endl;
        for(int i=0; i<alternative_paths.size(); i++){
            for(int j=0; j<alternative_paths[i].size(); j++){
                if(j == alternative_paths[i].size()-1){
                    cout<<cities[alternative_paths[i][j]]<<" ";
                }
                else{
                    cout<<cities[alternative_paths[i][j]]<<"-->";
                }
            }
            cout<<endl;
        }


        while (count < 4)
        {
            for (int i = 0; i <= 4; i++)
            {   
                //Calculating minimum order time and delivering this order on first priority
                if(temp->orderTime[i] < min){
                    min = i;
                }
            }
            //Delivering order with highest priority (i.e, minimum time taken)
            if(temp->orders[min] != ""){
                cout<<"Customer Order:         "<<temp->orders[min]<<endl;
                cout<<"Order Time Taken:       "<<temp->orderTime[min]<<endl;

                //After printing deleting min value
                temp->orders[min] = "";
                temp->orderTime[min] = 9999;
            }
            count++;
            
        }
                
        cout<<endl<<"----------------------------------------------"<<endl;
        //Deleting the delivered order from order list (Deleting Node From Start)
        OrderList* deleted = first;
        first = first->next;
        deleted->next = NULL;
        delete deleted;
    }
    else{
        cout<<"No order placed!!! Place first!!"<<endl;
    }

    cout<<endl<<endl;
}

//Functions to find paths
//======================================GLOBAL VARIABLES==========================================================
const int INF = 1000;
string dest;
vector<int>gph[16];
int graph[16][16];
int graphtime[16][16];
int visited[16];
int parent[16];
int source;
string start =cities[source];
//================================BASIC IMPLEMENTATION OF GRAPHS==================================================
void add_edge(vector<int>gph[],int u,int v){
    gph[u].push_back(v);
    gph[v].push_back(u);
}
void addEdgeDistance(int v1, int v2, int w){
		graph[v1][v2] = w;
		graph[v2][v1] = w;				
}
void addEdgeTime(int v1, int v2, int w){
		graphtime[v1][v2] = w;
		graphtime[v2][v1] = w;				
}
void display(){
	cout<<"\n------GRAPH------\n";
	for (int i= 0; i<16; i++){
		cout<<"  ";
		for (int j=0; j<16;j++){
				cout<<graph[i][j]<<" ";	
		}
		cout<<"\n";	
	}
	cout<<"-----------------\n";	
}


//======================================ALL EDGES============================================================
void printpath(vector<int>path) //Print Edges
{
    int size = path.size();
    for (int i = 0; i < size; i++)
         if(i==size-1){
            cout << cities[path[i]] <<" ";
        }   
        else{
            cout << cities[path[i]] <<"--->";
        }  
    cout << "\n\n";
}

int isNotVisited(int x, vector<int> path) //Checking if Vertices are visited or not 
{
    int size = path.size();
    for (int i = 0; i < size; i++)
        if (path[i] == x)
            return 0;
    return 1;
}

void findpaths(vector<int> g[], int source, int destination, int v) //Through BFS
{
    queue<vector<int>> q;
    vector<int> path;
    path.push_back(source);
    q.push(path);
    while (!q.empty()) {
        path = q.front();
        q.pop();
        int last = path[path.size() - 1];
        
        if (last == destination)
            if(alternatePaths >= 0){
                // cout<<"hello";
                printpath(path);
                if(shortest_path.empty()){
                    shortest_path.push_back(path);
                }
                else{
                    alternative_paths.push_back(path);
                }
                alternatePaths--;
            }
            else{
                return;
            }      

        for (int i = 0; i < g[last].size(); i++) {
            if (isNotVisited(g[last][i], path)) {
                vector<int> newpath(path);
                newpath.push_back(g[last][i]);
                q.push(newpath);
            }
        }
    }
}
//-----------------------------------------------------------------------------

int main()
{   
    
    
    //Calling code for graphs
    int distance[16];

    //Adding nodes distance with other nodes
	addEdgeDistance(1,2,5);
    addEdgeDistance(1,3,5);
    addEdgeDistance(2,3,4);
    addEdgeDistance(2,4,3);
    addEdgeDistance(3,4,7);
    addEdgeDistance(3,5,7);	
    addEdgeDistance(3,8,8);	
    addEdgeDistance(4,8,11);
    addEdgeDistance(4,13,14);
    addEdgeDistance(4,12,13);
    addEdgeDistance(5,6,4);
    addEdgeDistance(5,8,5);
    addEdgeDistance(6,7,9);
    addEdgeDistance(7,14,12);
    addEdgeDistance(8,9,3);
    addEdgeDistance(9,10,4);
    addEdgeDistance(10,16,8);
    addEdgeDistance(10,14,3);
    addEdgeDistance(11,14,7);
    addEdgeDistance(11,16,4);
    addEdgeDistance(11,12,5);
    addEdgeDistance(12,13,9);
    addEdgeDistance(12,15,4);
    addEdgeDistance(13,15,5);
    addEdgeDistance(13,16,7);
	
    //Adding graph edges
	add_edge(gph,0,5);
	add_edge(gph,0,4);
	add_edge(gph,0,3);
	add_edge(gph,0,8);
	add_edge(gph,1,2);
	add_edge(gph,1,3);
	add_edge(gph,2,3);
	add_edge(gph,2,4);
	add_edge(gph,3,4);
	add_edge(gph,3,5);
	add_edge(gph,4,12);
	add_edge(gph,4,11);
	add_edge(gph,4,10);
	add_edge(gph,5,6);
	add_edge(gph,6,7);
	add_edge(gph,7,13);
	add_edge(gph,8,9);
	add_edge(gph,9,13);
	add_edge(gph,9,15);
	add_edge(gph,10,13);
	add_edge(gph,10,15);
	add_edge(gph,10,11);
	add_edge(gph,11,14);
	add_edge(gph,11,12);
	add_edge(gph,12,14);
	add_edge(gph,12,13);
	add_edge(gph,13,15);

    dest = "A";
	int j;
	for (j=0;j<16;j++){
		if ((cities[j]).compare(dest)==0){
			break;
		}
	}
	    

    bool flag = true;
    int destIndex;
    while (flag){
        int option;
        cout << "*********** Favourite Panda ***********" << endl;
        cout << "Enter 1 to order food: "<<endl;
        cout << "Enter 2 to deliver food: "<<endl;
        cout << "Enter 3 to exit: "<<endl;
        cout<<"*****************************************"<<endl;

        cout << "Enter your choice: ";
        cin>>option;

        OrderList *newOrder = new OrderList();
        if(option == 1){
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
            cout << "Enter your destination: "<<endl;
            cout << "1. For A  | 2. For B "<<endl;
            cout << "3. For C  | 4. For D"<<endl;
            cout << "5. For E  | 6. For F"<<endl;
            cout << "7. For G  | 8. For I"<<endl;
            cout << "9. For J  | 10. For K"<<endl;
            cout << "11. For L | 12. For M"<<endl;
            cout << "13. For N | 14. For O"<<endl;
            cout << "15. For P | Your choice: ";
            cin >> destIndex;
            cout<<endl<<endl;
            

            askForOrder(newOrder);
        }
        else if(option == 2){
            findpaths(gph,source,destIndex,16);
            deliverOrders();
        }
        else if(option == 3){
            flag = false;
        }
        else{
            cout<<"Invalid Input!!"<<endl;
        }
    }


    cout<<endl;
}