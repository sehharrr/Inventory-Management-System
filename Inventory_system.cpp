#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

//class SignInn
//{
//private:
//	const string username, password;
//	static int shopkeeprID;
//public:
//	SignInn() {}
//	SignInn(string username, string password) :username(username), password(password)
//	{
//		shopkeeprID++;
//	}
//};
//int SignInn::shopkeeprID = 0001;

int shopID = 0;
int custumID = 0;

class AdministratorModule
{
private:
	string firstname, lastname;
	string email, registrationdate, gender, bloodgroup, contact, address;
	int product;
	bool billPaid;
	string category;
	string productname;

public:
	AdministratorModule(){} //default krna h
	void inputShopkeeper()
	{
		++shopID;
		cout << "Auto generated ID for shopkeeper is : " << shopID;
		cout << endl << "Enter your First Name : ";
		cin >> firstname;
		cout << "Enter your Last Name : ";
		cin >> lastname;
		cout << "Enter your Mail : ";
		cin >> email;
		cout << "Enter the registration date : ";
		cin >> registrationdate;
		cout << "Enter your gender : ";
		cin.ignore();
		getline(cin, gender);
		cout << "Enter your blood group : ";
		getline(cin, bloodgroup);
		cout << "Enter your contact : ";
		getline(cin, contact);
		cout << "Enter your address : ";
		getline(cin, address);
	}
	void textFileOpen()
	{
		ofstream file("shopkeeper.txt", ios::app);
		if (file.is_open())
		{

		/*		file << "Customer Number : " << shopkeeperID;*/
				file << firstname << " " << lastname << " " << email << " " << registrationdate << " " << gender << " " << bloodgroup << " " << contact << " " << address<<endl;
				cout << endl;
				/*file << firstname << " " << lastname << " " << email << " " << registrationdate << " " << gender << " " << bloodgroup << " " << contact << " " << address;
				cout << endl;*/
			/*	for (int i = 0; i < 3; ++i) {
					file << firstname << " " << lastname << " " << email << " " << registrationdate << " " << gender << " " << bloodgroup << " " << contact << " " << address;
	
				}*/
			file.close();
		}
		else
		{
			cout << "Unable to open file";
		}
	}
	void EditShopkeeper()
	{
		int id;
		// Open the file
		ifstream file("shopkeeper.txt");

		// Check if the file is open
		if (file.is_open())
		{
			string line;
			while (getline(file, line))
			{
				//cout << line;
				cout << "Enter the id to check: ";
				cin >> id;
				if (shopID == id)
				{
					cout << "id found" << endl;
					ofstream file("shopkeeper.txt", ios::app);
					if (file.is_open())
					{
						cout << "Enter details to edit";
						cout << endl << "Enter your First Name : ";
						cin >> firstname;
						cout << "Enter your Last Name : ";
						cin >> lastname;
						cout << "Enter your Mail : ";
						cin >> email;
						cout << "Enter the registration date : ";
						cin >> registrationdate;
						cout << "Enter your gender : ";
						cin.ignore();
						getline(cin, gender);
						cout << "Enter your blood group : ";
						getline(cin, bloodgroup);
						cout << "Enter your contact : ";
						getline(cin, contact);
						cout << "Enter your address : ";
						getline(cin, address);
						file << " " << "Updated Details of : " << shopID << " " << firstname << " " << lastname << " " << email << " " << registrationdate << " " << gender << " " << bloodgroup << " " << contact << " " << address;
						cout << endl;
						//file << firstname << " " << lastname << " " << email << " " << registrationdate << " " << gender << " " << bloodgroup << " " << contact << " " << address;
						//cout << endl;
					}
				}
			}
		}
		//file.close()
	}
	void DeleteShopkeeper()
	{
		cout << "Now id count is :" << shopID;
		cout << endl;
		ifstream file("shopkeeper.txt"); // open file example.txt
		string line;
		if (file.is_open()) 
		{
			int shopID = 0;
			while (getline(file, line)) 
			{
				cout << shopID << " " << line << '\n';
				++shopID;
			}
			file.close();
		}
		else
		{
			cout << "Unable to open the file.";
		}
		int delid;
		cout << "Enter id number to Delete ";
		cin >> delid;
		ifstream inFile("shopkeeper.txt");
		ofstream outFile("shopkeeper.txt");

		if (inFile.is_open())
		{
			string line;

			while (getline(inFile, line)) 
			{
				size_t pos = line.find(delid);

				if (pos ==string::npos) 
				{
					outFile << line << '\n';
				}
			}
			inFile.close();
			outFile.close();
		}
	}


