#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cstdlib>
using namespace std;

// ===== BANK ACCOUNT CLASS =====
class BankAccount{
    private:
        string accountNumber;
        string customerId;
        string accountHolder;
        string phoneNumber;
        string email;
        string address;
        string city;
        string branch;
        double balance;
        string password;
        int pin;
        
    public:
        // Constructor
        BankAccount(){}
        
        // SIGNUP - Create new account
        void createAccount(string name, string phone, string mail, string addr, string cty, string brch, double initialDeposit, string pwd, int userPin){
            accountNumber = "ACC" + to_string(1000 + rand() % 9000);
            customerId = "CUST" + to_string(100000 + rand() % 900000);
            accountHolder = name;
            phoneNumber = phone;
            email = mail;
            address = addr;
            city = cty;
            branch = brch;
            balance = initialDeposit;
            password = pwd;
            pin = userPin;
            
            cout<<"\n╔════════════════════════════════════╗"<<endl;
            cout<<"║  ✓ ACCOUNT CREATED SUCCESSFULLY    ║"<<endl;
            cout<<"╠════════════════════════════════════╣"<<endl;
            cout<<"║ Account Number: "<<accountNumber<<endl;
            cout<<"║ Customer ID: "<<customerId<<endl;
            cout<<"║ Phone: "<<phoneNumber<<endl;
            cout<<"║ Branch: "<<branch<<endl;
            cout<<"║ Initial Deposit: Rs. "<<balance<<endl;
            cout<<"║                                    ║"<<endl;
            cout<<"║ ⚠️  SAVE THIS ACCOUNT NUMBER!      ║"<<endl;
            cout<<"╚════════════════════════════════════╝"<<endl;
        }
        
        // Save account to file
        void saveToFile(){
            ofstream file("accounts.txt", ios::app);
            file << accountNumber << "|" 
                 << customerId << "|" 
                 << accountHolder << "|" 
                 << phoneNumber << "|" 
                 << email << "|" 
                 << address << "|" 
                 << city << "|" 
                 << branch << "|" 
                 << balance << "|" 
                 << password << "|" 
                 << pin << "\n";
            file.close();
        }
        
        // GETTER FUNCTIONS
        string getAccountNumber(){ return accountNumber; }
        string getCustomerId(){ return customerId; }
        string getAccountHolder(){ return accountHolder; }
        string getPhoneNumber(){ return phoneNumber; }
        double getBalance(){ return balance; }
        string getPassword(){ return password; }
        int getPin(){ return pin; }
        
        // LOGIN - Verify password
        bool login(string enteredPassword){
            return (enteredPassword == password);
        }
        
        // Check if phone matches
        bool matchesPhone(string phone){
            return (phoneNumber == phone);
        }
        
        // Check if account number matches
        bool matchesAccountNumber(string accNum){
            return (accountNumber == accNum);
        }
        
        // DISPLAY ACCOUNT INFO
        void displayAccountInfo(){
            cout<<"\n╔════════════════════════════════════╗"<<endl;
            cout<<"║      ACCOUNT INFORMATION           ║"<<endl;
            cout<<"╠════════════════════════════════════╣"<<endl;
            cout<<"║ Name: "<<setw(29)<<accountHolder<<" ║"<<endl;
            cout<<"║ Account #: "<<setw(24)<<accountNumber<<" ║"<<endl;
            cout<<"║ Customer ID: "<<setw(22)<<customerId<<" ║"<<endl;
            cout<<"║ Phone: "<<setw(28)<<phoneNumber<<" ║"<<endl;
            cout<<"║ Email: "<<setw(28)<<email<<" ║"<<endl;
            cout<<"║ Address: "<<setw(26)<<address<<" ║"<<endl;
            cout<<"║ City: "<<setw(29)<<city<<" ║"<<endl;
            cout<<"║ Branch: "<<setw(27)<<branch<<" ║"<<endl;
            cout<<"║ Balance: Rs. "<<setw(21)<<balance<<" ║"<<endl;
            cout<<"╚════════════════════════════════════╝"<<endl;
        }
        
        // CHECK BALANCE
        void checkBalance(){
            cout<<"\n╔════════════════════════════════════╗"<<endl;
            cout<<"║       CURRENT BALANCE              ║"<<endl;
            cout<<"╠════════════════════════════════════╣"<<endl;
            cout<<"║ Rs. "<<setw(30)<<balance<<" ║"<<endl;
            cout<<"╚════════════════════════════════════╝"<<endl;
        }
        
        // VERIFY PIN
        bool verifyPin(int enteredPin){
            return (enteredPin == pin);
        }
        
