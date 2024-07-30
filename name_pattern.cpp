#include <iostream>

using namespace std;

void print_a(int h, int i);
void print_b(int h, int i);
void print_c(int h, int i);
void print_d(int h, int i);
void print_e(int h, int i);
void print_f(int h, int i);
void print_g(int h, int i);
void print_h(int h, int i);
void print_i(int h, int i);
void print_j(int h, int i);
void print_k(int h, int i);
void print_l(int h, int i);
void print_m(int h, int i);
void print_n(int h, int i);
void print_o(int h, int i);
void print_p(int h, int i);
void print_q(int h, int i);
void print_r(int h, int i);
void print_s(int h, int i);
void print_t(int h, int i);
void print_u(int h, int i);
void print_v(int h, int i);
void print_w(int h, int i);
void print_x(int h, int i);
void print_y(int h, int i);
void print_z(int h, int i);

int main(){
  int height = 6;
  for (int i = 0; i < height; i++)
  {
    print_a(height, i);
    cout << "  ";
    print_b(height, i);
    cout << "  ";
    print_c(height, i);
    cout << "  ";
    print_d(height, i);
    cout << "  ";

    cout << endl;
  }

  cout << endl;
  for (int i = 0; i < height; i++)
  {
     print_e(height, i);
    cout << "  ";
    print_f(height, i);
    cout << "  ";
    print_g(height, i);
    cout << "  ";
    print_h(height, i);
    cout << "  ";

    cout << endl;
  }

  cout << endl;
  for (int i = 0; i < height; i++)
  {
    print_i(height, i);
    cout << "  ";
    print_j(height, i);
    cout << "  ";
    print_k(height, i);
    cout << "  ";
    print_l(height, i);
    cout << "  ";

    cout << endl;
  }

  cout << endl;
  for (int i = 0; i < height; i++)
  {
    print_m(height, i);
    cout << "  ";
    print_n(height, i);
    cout << "  ";
    print_o(height, i);
    cout << "  ";
    print_p(height, i);
    cout << "  ";

    cout << endl;
  }

  cout << endl;
  for (int i = 0; i < height; i++)
  {
    print_q(height, i);
    cout << "  ";
    print_r(height, i);
    cout << "  ";
    print_s(height, i);
    cout << "  ";
    print_t(height, i);
    cout << "  ";

    cout << endl;
  }

  cout << endl;
  for (int i = 0; i < height; i++)
  {
    print_u(height, i);
    cout << "  ";
    print_v(height, i);
    cout << "  ";
    print_w(height, i);
    cout << "  ";

    cout << endl;
  }

  cout << endl;

  for (int i = 0; i < height; i++)
  {
    print_x(height, i);
    cout << "  ";
    print_y(height, i);
    cout << "  ";
    print_z(height, i);

    cout << endl;
  }
  

}

void print_a(int h, int i){

  for (int j = 0; j <= h/2; j++)
  {
    if(i == 0 or j == 0 or j == h/2 or i == h/2){
      cout << "* ";
    }
    else{
      cout << "  ";
    }
  }
  
}

void print_b(int h, int i){
    for (int j = 0; j <= h / 2; j++)
    {
      if (i == h/2 or i == 0 or i == h - 1 or j == 0 or j == h/2 )
      {
        cout << "* ";
      }
      else {
        cout << "  ";
      } 
    }
    
  
}

void print_c(int h, int i){

    for (int j = 0; j <= h/2; j++)
    {
      if(i == 0 or i == h - 1 or j == 0){
        cout << "* ";
      }
      else{
        cout << "  ";
      }
    }
  
}

void print_d(int h, int i){

    for (int j = 0; j <= h/2; j++)
    {
      if(i == 0 or i == h-1 or j == h/2 or j == 0){
        cout << "* ";
      }
      else{
        cout << "  ";
      }
    }
  
}

void print_e(int h, int i){

    for (int j = 0; j <= h/2; j++)
    {
      if(i == 0 or i == h - 1 or i == h/2 or j == 0){
        cout << "* ";
      }
      else{
        cout << "  ";
      }
    }

  
}

