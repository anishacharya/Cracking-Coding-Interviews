/*
223. Rectangle Area
Find the total area covered by two rectilinear rectangles in a 2D plane.
*/ 
class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) 
    {
        int area1=(D-B)*(C-A);
        int area2=(H-F)*(G-E);

        int area=area1+area2;
        
        int maxL=E>A?E:A;  int minR=C<G?C:G;
        
        if(maxL>minR)
            return area;
        
        int minU=D<H?D:H;  int maxD=B>F?B:F;
        
        if(maxD>minU)
            return area;

        return area-(minR-maxL)*(minU-maxD);
    }
};
