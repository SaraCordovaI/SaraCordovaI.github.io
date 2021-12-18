
#include <iostream>
using namespace std;

void invalidInput(){
        cout << "Invalid Input!\n";}
    
    
int Day_Month(int x){
    int maxday = x;
    int day;
    cout<<"Enter a number 1-" << maxday <<" for the day of the Month:";
    cin >> day;
    
    while(day < 1 || day > maxday ){
        invalidInput();
        cout<<"Enter a number 1-" << maxday <<" for the day of the Month:";
        cin >> day;
    }
    
    return day;
}

bool isDigits(string s){
    bool bb=true;
    for(int i = 0; i< s.length();++i){
        if(!isdigit(s[i])){
            bb=false;
            break;
            
        }
    }
    return bb;
}






class MetaDataImage{
    private:

        string FileName,ImageType,DateCreated,AuthorName,ApertureSize,ExposureTime;
        double Size;
        int Width,Height,ISOValue;
        bool Flash;
    
    public:
          //String FileName
        void setFileName(string file){
            FileName = file;}
        string getFileName(){
            return FileName;}

          //StringImage Type
        void setImageType(string type){
            ImageType = type;}
        string getImageType(){
            return ImageType;}

          //String Date Created
        void setDateCreated(string Date){
            DateCreated = Date; }
        string getDateCreated(){
            return DateCreated;}

          //Double Size
        void setSize(double size){
            Size = size;}
        double getSize(){
            return Size;}

          //String Author Name
        void setAuthorName(string name){
            AuthorName = name;}
        string getAuthorName(){
            return AuthorName;}

          //Int Image Dimensions
        void setWidth(int w){
            Width = w;}
        void setHeight(int h){
            Height = h;}
        int getWidth(){
            return Width;}
        int getHeight(){
            return Height;}

          //String Aperture Size 
        void setApertureSize(string a){
            ApertureSize = a;}
        string getApertureSize(){
            return ApertureSize;}

          //String Exposure Time
        void setExposureTime(string e_t){
            ExposureTime = e_t;}
        string getExposureTime(){
            return ExposureTime;}

          //Int ISO Value
        void setISOValue(int ISO){
            ISOValue = ISO;}
        int getISOValue(){
            return ISOValue;}

          //Boolean Flash Enabled
        void setFlash(bool f_e){
            Flash = f_e;
        }
        bool getFlash(){
            return Flash;
        }
        
};

void printMetaData(MetaDataImage m){
    cout<<"File Name: "<< m.getFileName();
    cout<<"\nImage Type: "<<m.getImageType()<< " Type";
    cout<<"\nDate Created: "<<m.getDateCreated();
    cout<<"\nImage Size: "<<m.getSize()<<" MB";
    cout<<"\nAuthor Name: "<<m.getAuthorName();
    cout<<"\nImage Dimensions: "<< m.getWidth() << " w * "<< m.getHeight()<< " h";
    cout<<"\nAperture Size: "<<m.getApertureSize();
    cout<<"\nExposure time: "<<m.getExposureTime() <<" Seconds";
    cout<<"\nISO Value:"<<m.getISOValue();
    if(m.getFlash()== 1 ){
        cout<<"\nWas Flash On? YES";}
    else{
        cout<<"\nWas Flash On? NO";}        
    }

