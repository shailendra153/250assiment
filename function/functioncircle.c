#include <stdio.h>
	
	float  diameter(float radius) 
	{
	    return (2 * radius);
	}
	float circumference(float radius) 
	{
    return (2 * 3.14 * radius);  
}
float area(float radius)
{
    return (3.14 * radius * radius); 
}
	int main() {
	    float radius, dia, circ, are;
	    printf("Enter radius of circle: ");
	    scanf("%f", &radius);
	    
	    dia  = diameter(radius);       
	    circ = circumference(radius);  
	    are = area(radius);    
	    
	    printf("Diameter of the circle = %.2f units\n", dia);
	    printf("Circumference of the circle = %.2f units\n", circ);
	    printf("Area of the circle = %.2f sq. units", are);
	    
	    return 0;
	}