void print_f(int h, int i){

  for (int j = 0; j <= h/2; j++)
  {
    if(i == 0 or i == h/2 or j == 0){
      cout << "* ";
    }
    else{
      cout << "  ";
    }
  }
  
}

void print_g(int h, int i){
  for (int j = 0; j <= h/2; j++)
  {
    if (i == 0 or   // for top straight bar
        i == h - 1 or   // for bottom straight bar
        j == 0 or     // for left straight bar
        (i >= h/2 and j == h/2) or   //  for right straight bar
        (i == h/2 and j > h/4))    //  for the middle straight bar
    {
      cout << "* ";
    }
    else{
      cout << "  ";
    }
  }
  
}

void print_h(int h, int i){
  for(int j = 0; j <= h/2; j++){
    if(j == 0 or j == h/2 or i == h/2){
      cout << "* ";
    }
    else{
      cout << "  ";
    }
  }
}

void print_i(int h, int i){
  for (int j = 0; j < h; j++)
  {
    int mid = (h%2 == 0) ? h/2 -1 : h/2; 
    if(i == 0 or i == h - 1){
      (j%2 == 0) ? cout << "*" : cout << " ";
    }
    else if(j == mid){
      cout << "*";
    }
    else{
      cout << " ";
    }
  }
  
}

void print_j(int h, int i){
  for (int j = 0; j <= h/2; j++)
  {
    if (i == 0 or   // top straight bar -
        j == h/4 + 1 or  // middle straight bar |
        (i == h-1 and j <= h/4) or   // for bottom straight bar
        (j == 0 and i > h/2)) // for left straight bar |
    {
      cout << "* ";
    }
    else{
      cout << "  ";
    }
  }
  
}

void print_k(int h, int i){
  for (int j = 0; j < h; j++)
  {
    if (j == 0 or // for left straight bar |
        (i + j == h - 1 - i) or   // for upper tilted bar /
        (i - j == h - 1 - i) /* for lower tilted bar  \ */
      )
    {
      cout << "*";
    }
    else{
      cout << " ";
    }
  }
}

void print_l(int h, int i){
  for (int j = 0; j <= h/2; j++)
  {
    if(j == 0 or i == h-1){
      cout << "* ";
    }
    else{
      cout << "  ";
    }
  }
  
}

void print_m(int h, int i){
  for (int j = 0; j < h; j++)
  {
    if (j == 0 or // for left bar of M
        j == h-1 or  // for right bar of M
        (i == j and i <= h/2) or /* for middle left tilted bar \ */
        (i + j == h -1 and i <= h/2))  /* for middle right tilted bar / */
    {
      cout << "*";
    }
    else{
      cout << " ";
    }
  }
}

void print_n(int h, int i){
  for (int j = 0; j < h; j++)
  {
    if (j == 0 or // for left bar |
        j == h-1 or  // for right bar |
        i == j)  /* for middle titlted bar \ */
    {
      cout << "*";
    }
    else{
      cout << " ";
    }
  }
  
}

void print_o(int h, int i){
  for (int j = 0; j <= h/2; j++)
  {
    if (j == 0 or i == 0 or j == h/2 or i == h-1)
    {
      cout << "* ";
    }
    else{
      cout << "  ";
    }
    
  }
  
}

void print_p(int h, int i){
  for (int j = 0; j <= h/2; j++)
  {
    if(i == 0 or j == 0 or i == h/2 or (i <= h/2 and j == h/2)){
      cout << "* ";
    }
    else{
      cout << "  ";
    }
  }
  
}

void print_q(int h, int i){
  for (int j = 0; j < h; j++)
  {
    if(i == 0 or i == h/2 + 1) // for top and bottom straight bar
    { 
      // for adding spaces at each odd location
      (j%2 == 0)? cout << "*" : cout << " ";
    }
    else if ((j == 0 and i <= h/2 + 1) or // for left straight bar |
        (j == h - 1 and i <= h/2 + 1) or  // for right straight bar |
        (i == j and i >= h/2)  /* for tilted bar \ */

      )
    {
      cout << "*";
    }
    else{
      cout << " ";
    }
  }
  
}