	void inputCustomer()
	{
		++custumID;
		cout << "Auto generated ID for Customer is : " << custumID;
		cout << "Enter your First Name : ";
		cin >> firstname;
		cout << "Enter your Last Name : ";
		cin >> lastname;
		cout << "Enter your Mail : ";
		cin >> email;
		cout << "Enter the registration date : ";
		cin >> registrationdate;
		cout << "Enter your gender : ";
		cin.ignore();
		getline(cin, gender);
		cout << "Enter your blood group : ";
		getline(cin, bloodgroup);
		cout << "Enter your contact : ";
		getline(cin, contact);
		cout << "Enter your address : ";
		getline(cin, address);
		cout << "Enter the number product selected : ";
		cin >> product;
		//cout << "Did u pay the bill? (0/1)";
		
	}
	void textFileOpen1()
	{
		ofstream file("customerr.txt", ios::app);
		if (file.is_open())
		{
			//file << "Customer Number : " << shopkeeperID;
			file << firstname << " " << lastname << " " << email << " " << registrationdate << " " << gender << " " << bloodgroup << " " << contact << " " << address << " " << product;
			file.close();
		}
		else
		{
			cout << "Unable to open file";
		}
	}
	void EditCustomer()
	{
		int cID;
		ifstream file("customerr.txt");
		if (file.is_open())
		{
			string line;
			while (getline(file, line))
			{
				cout << "Enter the id to check: ";
				cin >> cID;
				if (custumID == cID)
				{
					cout << "id found" << endl;
					ofstream file("customerr.txt", ios::app);
					if (file.is_open())
					{
						cout << "Enter your First Name : ";
						cin >> firstname;
						cout << "Enter your Last Name : ";
						cin >> lastname;
						cout << "Enter your Mail : ";
						cin >> email;
						cout << "Enter the registration date : ";
						cin >> registrationdate;
						cout << "Enter your gender : ";
						cin.ignore();
						getline(cin, gender);
						cout << "Enter your blood group : ";
						getline(cin, bloodgroup);
						cout << "Enter your contact : ";
						getline(cin, contact);
						cout << "Enter your address : ";
						getline(cin, address);
						cout << "Enter the number product selected : ";
						cin >> product;
						file << " " << "Updated Details of : " << custumID << " " << firstname << " " << lastname << " " << email << " " << registrationdate << " " << gender << " " << bloodgroup << " " << contact << " " << address << " " << product;
						cout << endl;
					}
				}
			}
		}
	}




