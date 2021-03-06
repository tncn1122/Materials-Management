#pragma once
#ifndef CONTENTS_DEF
#define CONTENTS_DEF

#define WD_WIDTH 1200
#define WD_HEIGHT 700
#define MAX_MENU 5
#define DIS_MENUX 20 //khoang cach giua 2 muc menu
#define DIS_MENUY 20
#define OBJ_PER_PAGE 20

char MenuChinh[MAX_MENU+1][30] = {"Materials", "Employees", "Bills", "Statistics", "Help"};
char MenuMater[][30] 		   = {"Add", "Remove", "Adjust", "Materials List"};
char MenuEmp[][30]			   = {"Add", "Remove", "Adjust", "Employees List"};
char MenuBill[][30] 		   = {"Create Bill", "Check Bill"};
char MenuStat[][30]	  		   = {"Bills", "Top Materials"};
char MenuHelp[][30] 		   = {"Guild", "About"};

//thong so
int ViTriMucMenu[MAX_MENU+1]     = {10};
int ViTriMucMenuPhu[5]		     = {0, 42, 84, 126, 168};
int KichThuocMenuPhu[MAX_MENU+1] = {200, 200, 180, 180, 120};
int ViTriKhung[] 			     = {0, 200, 260, 320, 380,440};

// noti
char Success[][50] = {"Added Successfully!", "Remove Successfully!", "Adjust Successfully!", "Save Successfully!"};
char Fail[][50]    = {"Empty Field", "Not Found", "Empty List","Wrong Date!", "Already exists!", 
					  "Employee Not Found!", "Not Enough Material!","Current quantity: ", "Full List!", "Value must not equal 0!"};

//error 
char sameMat[][50] 	  = {"Error: The same  Material's ID already exists!", "Yes", "No","Would you like to Adjust the existing object?"};
char sameEmp[][50]    = {"Error: The same  Employees's ID already exists!", "Yes", "No","Would you like to Adjust the existing object?"};
char lackAmount[][30] = {"Current Quantity" };

//Materials=============
char khungMat[][30] 	= {"Material's Informations", "Add Material", "Exit", "ID", "Name", "Unit", "Quantity", "Confirm"};
char checkMat[][30] 	= {"Material's Informations", "Confirm", "Exit", "ID", "Name", "Unit", "Quantity"};
char danhSachMat[][30] 	= {"STT", "ID", "Name", "Unit", "Quantity"};
char choiceObject[][30] = {"ID", "Materials List", "Employee List", "Check info", "Exit" };
int  sizeDanhSachMat[]	= {10, 50, 100, 50, 20};

//Bill==================
char khungBill[][30]		  = {"Bill's Informations", "Material List", "Exit", "ID", "Date (DD/MM/YYYY)", "Biller's ID", "Type", "Biller"};
char khungListBill[][30]   	  = {"Add Material", "Confirm", "Exit"};
char khungchooseBill[][30] 	  = {"Remove", "Adjust", "Exit"};
char type[][30] 	          = {"N", "X","/"};
char danhSachDetailBill[][30] = {"STT", "ID", "Rate", "VAT", "Quantity"};
char khungDetailBill[][30]    = {"Material's Informations", "Add Material", "Exit", "ID", "Rate (Dong)", "VAT (%)", "Quantity",};
char choiceBillList[][30] 	  = {"ID", "Bill List", "Check info", "Exit"};
int  sizeKhungDate[] 		  = {55, 110, 165, 220, 275};


//Employees============
char khungEmp[][30] 	 = {"Employee's Informations", "Add Employee", "Exit", "ID", "First Name", "Last Name", "Sex"};
char Sex[][30] 			 = {"Male", "Female"};
char khungAdjustEmp[][30]= {"Employee's Informations", "Save", "Exit", "ID", "First Name", "Last Name", "Sex"};
char checkEmp[][30] 	 = {"Material's Informations", "Confirm", "Exit", "ID", "Name", "Unit", "Amount"};
char danhSachEmp[][30]   = {"STT", "ID", "Last Name", "First Name", "Sex", "Nam", "Nu"};
int  sizeDanhSachEmp[] 	 = {10, 50, 100, 50, 20};

//Statistic============
char khungNhapNgay[][30] = {"Statistics of bills in: ", "Check", "Exit", "From date:", "To date:"};
char ngayTopVT[][30]     = {"Top 10 Materials in:", "Check", "Exit", "From date:", "To date:"};
char trangBill[][30] 	 = {"STT", "ID", "Date", "Type", "Last Name", "First Name", "Value"};
char trangTop[][30]		 = {"Rank", "ID", "Name", "Revenue"};
int  sizeTrangBill[]	 = {10, 50, 50, 20, 100, 50, 70};
int  sizeTrangTop[]		 = {10, 50, 50, 70};


#endif