int main() {
    //initionalize values
    string s;
    double dd;
    int i;
    bool b,c1=false;
    
    MetaDataImage Image;
    // FileName
    cout<< "Enter the File's Name: "; 
    getline(cin,s);
    Image.setFileName(s);
    
    //Image Type
    cout<< "Enter \"PNG\", \"GIF\", OR \"JPEG\" for Image Type : ";
    getline(cin,s);
    
      // Check if the User's Input is Valid 
    while(s != "PNG" && s!= "GIF" && s!= "JPEG"){
        cout << "Invalid Input!\n";
        cout<< "Enter \"PNG\", \"GIF\", OR \"JPEG\" for Image Type : ";
        getline(cin,s);
    }
    
    Image.setImageType(s);
    
    //Author Name
    cout<< "Enter the Creator's Name: ";
    getline(cin,s);
    Image.setAuthorName(s);
    
      
    
    //Aperture Size
    cout<<"Enter the Aperture Size in \"f/#\" format : ";
    getline(cin,s);
    string ss = s.substr(2,s.length()-1);
    while(s.substr(0,2) != "f/" || true != isDigits(ss)){
        invalidInput();
        cout << "Enter the Aperture Size in \"f/#\" format : ";
        getline(cin,s);
        ss = s.substr(2,s.length()-1);
        //cout<< ss << endl; Test to see the substring without "f/"
    }
    Image.setApertureSize(s);
    
    // Exposure Time
    cout<< "Enter the Exposure Time in \"1/#\" : ";
    getline(cin,s);
    ss = s.substr(2,s.length()-1);
    while(s.substr(0,2) != "1/" || true != isDigits(ss)){
        invalidInput();
        cout << "Enter the Aperture Size in \"1/#\" format : ";
        getline(cin,s);
        ss = s.substr(2,s.length()-1);
        //cout<< ss << endl;// Test to see the substring without "f/"
    }
    Image.setExposureTime(s);
    
    // Date Created
    int m,d,y;
    string dc;
    cout <<"NOW FOR THE DATE THE PHOTO WAS CREATED!\n";
    cout<< "Enter a number 1-12 for the Month: ";
    cin >> m;
    
    while(m >= 13 || m <= 0 ){
        invalidInput();
        cout<< "Enter a number 1-12 for the Month: ";
        cin >> m;
    }
    
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        d=Day_Month(31);
    }
    else if(m==4 || m==6 || m==9 || m == 11){
        d=Day_Month(30);
    }
    else{
        d =Day_Month(28);
    }

    cout << "Enter Year as ####  between 1997- 2021: ";
    cin >> y;
    
    while(y<1997 || y > 2021){
        invalidInput();
        cout << "Enter Year as ####  between 1997- 2021: ";
        cin >>y;
    }
    
    string datecreated = to_string(m) +"/" ;
    datecreated = datecreated + to_string(d) +"/" ;
    datecreated += to_string(y);
    Image.setDateCreated(datecreated);
     
    
    //Size
    cout<< "Enter Image Size: ";
    cin >> i ;
    Image.setSize(i);
    
    // Image Dimensions
    cout<< "Enter the width: ";
    cin>>i;
    Image.setWidth(i);
    
    cout<< "Enter the height: ";
    cin>>i;
    Image.setHeight(i);
    
    //ISO Value
    cout<< "Enter ISO Value: ";
    cin>> i;
     
    //Flash Enabled
    bool ff;
    cout<< "Enter '1' if flash was on, OR '0' if flash was off: ";
    cin >> ff;
    Image.setFlash(ff);
    
    printMetaData(Image);
}

// I compiled my code on 
/*
Enter the File's Name: Photo
Enter "PNG", "GIF", OR "JPEG" for Image Type : PNG
Enter the Creator's Name: Sara
Enter the Aperture Size in "f/#" format : f/dfff
Invalid Input!
Enter the Aperture Size in "f/#" format : jkk3333
Invalid Input!
Enter the Aperture Size in "f/#" format : f/123
Enter the Exposure Time in "1/#" : 23
Invalid Input!
Enter the Aperture Size in "1/#" format : 1/sdd
Invalid Input!
Enter the Aperture Size in "1/#" format : 1/200
NOW FOR THE DATE THE PHOTO WAS CREATED!
Enter a number 1-12 for the Month: 1   
Enter a number 1-31 for the day of the Month:2
Enter Year as ####  between 1997- 2021: 2012
Enter Image Size: 300
Enter the width: 300
Enter the height: 300
Enter ISO Value: 45
Enter '1' if flash was on, OR '0' if flash was off: 1
File Name: Photo
Image Type: PNG Type
Date Created: 1/2/2012
Image Size: 300 MB
Author Name: Sara
Image Dimensions: 300 w * 300 h
Aperture Size: f/123
Exposure time: 1/200 Seconds
ISO Value:-607355240
Was Flash On? YES

*/

/* More code I input and outputted
Enter the File's Name: photo
Enter "PNG", "GIF", OR "JPEG" for Image Type : GIF
Enter the Creator's Name: Sara
Enter the Aperture Size in "f/#" format : f/123
Enter the Exposure Time in "1/#" : 1/1000
NOW FOR THE DATE THE PHOTO WAS CREATED!
Enter a number 1-12 for the Month: 0
Invalid Input!
Enter a number 1-12 for the Month: 35
Invalid Input!
Enter a number 1-12 for the Month: 10
Enter a number 1-31 for the day of the Month:0
Invalid Input!
Enter a number 1-31 for the day of the Month:34
Invalid Input!
Enter a number 1-31 for the day of the Month:20
Enter Year as ####  between 1997- 2021: 1000
Invalid Input!
Enter Year as ####  between 1997- 2021: 3000
Invalid Input!
Enter Year as ####  between 1997- 2021: 2012
Enter Image Size: 300
Enter the width: 600
Enter the height: 700
Enter ISO Value: 900
Enter '1' if flash was on, OR '0' if flash was off: 0
File Name: photo
Image Type: GIF Type
Date Created: 10/20/2012
Image Size: 300 MB
Author Name: Sara
Image Dimensions: 600 w * 700 h
Aperture Size: f/123
Exposure time: 1/1000 Seconds
ISO Value:1948864152
Was Flash On? NO*/

