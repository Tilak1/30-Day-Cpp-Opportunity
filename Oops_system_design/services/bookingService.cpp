#include <iostream>

#include <time>
#include <ctime>


#include "bookingService.hpp"
#include "fileIo.hpp"
#include "../entities/train.hpp"

using namespace std; 

template <typename T>; 

void BookingService<T>::book(int entityID,string userID){

    Train t; 

    t.trainId = entityID; 
    t.name = userID; 
    t.source = source; 
    t.destination = destination;
    t.timings = time(nullptr);
    t.seats = {{user}}; 

    saveBookingDetails(T); 

}



    void BookingService<T>::saveBookingDetails(T entityID)
    {
        FileIO file;
        file.saveToFile(entityID);


    }