	void newproduct()
	{
		//count rehta h abhi 
		int sportsid = 10001;
		int garmentsid = 20003;
		int Eatablesid = 30004;
		int medicineid = 40005;
		int fashionid = 50006;
		cout << "Enter the category/type of product : ";
		cout << endl << "1. Sports" << endl << "2. Garments" << endl << "3. Eatables" << endl << "4. Medicines" << endl << "5. Fashion" << endl;
		cin >> category;
		if (category == "Sports" || category == "sports")
		{
			cout << endl << "We have 5 things in sports category!" << endl;
			cout << "1.Bat\n2.Ball\n3.FootBall\n4.Gloves\n5.Wickets\n";
			cout << "Enter what sports good u want ";
			cin >> productname;
		}
		else if (category == "Garments") 
		{
			cout << endl << "We have 3 types of Garments!\n";
			cout << "\n1.Boxer\n2.West\n3.UnderPants\n";
			cout << "Enter Garment type";
			cin >> productname;
		}
		else if (category == "Eatables")
		{
			cout << "\nWe have 4 Eatable items!\n";
			cout << "\nFrozenProducts\nFreshFruits\nDryFruits\nVegetables";
			cout << "Enter your Eatable";
			cin >> productname;
		}
		else if (category == "Medicine")
		{
			cout << "\nWe have 3 types of Medicine in stock!\n";
			cout << "\nLiverMedicine\nHeartMedicine\nKidenyMedicine\n";
			cout << "Enter Medicine type";
			cin >> productname;
		}
		else if (category == "Fashion")
		{
			cout << "\nWe have Eastern and Western clothes!\n";
			cout << "\nEasteren\nWesteren\n";
			cout << "Enter Fashion type";
			cin >> productname;
		}
	}
	void textFileOpen2()
	{
		ofstream file("products.txt", ios::app);
		if (file.is_open())
		{
			//file << "Customer Number : " << shopkeeperID;
			file << category << setw(10) << productname;
			file.close();
		}
	}
	void EditProduct()
	{
		int std_num;
		ifstream file("products.txt");
		if (file.is_open())
		{
			string line;
			while (getline(file, line))
			{
				cout << "\nSTD NUMBER OF\nSports:100\nGarments:200\nEatables:300\nMedicine:400\nFashion:500\n";
				cout << endl << "Enter the std_number to check!" << endl;
				cin >> std_num;
				ofstream file("products.txt", ios::app);
				if (std_num == 100 && file.is_open())
				{
					cout << "\nYou have selected sports category to edit!\n";
					cout << "\nEnter the product u want to replace from given Choices : \n1.Bat\n2.Ball\n3.FootBall\n4.Gloves\n5.Wickets\n";
					cin >> productname;
					file << "   " << "UPDATED PRODUCT : " << setw(5) << productname;
				}
				else if (std_num == 200 && file.is_open())
				{
					cout << "\nYou have selected Garments category to edit!\n";
					cout << "Enter what garments u want to replace from given Choices : \n1.Boxer\n2.West\n3.UnderPants\n";
					cin >> productname;
					file << "   " << "UPDATED PRODUCT : " << setw(5) << productname;
				}
				else if (std_num == 300 && file.is_open())
				{
					cout << "\nYou have selected Eatable category to edit!\n";
					cout << "Enter what Eatables u want to replace from given Choices : \nFrozenProducts\nFreshFruits\nDryFruits\nVegetables\n";
					cin >> productname;
					file << "   " << "UPDATED PRODUCT : " << setw(5) << productname;
				}
				else if (std_num == 400 && file.is_open())
				{
					cout << "\nYou have selected the Medicine category to edit!\n";
					cout << "Enter what Medicines u want to replace from given Choices : \nLiverMedicine\nHeartMedicine\nKidenyMedicine\n";
					cin >> productname;
					file << "   " << "UPDATED PRODUCT : " << setw(5) << productname;
				}
				else if (std_num == 500 && file.is_open())
				{
					cout << "\nYou have selected the Fashion category to edit!\n";
					cout << "Enter what type of Fashion u want Choices : \nEasteren\nWesteren\n";
					cin >> productname;
					file << "   " << "UPDATED PRODUCT : " << setw(5) << productname;
				}
				
			}
		}
	}	
};


