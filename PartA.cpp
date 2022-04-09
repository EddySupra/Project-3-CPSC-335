#include <bits/stdc++.h>

void target_subarray(std::string a[], std::string b[]);


int main()
{
    std::string a[1];
    std::string b[4];
    std::cout << "Enter the first array" << std::endl;
    std::cin >> a[0];
    std::cout << "Enter each element of the second array seperatly" << std::endl;
    for(int i = 0; i < 4; i++)
    {
         std::cin >> b[i];
    }
   
    target_subarray(a, b);
 


    return 0;
}

void target_subarray(std::string a[], std::string b[])
{
    // Arrays for the answers
    std::size_t a1[4];
    std::string b1[4];
    
    std::map<std::size_t,std::string> first;
    
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
            b1[i] = city;
            first[a1[i]] = b1[i];
        }
        //std::string::find(cities.begin(), cities.end(), city);
        
    }
    std::sort(a1, a1 + 4);
    
   
    
    std::cout << "[ ";
    for(int i = 0; i < 4; i++)
    {
        std::cout << a1[i] << ", ";
    }
    std::cout << "]" << std::endl;
    
    std::cout << "[ ";
    for(int i = 0; i < 4; i++)
    {
        std::cout << first[a1[i]] << ", ";
    }
    std::cout << "]" << std::endl;

}
