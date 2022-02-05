/* Abstract Base class and pure virtual function OR Do-nothing function */

#include <iostream>
#include <cstring>
using namespace std;

class RoboMash
{
    protected:
        string title;
        float rating;
    public:
        RoboMash(string s, float r)
        {
            title = s;
            rating = r;
        }
        virtual void display()=0; // do-nothing function --> pure virtual function//

};


class RoboMashVideo : public RoboMash
{
    float videoLength;
    public:
        RoboMashVideo(string s, float r, float vl) : RoboMash(s, r)
        {
            videoLength = vl;
        }
         void display()
        {
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};

class RoboMashText : public RoboMash
{
    int words;
    public:
        RoboMashText(string s, float r, int wc) : RoboMash(s, r)
        {
            words = wc;
        }

        void display()
        {
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Number of words in this text tutorial is: "<<words<<" words"<<endl;
        }
};


int main()
{
    string title;
    float rating, vlen;
    int words;

    //for code with RoboMash Video
    title = "Python tutorial";
    vlen = 4.96;
    rating = 4.86;
    RoboMashVideo PyVideo(title, rating, vlen);
    PyVideo.display();

    //for code with RoboMash Text
    title = "Python tutorial text";
    words = 496;
    rating = 4.56;
    RoboMashText PyText(title, rating, words);
    PyText.display();

    //Calling the values through pointers. Only derived class will be called
    RoboMash* tuts[2];
    tuts[0] = &PyVideo;
    tuts[1] = &PyText;

    tuts[0]->display();
    tuts[1]->display();
    
    return 0;
}

