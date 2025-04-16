#include<iostream>

int main(){

    // int elephant_count;

    // int lion_count {};

    // int dog_count {10};
    // int cat_count {15};

    // int domesticated_animals {dog_count + cat_count};

    // // int narrowing_conversion {2.9};

    // std::cout << "Elpehant Count :" << elephant_count << std::endl;
    // std::cout << "Lion Count :" << lion_count << std::endl;
    // std::cout << "Dog count :" << dog_count << std::endl;
    // std::cout << "cat_count :" << cat_count << std::endl;
    // std::cout << "Domesticted_animal_count " << domesticated_animals << std::endl;


    // int apple_count(5);
    // int orange_count(10);
    // int fruit_count(apple_count + orange_count);

    // int narrowing_conversions(2.9);

    // std::cout << " Apple count : " << apple_count << std::endl;
    // std::cout << " Orane count : " << orange_count << std::endl;
    // std::cout << " fruit count : " << fruit_count << std::endl;
    // std::cout << " narrowing_conversions : " << narrowing_conversions << std::endl;

    int bike_count  = 2;
    int truck_count  = 7;
    int vehicle_count  = bike_count + truck_count;
    int narrowing_Conversion  = 2.9;

    std::cout << " bike _count: " << bike_count << std::endl;
    std::cout << " truck_count: " << truck_count << std::endl;
    std::cout << " vehicle_count: " << vehicle_count << std::endl;
    std::cout << " narrwoing conversions " << narrowing_Conversion << std::endl;

    std::cout << "SIZE OF int : " << sizeof(int) << std::endl;
    std::cout << "SIZE OF truck : " << sizeof(truck_count) << std::endl;

    return 0;
}