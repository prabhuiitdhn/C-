#include <fstream>
#include <filesystem>
#include<iostream>
#include<sstream>
#include<Windows.h>
#include<filesystem>


using namespace std;
namespace fs = std::experimental::filesystem;

int main()
{
	//fs::create_directories("sandbox/a/b");
	//std::ofstream("sandbox/file1.txt");
	//std::ofstream("sandbox/file2.txt");
	std::string path = "data//laneresults";

	std::vector<std::string> m_directory;

	for (const auto& entry : fs::directory_iterator(path)) {
		m_directory.push_back(entry.path().string());
		std::cout << (entry.path()).extension() << '\n';

	}

	std::cout << "The size:" << m_directory.size() << std::endl;
	std::cout << "Index:" << m_directory[0] << std::endl;

	std::string temp = m_directory[0];
	std::string timestamp;
	timestamp = fs::path(temp).stem();

	//fs::remove_all("sandbox");
	std::cin.get();
	return 0;
}