class Shopkeeper 
{
	AdministratorModule obj11;
public:
	Shopkeeper() {}
	void addproduct()
	{
		obj11.newproduct();
		obj11.textFileOpen2();
	}
	void editproduct() 
	{
		obj11.EditProduct();
	}
	void registration()
	{
		obj11.inputShopkeeper();
		obj11.textFileOpen();
    }

};
class Customer
{
	AdministratorModule obj11;
public:
	string cart;
	void registration()
	{
		obj11.inputShopkeeper();
		obj11.textFileOpen();
	}
	void purchaseProduct()
	{
		int price = 50;
		int bats = 5;
		int balls = 5;

		int wickets = 5;

		int tshirts = 5;

		int jeans = 5;

		int pringles = 5;

		int ketchup = 5;

		int brufen = 5;

		int panadol = 5;

		int lipStick = 5;

		int hairBands = 5;


		bool end = false;
		while (!end)
		{
			int option;
			cout << "CHOOSE YOUR CATEGORY FROM THE STOCK: " << endl;
			cout << "1. Sports" << endl;
			cout << "2. Garments" << endl;
			cout << "3. Eatables" << endl;
			cout << "4. Medicines" << endl;
			cout << "5. Fashion" << endl;
			cin >> option;
			switch (option)
			{
			case 1:
				int subOption;
				cout << "CHOOSE YOUR PRODUCT FROM THE STOCK: " << endl;
				cout << "1. Bats (AVAILABLE: " << bats << ")(PRICE: " << price << ")" << endl;
				cout << "2. Balls (AVAILABLE: " << balls << ")(PRICE: " << price << ")" << endl;
				cout << "3. Wickets(AVAILABLE: " << wickets << ")(PRICE: " << price << ")" << endl;
				cin >> subOption;
				if (subOption == 1 && bats > 0)
				{
					bats--;
					addToCart("Bats", "100");

				}
				else if (subOption == 2 && balls > 0)
				{
					balls--;
					addToCart("Balls", "100");
				}
				else if (subOption == 3 && wickets > 0)
				{
					wickets--;
					addToCart("Wickets", "100");
				}
				else
				{
					cout << "INVALID OPTION, ENTER AGAIN!";
					cin >> subOption;
				}
				break;

			case 2:
				cout << "CHOOSE YOUR PRODUCT FROM THE STOCK: " << endl;
				cout << "1. tshirts(AVAILABLE: " << tshirts << ")(PRICE: " << price << ")" << endl;
				cout << "2. jeans(AVAILABLE: " << jeans << ")(PRICE: " << price << ")" << endl;
				cin >> subOption;
				if (subOption == 1 && tshirts > 0)
				{
					tshirts--;
					addToCart("Tshirts", "100");
				}
				else if (subOption == 2 && jeans > 0)
				{
					jeans--;
					addToCart("Jeans", "100");
				}
				else
				{
					cout << "INVALID OPTION, ENTER AGAIN!";
					cin >> subOption;
				}
				break;

			case 3:
				cout << "CHOOSE YOUR PRODUCT FROM THE STOCK: " << endl;
				cout << "1. Pringles(AVAILABLE: " << pringles << ")(PRICE: " << price << ")" << endl;
				cout << "2. Ketchup(AVAILABLE: " << ketchup << ")(PRICE: " << price << ")" << endl;
				cin >> subOption;
				if (subOption == 1 && pringles > 0)
				{
					pringles--;
					addToCart("Pringles", "100");
				}
				else if (subOption == 2 && ketchup > 0)
				{
					ketchup--;
					addToCart("Ketchup", "100");
				}
				else
				{
					cout << "INVALID OPTION, ENTER AGAIN!";
					cin >> subOption;
				}
				break;

			case 4:
				cout << "CHOOSE YOUR PRODUCT FROM THE STOCK: " << endl;
				cout << "1. Brufen(AVAILABLE: " << brufen << ")(PRICE: " << price << ")" << endl;
				cout << "2. Panadol(AVAILABLE: " << panadol << ")(PRICE: " << price << ")" << endl;
				cin >> subOption;
				if (subOption == 1 && brufen > 0)
				{
					brufen--;
					addToCart("Brufen", "100");
				}
				else if (subOption == 2 && panadol > 0)
				{
					panadol--;
					addToCart("Panadol", "100");
				}
				else
				{
					cout << "INVALID OPTION, ENTER AGAIN!";
					cin >> subOption;
				}
				break;

			case 5:
				cout << "CHOOSE YOUR PRODUCT FROM THE STOCK: " << endl;
				cout << "1. Lipstick(AVAILABLE: " << lipStick << ")(PRICE: " << price << ")" << endl;
				cout << "2. Hair Bands(AVAILABLE: " << hairBands << ")(PRICE: " << price << ")" << endl;
				cin >> subOption;
				if (subOption == 1 && lipStick > 0)
				{
					lipStick--;
					addToCart("Lipstick", "100");
				}
				else if (subOption == 2 && hairBands > 0)
				{
					hairBands--;
					addToCart("Hair Bands", "100");
				}
				else
				{
					cout << "INVALID OPTION, ENTER AGAIN!";
					cin >> subOption;
				}
				break;

			default:
				cout << "INVALID OPTION, ENTER AGAIN!\n";
				break;
			}

			cout << "Do you want to continue shopping? (N to exit): ";
			char choice;
			cin >> choice;
			if (choice == 'N' || choice == 'n')
			{
				end = true;
			}
			else
			{
				end != true;
			}

		}

		cout << "Items added to cart!!!" << endl;
	}
	void saveCartToFile()
	{
		ofstream file("prod.txt", ios::app);
		if (file.is_open()) {
			file << cart << " ";
			file.close();
			cout << "Cart items saved.\n";
		}
		else {
			cout << "Error: Unable to open cart.txt for writing.\n";
		}
	}

	void addToCart(const string& product, const string& price) {
		if (!cart.empty()) {
			cart += "\n";
		}
		cart += product + "," + price;
		saveCartToFile();
	}
	bool checkout() {
		// Calculate total amount
		int totalAmount = 100;
		string product, price;

		// Check available cash
		double availableCash;
		cout << "Enter your available cash: ";
		cin >> availableCash;

		if (totalAmount > availableCash) {
			cout << "Not enough cash available for checkout.\n";
			return false;
		}
		else
		{
			cout << "proceed to checkout!";
			cout << endl;
		}
		string shipmentAddress;
		cout << "Enter your shipment address: ";
		cin >> shipmentAddress;
		cout << "Thank you for shopping!\n";
		cout << "Your purchased items:\n";
		cout << cart << endl;

		return true;
	}
};

