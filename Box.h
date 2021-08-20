class Box {
    private:
       int length;
       int width;
       int height;
    public:
     void setLength(int blength);
     void setWidth(int bWidth);
     void setHeight(int bHeight);
    
     int getLength();
     int getWidth();
     int getHeigth();
       // write prototypes of setters for length, width and height
       // write prototypes of getters for length, width and height
 
       int calcVolume();
};
