# include <iostream>


// execution starts from here
int main(int argc, char** argv){
	// important camera settings declared
	int depth, iso, wb, brightness;
	
	// asking user for camera config
	std::cout << "Enter the depth in the photo: ";
	std::cin >> depth;
	std::cout << "Enter the ISO value of your camera: ";
	std::cin >> iso;
	std::cout << "Enter the WB value of the photo: ";
	std::cin >> wb;
	std::cout << "Enter the lens brightness: ";
	std::cin >> brightness;
	
	// giving user the photo they asked for
	std::cout << "\nProcessing photo.....\n";
	std::cout << "Successfully clicked your photo with the following parameters!\n";
	std::cout << "Click this link to open your photo: https://youtu.be/dQw4w9WgXcQ";
	return 0;
}
