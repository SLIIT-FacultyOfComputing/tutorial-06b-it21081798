class Student {
  private:
  int studentId;
  char name[20];

  public:
  void assignDetails(int StId,const char *stname);
  void display();
  // private section
  //    int studentId
  //    name <- 20 charcters
  
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
};