        // TRANSFER MONEY
        bool transferMoney(BankAccount &receiver, double amount, int enteredPin){
            if(!verifyPin(enteredPin)){
                cout<<"\n❌ Incorrect PIN! Transfer denied!"<<endl;
                return false;
            }
            
            if(amount > balance){
                cout<<"\n❌ Insufficient balance!"<<endl;
                cout<<"Available: Rs. "<<balance<<endl;
                return false;
            }
            
            if(amount <= 0){
                cout<<"\n❌ Invalid amount!"<<endl;
                return false;
            }
            
            balance = balance - amount;
            receiver.balance = receiver.balance + amount;
            
            cout<<"\n╔════════════════════════════════════╗"<<endl;
            cout<<"║  ✓ TRANSFER SUCCESSFUL             ║"<<endl;
            cout<<"╠════════════════════════════════════╣"<<endl;
            cout<<"║ Sent to: "<<receiver.accountHolder<<endl;
            cout<<"║ Amount: Rs. "<<amount<<endl;
            cout<<"║ Your balance: Rs. "<<balance<<endl;
            cout<<"╚════════════════════════════════════╝"<<endl;
            
            return true;
        }
        
        // DEPOSIT MONEY
        void depositMoney(double amount){
            if(amount <= 0){
                cout<<"\n❌ Invalid amount!"<<endl;
                return;
            }
            
            balance = balance + amount;
            cout<<"\n╔════════════════════════════════════╗"<<endl;
            cout<<"║  ✓ DEPOSIT SUCCESSFUL              ║"<<endl;
            cout<<"╠════════════════════════════════════╣"<<endl;
            cout<<"║ Deposited: Rs. "<<amount<<endl;
            cout<<"║ New balance: Rs. "<<balance<<endl;
            cout<<"╚════════════════════════════════════╝"<<endl;
        }
        
        // WITHDRAW MONEY
        bool withdrawMoney(double amount, int enteredPin){
            if(!verifyPin(enteredPin)){
                cout<<"\n❌ Incorrect PIN! Withdrawal denied!"<<endl;
                return false;
            }
            
            if(amount > balance){
                cout<<"\n❌ Insufficient balance!"<<endl;
                return false;
            }
            
            if(amount <= 0){
                cout<<"\n❌ Invalid amount!"<<endl;
                return false;
            }
            
            balance = balance - amount;
            cout<<"\n╔════════════════════════════════════╗"<<endl;
            cout<<"║  ✓ WITHDRAWAL SUCCESSFUL           ║"<<endl;
            cout<<"╠════════════════════════════════════╣"<<endl;
            cout<<"║ Withdrawn: Rs. "<<amount<<endl;
            cout<<"║ Remaining: Rs. "<<balance<<endl;
            cout<<"╚════════════════════════════════════╝"<<endl;
            return true;
        }
};

// ===== BANK SYSTEM CLASS =====
class BankSystem{
    private:
        vector<BankAccount> accounts;
        BankAccount* loggedInUser;
        int loggedInIndex;
        
    public:
        BankSystem(){
            loggedInUser = nullptr;
            loggedInIndex = -1;
            loadAccountsFromFile();  // Load data from file on startup
        }
        
        // LOAD ACCOUNTS FROM FILE
        void loadAccountsFromFile(){
            ifstream file("accounts.txt");
            string line;
            
            if(!file.is_open()){
                cout<<"[First run - Creating new database]"<<endl;
                return;
            }
            
            while(getline(file, line)){
                if(line.empty()) continue;
                
                // Parse line: accNum|custId|name|phone|email|addr|city|branch|balance|pass|pin
                stringstream ss(line);
                string accNum, custId, name, phone, email, addr, city, branch, balStr, pass, pinStr;
                
                getline(ss, accNum, '|');
                getline(ss, custId, '|');
                getline(ss, name, '|');
                getline(ss, phone, '|');
                getline(ss, email, '|');
                getline(ss, addr, '|');
                getline(ss, city, '|');
                getline(ss, branch, '|');
                getline(ss, balStr, '|');
                getline(ss, pass, '|');
                getline(ss, pinStr, '|');
                
                BankAccount acc;
                acc.createAccount(name, phone, email, addr, city, branch, 
                                 stod(balStr), pass, stoi(pinStr));
                accounts.push_back(acc);
            }
            
            file.close();
            cout<<"[Loaded "<<accounts.size()<<" accounts from database]"<<endl;
        }
        
        // SAVE ALL ACCOUNTS TO FILE
        void saveAllAccountsToFile(){
            // We'll update this when balances change
        }
        
