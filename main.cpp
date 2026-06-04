#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <vector>
#include <cstdlib>

using namespace std;

struct CPUData {
	long long user, nice, system, idle;
};

CPUData getCPUData() {
	ifstream file("/proc/stat");
	string cpu;
	CPUData data;

	file >> cpu >> data.user >> data.nice >> data.system >> data.idle;
	return data;
}

double getCPUUsage() {
	CPUData a = getCPUData();

	this_thread::sleep_for(chrono::milliseconds(500));

	CPUData b = getCPUData();

	long long idleDiff = b.idle - a.idle;
	long long totalA = a.user + a.nice + a.system + a.idle;
	long long totalB = b.user + b.nice + b.system + b.idle;

	long long totalDiff = totalB - totalA;

	return 100.0 * (totalDiff - idleDiff) / totalDiff;
}

string pick(const vector<string>& v) {
	return v[rand() % v.size()];
}

int main() {
	srand(time(nullptr));

	double cpu = getCPUUsage();

	vector<string> low = {
		"Silent processor",
		"Dreaming silicon",
		"A sleepy circuit"
	};

	vector<string> high = {
		"Molten motherboard",
		"Electric hamster",
		"The furious kernel"
	};

	vector<string> middle = {
		"Counts invisible sheep",
		"Forgets the moon's password",
		"Sings jazz to packets",
		"Chases rogue electrons"
	};

	vector<string> end = {
		"Fans await winter",
		"The router becomes moss",
		"Packets learn ballet",
		"Nobody understands"
	};

	cout << "CPU Usage: " << cpu << "%\n\n";

	if (cpu < 50)
		cout << pick(low) << "\n";
	else
		cout << pick(high) << "\n";

	cout << pick(middle) << "\n";
	cout << pick(end) << "\n";
}