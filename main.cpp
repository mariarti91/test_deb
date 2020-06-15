#include <iostream>
#include <thread>
#include <chrono>
#include <csignal>

bool run = true;

void sigint_handler(int){
	std::cout << "SIGINT handler" << std::endl;
	run = false;
}

int main() {
	signal(SIGINT, sigint_handler);
	while (run) {
		std::cout << "Hello, World!" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
	}
	return 0;
}