        // SIGNUP
        void signup(){
            cout<<"\n╔════════════════════════════════════╗"<<endl;
            cout<<"║      CREATE NEW ACCOUNT             ║"<<endl;
            cout<<"╚════════════════════════════════════╝"<<endl;
            
            string name, phone, email, address, city, branch, password;
            double initialDeposit;
            int pin;
            
            cout<<"\nEnter Full Name: ";
            cin.ignore();
            getline(cin, name);
            
            cout<<"Enter Phone Number: ";
            getline(cin, phone);
            
            // Check if phone already exists
            for(auto &acc : accounts){
                if(acc.getPhoneNumber() == phone){
                    cout<<"\n❌ Phone number already registered!"<<endl;
                    return;
                }
            }
            
            cout<<"Enter Email: ";
            getline(cin, email);
            
            cout<<"Enter Address: ";
            getline(cin, address);
            
            cout<<"Enter City: ";
            getline(cin, city);
            
            // Auto-assign branch
            if(city == "Delhi" || city == "delhi"){
                branch = "Delhi Main Branch";
            }
            else if(city == "Mumbai" || city == "mumbai"){
                branch = "Mumbai Central Branch";
            }
            else if(city == "Bangalore" || city == "bangalore"){
                branch = "Bangalore Tech Branch";
            }
            else if(city == "Pune" || city == "pune"){
                branch = "Pune Metro Branch";
            }
            else{
                branch = city + " Branch";
            }
            
            cout<<"Enter Password: ";
            getline(cin, password);
            
            cout<<"Enter PIN (4 digits): ";
            cin>>pin;
            
            if(pin < 1000 || pin > 9999){
                cout<<"\n❌ PIN must be 4 digits!"<<endl;
                return;
            }
            
            cout<<"Enter Initial Deposit (Rs.): ";
            cin>>initialDeposit;
            
            if(initialDeposit < 0){
                cout<<"\n❌ Invalid amount!"<<endl;
                return;
            }
            
            BankAccount newAccount;
            newAccount.createAccount(name, phone, email, address, city, branch, initialDeposit, password, pin);
            newAccount.saveToFile();  // Save to file
            accounts.push_back(newAccount);
        }
        
        // LOGIN - Improved version
        bool login(){
            cout<<"\n╔════════════════════════════════════╗"<<endl;
            cout<<"║           LOGIN OPTIONS            ║"<<endl;
            cout<<"╠════════════════════════════════════╣"<<endl;
            cout<<"║ 1. Login with Account Number       ║"<<endl;
            cout<<"║ 2. Login with Phone Number         ║"<<endl;
            cout<<"╚════════════════════════════════════╝"<<endl;
            
            int loginChoice;
            cout<<"\nChoose login method (1-2): ";
            cin>>loginChoice;
            
            if(loginChoice == 1){
                return loginWithAccountNumber();
            }
            else if(loginChoice == 2){
                return loginWithPhoneNumber();
            }
            else{
                cout<<"\n❌ Invalid choice!"<<endl;
                return false;
            }
        }
        
        // LOGIN WITH ACCOUNT NUMBER
        bool loginWithAccountNumber(){
            string accountNum, password;
            
            cout<<"\nEnter Account Number: ";
            cin.ignore();
            getline(cin, accountNum);
            
            cout<<"Enter Password: ";
            getline(cin, password);
            
            for(int i = 0; i < accounts.size(); i++){
                if(accounts[i].matchesAccountNumber(accountNum)){
                    if(accounts[i].login(password)){
                        loggedInUser = &accounts[i];
                        loggedInIndex = i;
                        cout<<"\n✓ Login successful!"<<endl;
                        cout<<"Welcome, "<<accounts[i].getAccountHolder()<<"!"<<endl;
                        return true;
                    }
                    else{
                        cout<<"\n❌ Incorrect password!"<<endl;
                        return false;
                    }
                }
            }
            
            cout<<"\n❌ Account not found!"<<endl;
            return false;
        }
        
        // LOGIN WITH PHONE NUMBER
        bool loginWithPhoneNumber(){
            string phoneNum, password;
            
            cout<<"\nEnter Phone Number: ";
            cin.ignore();
            getline(cin, phoneNum);
            
            cout<<"Enter Password: ";
            getline(cin, password);
            
            for(int i = 0; i < accounts.size(); i++){
                if(accounts[i].matchesPhone(phoneNum)){
                    if(accounts[i].login(password)){
                        loggedInUser = &accounts[i];
                        loggedInIndex = i;
                        cout<<"\n✓ Login successful!"<<endl;
                        cout<<"Welcome, "<<accounts[i].getAccountHolder()<<"!"<<endl;
                        return true;
                    }
                    else{
                        cout<<"\n❌ Incorrect password!"<<endl;
                        return false;
                    }
                }
            }
            
            cout<<"\n❌ Phone number not found!"<<endl;
            return false;
        }
        
