#include <iostream>
using namespace std;
class WebURL{
    private:
        string url,s,a,p,urlCopy;
        int i, ii;
        
    public:
        WebURL(string u){
            url = u;
            urlCopy = u;
        }
        
        //geturl
        string getWebURL(){
            return url;
        }
        //scheme
        string getScheme(){
            i = urlCopy.find(":",0) + 1;//find where ':' is located assuming it is always in the beginning
            s = urlCopy.substr(0,i);
            urlCopy.erase(0,i);
            return s;
        }
        
        string getAuthority(){
            i = urlCopy.find("//",0); // finding where "//" is located in the new string
            ii = urlCopy.find("/", i+2); // finding where the path starts by locating the first '/' after "//"
            //cout << index2<< endl; // test to output the index of index 2 or '/'
            a = urlCopy.substr(i,ii);
            return a;

        }
        
        string getPath(){
            p = urlCopy.erase(i,ii);
            return p;
        }
        
        
};

int main()
{
    //URL: https://example.com/
    //Scheme: https:
    //Authority: //example.com
    //Path: /
    
    WebURL testURL("https://example.com/"); 
    
    
    //: https://www.highline.edu/about-us/
    //Scheme: https:
    //Authority: //www.highline.edu
    //Path: /about-us/

   // WebURL testURL("https://www.highline.edu/about-us/");
    /**/
    cout << "URL: " << testURL.getWebURL();
    cout << "\nScheme: " << testURL.getScheme();
    cout << "\nAuthority: " << testURL.getAuthority();
    cout << "\nPath: " << testURL.getPath();
}