int main()
{
	string shopkeeper_user = "shopu";
	string shopkeeper_password = "shopp";
	string customer_user = "customu";
	string customer_password = "customp";
	int num;
	string password, username;
oper:cout << "Enter the option u want.";
	cout << endl << "Press 1 for Admin.";
	cout << endl << "Press 2 for Shopkeeper.";
	cout << endl << "Press 3 for Customer." << endl;
	cin >> num;
	if (num == 1) 
	{
		AdministratorModule obj;
		cout << "Enter your username and password : " << endl;
		cin >> username >> password;
		cout << endl;
		const char* filename = "pass.txt";
		ifstream fileStream(filename);
		if (!fileStream.is_open())
		{
			cout << "Error opening file: " << filename << endl;
			return 1;
		}
		string line;
		if (getline(fileStream, line))
		{
			if (line == username)//&& line == password)
			{
				cout << "Your password and username is valid.";
				cout << endl;
				//cout << line << std::endl;
				while (true)
				{
					cout << endl;
					cout << "Press 1 to add shopkeeper." << endl;
					cout << "Press 2 to add customer." << endl;
					cout << "Press 3 to add product." << endl;
					cout << "Press 4 to edit shopkeeper details." << endl;
					cout << "Press 5 to edit Customer details." << endl;
					cout << "Press 6 to edit product details." << endl;
					cout << "Press 7 to delete shopkeeper details." << endl;
					cout << "Press 8 to go to MAIN MENUE.";
					cout << endl;
					int n;
					cin >> n;
					switch (n)
					{
					case 1:
						obj.inputShopkeeper();
						obj.textFileOpen();
						break;
					case 2:
						obj.inputCustomer();
						obj.textFileOpen1();
						break;
					case 3:
						obj.newproduct();
						obj.textFileOpen2();
						break;
					case 4:
						obj.EditShopkeeper();
						break;
					case 5:
						obj.EditCustomer();
						break;
					case 6:
						obj.EditProduct();
						break;
					case 7:
						obj.DeleteShopkeeper();
						break;
					case 8:
						goto oper;
						break;
					}

				}
			}
		}
	}
	 else if(num==2)
	{
		Shopkeeper obj1;
		int choice1;
		cout << "Enter your username and password : " << endl;
		cin >> username >> password;
		if (username == shopkeeper_user && password == shopkeeper_password) {
			cout << "Your Username and Password is valid " << endl;
			cout << "1.Registration "<<endl;
			cout << "2.Add product   " << endl;
			cout << "3.Edit Product" << endl;
			cout << "4.Exit " << endl;
			cout << "Enter Your chooice: ";
			cin >> choice1;
			if (choice1 == 1) 
			{
				obj1.registration();
				cout << "Succesfully registered!";
			}
			else if (choice1 == 2) 
			{
				obj1.addproduct();

			}
			else if (choice1 == 3)
			{
				obj1.editproduct();
			}
			else if(choice1 ==4){
				cout << "Thanks for using Sofware ";
			}
		}
		else {
			cout << "Username or Pass is invalid ";
		}
		
	}
	 else if (num == 3) {
		Customer obj2;
		int choice2;
		cout << "Enter your username and password : " << endl;
		cin >> username >> password;
		if (username == customer_user && password == customer_password) {
			cout << "Your Username and Password is valid " << endl;
			cout << "1.Registration " << endl;
			cout << "2.Purchase a product " << endl;
			cout << "3.Add to cart " << endl;
			cout << "4.CheckOut" << endl;
			cout << "Enter Your chooice: ";
			cin >> choice2;
			if (choice2 == 1)
			{
				obj2.registration();
				cout << "Succesfully registered!";
			}
			else if (choice2 == 2) 
			{
				obj2.purchaseProduct();
				obj2.saveCartToFile();

			}
			else if (choice2 == 3) 
			{
				
				//obj2.addToCart();

			}
			else if (choice2 == 4) {
				obj2.checkout();

			}
			else if (choice2 == 5) {
				cout << "Thanks for using Sostware ";

			}

		}
	}
}