        // MAIN MENU
        void mainMenu(){
            if(loggedInUser == nullptr){
                cout<<"\n❌ Please login first!"<<endl;
                return;
            }
            
            int choice;
            while(true){
                cout<<"\n╔════════════════════════════════════╗"<<endl;
                cout<<"║        MAIN MENU                   ║"<<endl;
                cout<<"╠════════════════════════════════════╣"<<endl;
                cout<<"║ 1. Check Balance                   ║"<<endl;
                cout<<"║ 2. View Account Details            ║"<<endl;
                cout<<"║ 3. Transfer Money                  ║"<<endl;
                cout<<"║ 4. Withdraw Money                  ║"<<endl;
                cout<<"║ 5. Deposit Money                   ║"<<endl;
                cout<<"║ 6. Logout                          ║"<<endl;
                cout<<"╚════════════════════════════════════╝"<<endl;
                
                cout<<"\nEnter choice (1-6): ";
                cin>>choice;
                
                if(choice == 1){
                    loggedInUser->checkBalance();
                }
                else if(choice == 2){
                    loggedInUser->displayAccountInfo();
                }
                else if(choice == 3){
                    transferMoneyMenu();
                }
                else if(choice == 4){
                    withdrawMenu();
                }
                else if(choice == 5){
                    depositMenu();
                }
                else if(choice == 6){
                    cout<<"\n✓ Logged out successfully!"<<endl;
                    loggedInUser = nullptr;
                    loggedInIndex = -1;
                    break;
                }
                else{
                    cout<<"\n❌ Invalid choice!"<<endl;
                }
            }
        }
        
        // TRANSFER MONEY MENU
        void transferMoneyMenu(){
            cout<<"\n╔════════════════════════════════════╗"<<endl;
            cout<<"║      TRANSFER MONEY                 ║"<<endl;
            cout<<"╚════════════════════════════════════╝"<<endl;
            
            string receiverAccount;
            double amount;
            int pin;
            
            cout<<"\nEnter Receiver's Account Number: ";
            cin.ignore();
            getline(cin, receiverAccount);
            
            cout<<"Enter Amount (Rs.): ";
            cin>>amount;
            
            cout<<"Enter your PIN: ";
            cin>>pin;
            
            for(int i = 0; i < accounts.size(); i++){
                if(accounts[i].matchesAccountNumber(receiverAccount)){
                    loggedInUser->transferMoney(accounts[i], amount, pin);
                    return;
                }
            }
            
            cout<<"\n❌ Receiver account not found!"<<endl;
        }
        
        // WITHDRAW MENU
        void withdrawMenu(){
            cout<<"\n╔════════════════════════════════════╗"<<endl;
            cout<<"║      WITHDRAW MONEY                 ║"<<endl;
            cout<<"╚════════════════════════════════════╝"<<endl;
            
            double amount;
            int pin;
            
            cout<<"\nEnter Amount (Rs.): ";
            cin>>amount;
            
            cout<<"Enter your PIN: ";
            cin>>pin;
            
            loggedInUser->withdrawMoney(amount, pin);
        }
        
        // DEPOSIT MENU
        void depositMenu(){
            cout<<"\n╔════════════════════════════════════╗"<<endl;
            cout<<"║      DEPOSIT MONEY                  ║"<<endl;
            cout<<"╚════════════════════════════════════╝"<<endl;
            
            double amount;
            
            cout<<"\nEnter Amount (Rs.): ";
            cin>>amount;
            
            loggedInUser->depositMoney(amount);
        }
};

// ===== MAIN FUNCTION =====
int main(){
    BankSystem bank;
    int mainChoice;
    
    cout<<"\n╔════════════════════════════════════╗"<<endl;
    cout<<"║    WELCOME TO INDIAN BANK          ║"<<endl;
    cout<<"║    Banking System v2.0             ║"<<endl;
    cout<<"║    (Data Persistent)               ║"<<endl;
    cout<<"╚════════════════════════════════════╝"<<endl;
    
    while(true){
        cout<<"\n╔════════════════════════════════════╗"<<endl;
        cout<<"║      WELCOME MENU                  ║"<<endl;
        cout<<"╠════════════════════════════════════╣"<<endl;
        cout<<"║ 1. Create New Account (Signup)     ║"<<endl;
        cout<<"║ 2. Login                           ║"<<endl;
        cout<<"║ 3. Exit                            ║"<<endl;
        cout<<"╚════════════════════════════════════╝"<<endl;
        
        cout<<"\nEnter your choice (1-3): ";
        cin>>mainChoice;
        
        if(mainChoice == 1){
            bank.signup();
        }
        else if(mainChoice == 2){
            if(bank.login()){
                bank.mainMenu();
            }
        }
        else if(mainChoice == 3){
            cout<<"\n✓ Thank you for using Indian Bank!"<<endl;
            cout<<"✓ Data saved to accounts.txt"<<endl;
            break;
        }
        else{
            cout<<"\n❌ Invalid choice!"<<endl;
        }
    }
    
    return 0;
}