////#include<iostream>
////#include<string>
////#include<fstream>
////
////int main() {
////	std::string csv_file = "D://delete//example.csv";
////	std::ofstream file;
////	file.open(csv_file);
////	file << "Detections" << ';' << "Tracks" << std::endl;
////	file.close();
////	std::cin.get();
////	return 0;
////}
////
////
////#include<iostream>
////#include<fstream>   //used for file handling
////#include<string>    //used for strings
////using namespace std;
////
/////*Everytime before running this program delete previously created 'Student_data.csv' file to avoid buffer overflow errors*/
////
////int main()
////{
////	int roll_no;
////	string name, college, class_of_student;
////
////	fstream fout;
////
////	// opening an existing csv file or creating a new csv file
////	fout.open("D:\\delete\\Student_data.csv", ios::out);
////	fout << "Name" << "," << "College" << "," << "Class" << "," << "Roll no" << "\n";
////
////	cout << "Enter details of 5 students=>";
////	for (int i = 1; i <= 2; i++)
////	{
////		cout << "\nName of student " << i << " :";
////		getline(cin, name);
////		cout << "College of student " << i << " :";
////		getline(cin, college);
////		cout << "Class of student " << i << " :";
////		getline(cin, class_of_student);
////		cout << "Roll no of student " << i << " :";
////		cin >> roll_no;
////		cin.ignore();   /* if we use getline fun after cin function then it will skip 1 input. To avoid this we need to use 'cin.ignore()' fun to flush newline out of the buffer*/
////
////		fout << name << "," << college << "," << class_of_student << "," << roll_no << "\n";    // writing data to a csv file
////	}
////	fout.close();   // closing csv file
////
////	fstream fin;
////	string data;
////	cout << "\nCSV file has been successfully created..!!";
////	cout << "\n\nDisplaying the content of CSV file=>\n\n";
////
////	// opening existing csv file in read mode        
////	fin.open("Student_data.csv", ios::in);
////
////	for (int i = 0; i <= 5; i++)
////	{
////		// getline fun will read one entire row of csv file and will store it in string 'data'
////		getline(fin, data);
////		cout << data << "\n";
////	}
////
////	return 0;
////}
//
//
//#include<iostream>
//#include<string>
//#include <mutex>
//#include <fstream>
//#include<vector>
//
//using namespace std;
//
////detections tracks
//
//
//bool writeCsvFile(std::string fileName, std::vector<float> column1, std::vector<float> column2) {
//	//std::lock_guard<std::mutex> csvLock(logMutex);
//	std::fstream file;
//	file.open(fileName, std::ios::out | std::ios::app);
//
//	file << "\"" << column1[0]<<"," << column1[1] << "\",";
//	file << "\""<<column2[0] <<","<< column2[1] << "\" ";
//	file << std::endl;
//	return true;
//
//}
//
//int main() {
//
//	std::string csvFile = "D://delete//logfile3.csv";
//
//	std::fstream file;
//	file.open(csvFile, std::ios::out | std::ios::app);
//	file << "Detections" << "Tracking";
//	file<<std::endl;
//
//	//writeCsvFile(csvFile, "Detections", "Tracks");
//	std::vector<float> point_left;
//	std::vector<float> point_right;
//	for (int i = 1; i < 10; ++i) {
//		for (int j = 0; j < 2; j++) {
//			point_left.push_back(j);
//			point_left.push_back(j + 1);
//			point_right.push_back(j);
//			point_right.push_back(j + 1);
//		}
//
//		//writeCsvFile(csvFile, point_left, point_right);
//
//		file << "\"" << point_left[0] << "," << point_left[1] << "\",";
//		file << "\"" << point_right[0] << "," << point_right[1] << "\" ";
//		file << std::endl;
//	}
//	return 0;
//}