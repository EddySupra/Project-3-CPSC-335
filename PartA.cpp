#include <bits/stdc++.h>

void target_subarray(std::string a[], std::string b[]);


int main()
{
    std::string a[] = {"hemetoaklandrialtofullertonmarcolongchinofresnovallejoclovissimithousand"}; 
    std::string b[] = {"clovis", "vallejo", "rialto", "marco"};
    /*std::cout << "Input first array" << std::endl;
    std::for_each(std::begin(a), std::end(a), [](auto& elem) { std::cin >> elem; });
    std::cout << "Input second array" << std::endl;
    std::for_each(std::begin(b), std::end(b), [](auto& elem) { std::cin >> elem; });*/
    target_subarray(a, b);
 


    return 0;
}

void target_subarray(std::string a[], std::string b[])
{
    // Arrays for the answers
    std::size_t a1[4];
    int b1[4];
    
    std::string cities = a[0];
    int cities_length = cities.length();
    
    
    //int end_of = b.end();
    //int number_of_cities = sizeof(b);
    
    //Loop thorugh array with cities we are looking for
    for (int i = 0; i < 4 ; i++)
    {
        //get the city from array and give the string a variable
        std::string city = b[i];
        std::size_t found = cities.find(city);
        if(found != std::string::npos)
        {
            a1[i] = found;
        }
        //std::string::find(cities.begin(), cities.end(), city);
        
    }
    
    for(int i = 0; i < 4; i++)
    {
        std::cout << a1[i];
    }

}
