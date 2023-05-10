# include <iostream>
# include <vector>


class patient{
	private:
		// name -> stores the name
		// age -> stores the age
		// Symptomps -> stores the Symptomps
		
		std::string name;
		int age, symptomps;
		
	public:
		// constructor for the patient class
		// n -> name of patient
		// a -> age of patient
		// s -> Symptomps of patient
		patient(std::string n, int a, int s);
		
		// returns the name of the patient
		std::string getName();
		// returns the age of the patient
		int getAge();
		// returns the Symptomps of the patient
		int getSymptomps();
		
		// sets the name for the patient
		// n -> name of the patient
		void setName(std::string n);
		// sets the age of the patient
		// a -> age of the patient
		void setAge(int a);
		// sets the Symptomps of the patient
		// s -> Symptomps of the patient
		void setSymptomps(int s);
};

// Following functions are the initialised versions of the patient class functions: 

patient::patient(std::string n, int a, int s){
	// sets the name, age and Symptomps of patient
	name = n;
	age = a;
	symptomps = s;	
}

std::string patient::getName(){
	// returns the name of patient
	return name;	
}

int patient::getAge(){
	// returns the age of the patient
	return age;	
}

int patient::getSymptomps(){
	// returns the Symptomps of the patient
	return symptomps;	
}

void patient::setName(std::string n){
	// sets the name of the patient
	name = n;	
}

void patient::setAge(int a){
	// sets the age of the patient
	age = a;	
}

void patient::setSymptomps(int s){
	// sets the Symptomps of the patient
	symptomps = s;	
}

// patient class member functions end here

// gets the patient details from user and stores them in vector
int patientDetails(std::vector<patient> &p){
	// variable declaration
	std::string name;
	int age, symp_count;
	
	// asking user for details of patient
	std::cout << "Enter the name of patient: ";
	std::cin >> name;
	std::cout << "Enter the age of him: ";
	std::cin >> age;
	std::cout << "How many symptomps does he have?: ";
	std::cin >> symp_count;
	
	// creating a new patient
	p.push_back(*(new patient(name, age, symp_count)));
	
	// returning the symptomp count of the patient
	return symp_count;
}

// execution starts from here
int main(int argc, char** argv){
	// variable declaration
	std::vector<patient> patients;
	int count, most_common = 0;
	
	// asking for total patient count
	std::cout << "How many patients do you want to give details of?: ";
	std::cin >> count;
	
	// looping for count amount of times
	for(int i = 1; i <= count; i++){
		// choosing which one has the most common symptomps
		most_common = std::max(patientDetails(patients), most_common);
		std::cout << std::endl;	
	}
	
	// iterating through the patients vector
	for(auto i : patients){
		// if that patient has the most symptomps
		if(most_common <= i.getSymptomps()){
			std::cout << i.getName() << " has the most symptomps at " << most_common << " symptomps";
			break;	
		}			
	}
	return 0;
}