void print_r(int h, int i){
  for (int j = 0; j < h; j++)
  {
    // for printing top and middle bars -
    if(i == 0 or i == h/2){
      // in top and middle bar the below line is for adding spaces for odd locations
      (j%2 == 0)? cout << "*" : cout << " ";
    }

    else if (j == 0 or  // for right bar
            (j == h - 1 and i < h/2) or  // left bar |
            (i - j == h - 1 - i)   /* for tilted bar \ */
            )
    {
      cout << "*";
    }
    else{
      cout << " ";
    }
  }
  
  
}

void print_s(int h, int i){
  for (int j = 0; j <= h/2; j++)
  {
    if(i == 0 or i == h-1 or i == h/2 or (j == 0 and i < h/2) or (j == h/2 and i > h/2)){
      cout << "* ";
    }
    else{
      cout << "  ";
    }
  }
  
}

void print_t(int h, int i){
  for (int j = 0; j < h; j++)
  {
    int mid = (h%2 == 0) ? h/2 -1 : h/2; 
    // top bar of T
    if(i == 0){
      // for printing space in the odd location
      (j%2 == 0) ? cout << "*" : cout << " ";
    }
    // for the middle bar |
    else if(j == mid){
      cout << "*";
    }
    else{
      cout << " ";
    }
  }
  
  
}

void print_u(int h, int i){
  for (int j = 0; j <= h/2; j++)
  {
    if(j == 0 or j == h/2 or i == h - 1){
      cout << "* ";
    }
    else{
      cout << "  ";
    }
  }
  
}

void print_v(int h, int i){
  /* printing spaces and left side of v that is \    */
  for (int j = 0; j <= i/2; j++)
  {
    if(i % 2 == 0 and j == i/2){
      cout << "*";
    }
    else{
      cout << " ";
    }
  }

/* printing middle spaces and right side of v that is /    */
  for (int j = 0; j < h - 1 - ((i%2 == 0)? i : i - 1); j++)
  {
    if(i % 2 == 0 and j == h - 2 - ((i%2 == 0)? i : i - 1)){
      cout << "*";
    }
    else{
      cout << " ";
    }
  }
  
  // printing additional spaces so that it occupies space of a rectangle
  for (int j = 0; j < i/2; j++)
  {
    cout << " ";
  }

}

void print_w(int h, int i){
  for (int j = 0; j < h; j++)
  {
    if (j == 0 or // left side bar of w that is |
        j == h-1 or // right side bar of w that is |
        (i + j == h - 1 and i >= h/2) or // left side middle bar that is /
        (i == j and i >= h/2))/* right side middle bar that is  \ */  
    {
      cout << "*";
    }
    // if all condition are flase than we print space
    else{
      cout << " ";
    }
  }
  
}

void print_x(int h, int i){
  for (int j = 0; j < h; j++)
  {
    if (i == j or  /* for tilted \  */
        i + j == h - 1)  // for tilted /
    {
      cout << "*";
    }
    else{
      cout << " ";
    }
  }
  
}

void print_y(int h, int i){
  for (int j = 0; j < h; j++)
  {
    if ((i == j and i <= h/2 -1) or  /* for top left tilted bar \  */
        (i + j == h - 1) )   /* for top right tilted bar /  */
    {
      cout << "*";
    }
    else{
      cout << " ";
    }
  }
  
}

void print_z(int h, int i){
  for (int j = 0; j < h; j++)
  {
    if (i == 0 or // top straight bar 
        i == h-1)  // bottom straight bar
    {
        //for print spaces in the first and last row at odd locations it is just for aesthetics
      (j%2 != 0) ? cout << " " :  cout << "*";
    }

    else if (i + j == h - 1) // for middle tilted bar /
    {
      cout << "*";
    }
    else{
      cout << " ";
    }
  }
}

