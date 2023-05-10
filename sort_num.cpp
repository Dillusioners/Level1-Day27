# include <iostream>
# include <vector>
# include <algorithm>

// function to print all the contents of a vector
void printVec(std::vector<int> &v, std::string sep){
	// looping through the vector
	for(auto i : v){
		std::cout << i << sep; // printing content	
	}	
}

// execution starts from here
int main(int argc, char** argv){
	// variable declaration
	std::vector<int> vec;
	int count, input;
	
	// asking for total integer count
	std::cout << "How many numbers you want to sort?: ";
	std::cin >> count;
	
	// looping for the given count by user
	for(int i = 1; i <= count; i++){
		// asking for an integer and storing it in the vector
		std::cout << "Enter integer no." << i << ": ";
		std::cin >> input;
		vec.push_back(input);	
	}
	
	// printing list before sorting
	std::cout << "\nList before sorting:\n";
	printVec(vec, " ");
	
	// sorting the list and printing it again
	std::cout << "\n\nList after sorting:\n";
	std::sort(vec.begin(), vec.end());
	printVec(vec, " ");
	
	return 0;
}
