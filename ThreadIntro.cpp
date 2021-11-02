/*
Thread: It helps to run the multiple function at a time.
It takes function pointer in thread.
*/

#include<iostream>
#include<thread>

static bool s_finished = false;

using namespace std::literals::chrono_literals;

void dowork() {

	std::cout << "Started thread ID:" << std::this_thread::get_id() << std::endl;
	//It will print the thread ID; get_id() gives a command to current thread which helps to print the thread_id.
	while (!s_finished) {
		std::cout << "Work in progress: 1" << std::endl;
		//after printing the line in this thread.
		std::this_thread::sleep_for(1s);
		//we can commanding to wait for 1s
		//here this_thread gives the command to current thread.
	}

}
/*
int main() {
//using namespace std::literals::chrono_literals;
//worker is threadObject.
std::thread worker(dowork); //worker here takes "dowork()" function as function pointer (void(*function)())
//after this immmediately kicked a new thread which will start executing the fucntion dowork()
std::cin.get(); //waiting for input to make s_finished = True and finish the worker thread.
s_finished = true;
worker.join();
/*
Actually, here compiler is being instructed that wait for the worker thread to finish whatever it has to finish and then it can join the main thread to execute further(inside the main thread.)
here, thread will wait until it finshes whole function exection.
//2 thread here now running simulatanously main() and worker()

std::cout << "Finished." << std::endl;
std::cin.get();
return 0;
}
*/
