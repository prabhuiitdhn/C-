////#include<iostream>
////#include<fstream>
////#include<sstream>
////#include<Windows.h>
////#include<filesystem>
////
////using namespace std;
////
////void read_csv() 
////{
////	std::string file_path;
////	file_path = "D:/RadarRoadBoundaryDetection/doc/data/vdy/4149996571.csv";
////	ifstream fin;
////	fin.open(file_path);
////	string line = "";
////	vector<string> all_words;
////	string my_str;
////	int count = 0; //it is for tracking which row of data we are trying to extract
////
////	int yawrate, velocity;
////
////	while (getline(fin, line, '\n')) 
////	{
////		//using the getline(), filepointer, '\n' as delimiter, read the entire row and store it to string variable
////		//Using stringstream, separate the row into words.
////		//Now using getline(), the stringstream pointer and ‘, ‘ as the delimiter, read every word in the row, store it in a string variable and push that variable to a string vector.
////		
////		stringstream strstr(line); //reading the row; used for breaking words
////		string word = "";
////		//read every column data of a row and store into the string variable 'word'
////
////		std::cout << line << std::endl;
////
////		if (count > 0) {
////			while (getline(strstr, word, ';')) {
////				std::cout << word << std::endl;
////			}
////		}
////
////
////		++count;
////		//if (count > 1) {
////		//	while (getline(strstr, word, ';')) {
////		//		//reading the each line and breaking into the words and storuing to vector
////		//		std::cout << word << std::endl;
////		//	}
////		//}
////	}
////
////	fin.close();
////}
////
////int main() {
////	read_csv();
////	return 0;
////}
//
//
///*
//struct of laneResult
//
//
//
//*/
//
//#include<iostream>
//#include<fstream>
//#include<sstream>
//#include<windows.h>
//#include<filesystem>
//
//using namespace std;
//
//void read_csv(std::string filepath) {
//	ifstream fin;
//	int count = 0;
//	fin.open(filepath);
//	std::string line = " ";
//	while (getline(fin, line, '\n'))
//	{
//		stringstream strstr(line);
//		std::string word = " ";
//		std::cout << "Line no 81:" << line << std::endl;
//		std::cout << "Line no 82:" << line[0] << " " << line[1] << " " << line[2] << std::endl;
//		std::cout << "done";
//		if (count > 0) {
//			int innnercount = 0;
//			while (getline(strstr, word, ',')) {
//				//std::cout << "Line no 88:"<<word << std::endl;
//				if (innnercount == 0) {
//					std::cout << "Line no 91:" << word;
//
//				}
//				if (innnercount == 1){
//					std::cout << "Line no 92:" << word;
//				}
//				if (innnercount == 2) {
//					std::cout << "Line no 93:" << word;
//				}
//				++innnercount;
//			}
//		}
//		++count;
//
//	}
//
//}
//
//int main() {
//	//std::string filepath = "D:/RoadBoundaryDetectionLaneTracker/RadarRoadBoundaryDetection/doc/data/laneresults/2191951651.csv";
//	//read_csv(filepath);
//	namespace fs = std::experimental::filesystem;
//
//	std::vector<std::string> path_m_lane_results;
//	//std::string path_lane_result = "D:/RoadBoundaryDetectionLaneTracker/RadarRoadBoundaryDetection/doc/data/laneresults";
//
//	std::string path_lane_result = "//data//laneresults";
//	//this is for keeping all the csv files into the path_m_lane_results
//
//	for (const auto & entry : fs::directory_iterator(path_lane_result)) {
//		path_m_lane_results.push_back(entry.path().string());
//		//std::cout << "Line no 50:"<< path_m_lane_results << std::endl;
//	}
//
//	std::cout << path_m_lane_results.size() << std::endl;
//	std::cout << path_m_lane_results[0] << std::endl;
//
//	return 0;
//
//}