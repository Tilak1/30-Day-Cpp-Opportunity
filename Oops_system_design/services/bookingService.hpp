#include <iostream>
using namespace std;

template <typename T>

class BookingService {

private: 

    void saveBookingDetails(T entityID);
    // serialize into Json and deserialize when reading into the userdefined structs 

public: 

    void book(int entityID,string userID); 
    void cancelBooking(int bookingID);
    void printBookingDetails(int bookingID);

}
