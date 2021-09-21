 //Name:
 //Activity name: 
 
 #include<iostream>

     using namespace std;

     int main(){ 

         float score = 0.0;
         float total = 0.0;
         float ave;
         int counter = 1;
         //cout << "ENTER your score " << counter << " or press -1 to exit : ";
        // cin >> score;

    /*
         while(score != -1){ //Sentinel value
             total += score;
             counter++ ;
             cout << "ENTER your score " << counter << " or press -1 to exit : ";
             cin >> score;
         } */

        //the loop to enter score multiple times with sentinel value
         do{ 
             total += score;
             counter++ ;
             cout << "ENTER your score " << (counter-1) << " or press -1 to exit : ";
             cin >> score;
         }while(score != -1);

         //cout << "Total score : " << total << endl;

         //format output
         cout.setf(ios::fixed);
         cout.setf(ios::showpoint);
         cout.precision(2);
         counter--;
         if(counter > 1){ 
             ave = total / (counter-1);
             cout << "Your average based on " << (counter-1) << " test score/s is : " << ave;
        }else{
            cout << "You did not enter score!" << endl;
        }

         /*
         int count_down = 2;
           while (count_down > 0){              2 > 0 TRUE print "Hello" - 1st iteration
                cout << "Hello ";
                count_down  -= 1;               count = count - 1 = 2 - 1 counter = 1
            }
                                                1 > 0 TRUE print "Hello" - 2nd iteration
                                                count_down = 1 - 1 counter = 0

                                                0 > 0 FALSE - END/EXIT the Loop - 3rd iteration
         /*
           float average = 0.0;
           cout << "Input your average : " << endl;
           cin >> average;

           if (average >= 75){   // note the use of a relational operator
                 cout << "You Pass..." << endl; 
                 cout << "Good job! Keep it up." << endl;
           }
            else{
                cout << "You Fail..." << endl;
            }
          /*if  {
                cout << "You Fail..." << endl;
          } */
           return 0;
      }   