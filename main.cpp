#include <GL/glut.h>
#include <GL/GL.h>
#include <GL/GLU.h>


#include<windows.h>
#include <GL/glut.h>
#include <cmath>

const int numSegments = 100;
const float circleRadius = 10.0f;
const float circleCenterX = 2 * circleRadius; // Set to the radius to position at the left
const float circleCenterY = 300.0f - 2 * circleRadius; // Set to window height minus the radius to position at the top



void init(void)
{
    glClearColor(0.0, 1.0, 1.0, 1.0); // Set display window colour to white

    glMatrixMode(GL_PROJECTION); // Set projection parameters
    gluOrtho2D(0.0, 300.0, 0.0, 300.0);
}

void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear display window

    //first background below

    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_POLYGON);

    glVertex2i(0, 0);
    glVertex2i(0, 40);

    glVertex2i(300, 40);
    glVertex2i(300, 0);

    glEnd();

    //second  background
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2i(0, 40);
    glVertex2i(300, 40);

    glVertex2i(300, 170);
    glVertex2i(0, 170);

    glEnd();


    glColor3f(1.0, 1.0, 0.0);

    //Draw a Mountain
    glColor3f(0.0, 0.4, 0.1);

    glBegin(GL_TRIANGLES);
    glVertex2i(240, 265);
    glVertex2i(190, 135);
    glVertex2i(295, 135);

    glEnd();

    glColor3f(0.0, 0.4, 0.1);

    glBegin(GL_TRIANGLES);
    glVertex2i(180, 265);
    glVertex2i(220, 135);
    glVertex2i(120, 135);

    glEnd();


    glColor3f(0.4, 0.2, 0.0);
    // Draw an triangle(House roof)
    glBegin(GL_QUADS);

    glVertex2i(158, 150);
    glVertex2i(158, 180);

    glVertex2i(267, 180);

    glVertex2i(267, 150);

    glEnd();

    // Main Body
    glColor3f(1.0, 0.5, 0.0);

    // Draw an rectangle
    glBegin(GL_POLYGON);

    glVertex2i(160, 20);
    glVertex2i(265, 20);

    glVertex2i(265, 125);
    glVertex2i(160, 125);

    glVertex2i(265, 20);
    glVertex2i(265, 150);

    glVertex2i(160, 150);
    glVertex2i(160, 20);


    glEnd();

    glColor3f(1.0, 1.0, 1.0);

    // Draw DOOR
    glBegin(GL_POLYGON);

    glVertex2i(200, 22);
    glVertex2i(222, 90);

    glVertex2i(200, 80);
    glVertex2i(200, 20);

    glVertex2i(222, 22);
    glVertex2i(222, 90);

    glVertex2i(200, 90);
    glVertex2i(200, 50);


    glEnd();

    glColor3f(0.0, 0.0, 0.0);

    // Draw DOOR2
    glBegin(GL_POLYGON);

    glVertex2i(200, 22);
    glVertex2i(217, 60);

    glVertex2i(217, 60);
    glVertex2i(200, 55);

    glVertex2i(215, 30);
    glVertex2i(215, 80);

    glVertex2i(200, 90);
    glVertex2i(200, 28);


    glEnd();

    glColor3f(1.0, 1.0, 1.0);

    // Draw an rectangle(fIRST WINDOW)
    glBegin(GL_QUADS);

    glVertex2i(165, 135);
    glVertex2i(180, 135);

    glVertex2i(165, 115);
    glVertex2i(165, 135);


    glVertex2i(180, 135);
    glVertex2i(165, 115);

    glVertex2i(180, 115);
    glVertex2i(180, 135);



    glEnd();



    glColor3f(0.0, 0.0, 0.0);

    // Draw an lINES AT THE FIRST WINDOW
    glBegin(GL_LINES);

    glVertex2i(170, 135);
    glVertex2i(170, 115);

    glVertex2i(175, 115);
    glVertex2i(175, 135);



    glEnd();



    glColor3f(1.0, 1.0, 1.0);

    // Draw an rectangle(second window)


    glBegin(GL_QUADS);

    glVertex2i(245, 135);
    glVertex2i(260, 135);

    glVertex2i(245, 115);
    glVertex2i(245, 135);


    glVertex2i(260, 135);
    glVertex2i(245, 115);

    glVertex2i(260, 115);
    glVertex2i(260, 135);


    glEnd();




    glColor3f(0.0, 0.0, 0.0);

    //LINE STRIP
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_LINE_LOOP);

    glVertex2i(245, 135);
    glVertex2i(245, 115);
    glVertex2i(260, 115);
    glVertex2i(260, 135);
    glEnd();




    // Draw an lINES AT THE SECOND WINDOW
    glBegin(GL_LINES);


    glVertex2i(250, 135);
    glVertex2i(250, 115);

    glVertex2i(255, 135);
    glVertex2i(255, 115);

    glEnd();


    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_LINE_LOOP);

    glVertex2i(165, 135);
    glVertex2i(165, 115);
    glVertex2i(180, 115);
    glVertex2i(180, 135);
    glEnd();

    //flag tower
    glColor3f(0.5, 0.5, 0.5);

    glBegin(GL_POLYGON);

    glVertex2i(270, 20);
    glVertex2i(278, 20);

    glVertex2i(270, 260);
    glVertex2i(270, 20);

    glVertex2i(278, 20);
    glVertex2i(278, 260);

    glVertex2i(278, 260);
    glVertex2i(270, 260);


    glEnd();

    //flag COLORS
    glColor3f(0.0, 1.0, 0.0);

    glBegin(GL_POLYGON);

    glVertex2i(200, 200);
    glVertex2i(270, 200);

    glVertex2i(270, 260);
    glVertex2i(270, 200);

    glVertex2i(270, 200);
    glVertex2i(270, 260);

    glVertex2i(270, 260);
    glVertex2i(200, 260);


    glEnd();

    //flag COLOR2
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_POLYGON);

    glVertex2i(260, 260);
    glVertex2i(200, 210);

    glVertex2i(270, 250);
    glVertex2i(210, 200);

    glVertex2i(270, 250);
    glVertex2i(270, 260);

    glVertex2i(270, 260);
    glVertex2i(260, 260);

    glVertex2i(200, 200);
    glVertex2i(210, 200);

    glVertex2i(200, 200);
    glVertex2i(200, 210);

    glEnd();



    //DRAW LINE AT THE FLAG 1.
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);


    glVertex2i(260, 260);
    glVertex2i(200, 210);

    glVertex2i(260, 260);
    glVertex2i(255, 260);

    glVertex2i(255, 260);
    glVertex2i(200, 215);

    glVertex2i(200, 215);
    glVertex2i(200, 210);


    glEnd();
    const float circle2Radius = 20.0f;
    const float circle2CenterX = 100.0f;
    const float circle2CenterY = 280.0f;

    glColor3f(0.529f, 0.808f, 0.922f); // Green color
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(circle2CenterX, circle2CenterY);
    for (int i = 0; i <= numSegments; ++i) {
        float theta = 2.0f * 3.1415926f * static_cast<float>(i) / static_cast<float>(numSegments);
        float x = circle2Radius * cosf(theta);
        float y = circle2Radius * sinf(theta);
        glVertex2f(x + circle2CenterX, y + circle2CenterY);
    }
    glEnd();

    const float circle3Radius = 20.0f;
    const float circle3CenterX = 115.0f;
    const float circle3CenterY = 265.0f;

    glColor3f(0.529f, 0.808f, 0.922f); // Blue color
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(circle3CenterX, circle3CenterY);
    for (int i = 0; i <= numSegments; ++i) {
        float theta = 2.0f * 3.1415926f * static_cast<float>(i) / static_cast<float>(numSegments);
        float x = circle3Radius * cosf(theta);
        float y = circle3Radius * sinf(theta);
        glVertex2f(x + circle3CenterX, y + circle3CenterY);
    }
    glEnd();

    //DRAW LINE AT THE FLAG.3
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);


    glVertex2i(270, 250);
    glVertex2i(210, 200);

    glVertex2i(270, 250);
    glVertex2i(270, 245);

    glVertex2i(210, 200);
    glVertex2i(215, 200);

    glVertex2i(270, 245);
    glVertex2i(215, 200);


    glEnd();

    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(270, 200);
    glVertex2i(215, 200);
    glVertex2i(270, 245);

    glEnd();




    const float circle1Radius = 15.0f;
    const float circle1CenterX = 85.0f;
    const float circle1CenterY = 260.0f;

    glColor3f(0.529f, 0.808f, 0.922f); // Red color
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(circle1CenterX, circle1CenterY);
    for (int i = 0; i <= numSegments; ++i) {
        float theta = 2.0f * 3.1415926f * static_cast<float>(i) / static_cast<float>(numSegments);
        float x = circle1Radius * cosf(theta);
        float y = circle1Radius * sinf(theta);
        glVertex2f(x + circle1CenterX, y + circle1CenterY);
    }
    glEnd();




    //draw a tree stem
    glColor3f(0.5, 0.2, 0.0);

    glBegin(GL_POLYGON);

    glVertex2i(25, 30);
    glVertex2i(35, 30);
    glVertex2i(35, 100);
    glVertex2i(30, 102);
    glVertex2i(25, 100);

    glEnd();

    glColor3f(0.5, 0.2, 0.0);

    glBegin(GL_POLYGON);

    glVertex2i(70, 30);
    glVertex2i(75, 30);
    glVertex2i(75, 65);
    glVertex2i(70, 67);
    glVertex2i(70, 100);

    glEnd();


    glColor3f(0.0, 0.4, 0.0); // Changing color for the second set

    //Draw Triangle 1 (Second set)

    glBegin(GL_TRIANGLES);
    glVertex2i(55, 60);
    glVertex2i(90, 60);
    glVertex2i(72, 80);
    glEnd();

    //Draw Triangle 2 (Second set)
    glBegin(GL_TRIANGLES);
    glVertex2i(60, 70);
    glVertex2i(85, 70);
    glVertex2i(72, 85);
    glEnd();

    //Draw Triangle 3 (Second set)
    glBegin(GL_TRIANGLES);
    glVertex2i(63, 78);
    glVertex2i(83, 78);
    glVertex2i(72, 95);
    glEnd();



    glColor3f(1.0, 1.0, 0.0); // Set circle color (blue, for example)
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(circleCenterX, circleCenterY); // Center of the circle

    for (int i = 0; i <= numSegments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(numSegments); // Angle for each segment
        float x = circleRadius * cosf(theta);
        float y = circleRadius * sinf(theta);
        glVertex2f(x + circleCenterX, y + circleCenterY);
    }
    glEnd();

    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_QUADS);
    glVertex2f(144, 20); // (1000, 450) scaled down by 4
    glVertex2f(144, 260);   // (1000, 600) scaled down by 4
    glVertex2f(150, 260);   // (800, 600) scaled down by 4
    glVertex2f(150, 20); // (800, 450) scaled down by 4

    glEnd();

    // Nepali flag triangles
    glLineWidth(2.0); // Set the line width for the border
    glColor3f(0.0, 0.0, 1.0); // Blue color for the border

    // Nepali flag triangles
    glLineWidth(2.0); // Set the line width for the border
    glColor3f(0.0, 0.0, 1.0); // Blue color for the border

    // First triangle
    glBegin(GL_LINE_LOOP);
    glVertex2f(150, 260); // (900, 525) reduced by 4x
    glVertex2f(150, 220);  // (900, 450) reduced by 4x
    glVertex2f(180, 220);
    glEnd();

    glColor3f(0.8, 0.0, 0.0); // Red color for the first triangle
    glBegin(GL_POLYGON);
    glVertex2f(150, 260); // (900, 525) scaled down by 4
    glVertex2f(150, 220);  // (900, 450) scaled down by 4
    glVertex2f(180, 220);
    glEnd();

    // Second triangle (rotated)
    glColor3f(0.0, 0.0, 1.0); // Blue color for the border
    glBegin(GL_LINE_LOOP);
    glVertex2f(150, 220); // (950, 525) scaled down by 4
    glVertex2f(150, 180);  // (950, 450) scaled down by 4
    glVertex2f(180, 180);
    glEnd();

    glColor3f(0.8, 0.0, 0.0); // Red color for the second triangle
    glBegin(GL_POLYGON);
    glVertex2f(150, 220); // (950, 525) scaled down by 4
    glVertex2f(150, 180);  // (950, 450) scaled down by 4
    glVertex2f(180, 180);
    glEnd();


    //Road1

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2i(0, 2);
    glVertex2i(0, 23);

    glVertex2i(300, 23);
    glVertex2i(300, 2);

    glEnd();

    //road 2
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2i(90, 20);
    glVertex2i(125, 20);
    glVertex2i(135, 110);
    glVertex2i(115, 110);


    glEnd();




    //Draw Triangle 1
    glColor3f(0.0, 0.4, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(2, 100);
    glVertex2i(60, 100);
    glVertex2i(30, 150);

    //Draw Triangle 2
    glColor3f(0.0, 0.4, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(11, 130);
    glVertex2i(50, 130);
    glVertex2i(30, 180);

    //Draw Triangle 3
    glColor3f(0.0, 0.4, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(12, 150);
    glVertex2i(48, 150);
    glVertex2i(30, 195);


    glEnd();

    glColor3f(1.0, 0.0, 0.0);

    glBegin(GL_POLYGON);
    glVertex2f(475, 550);  // Adjusted coordinates relative to the window size and position
    glVertex2f(500, 565);  // Adjusted coordinates relative to the window size and position
    glVertex2f(565, 565);  // Adjusted coordinates relative to the window size and position
    glVertex2f(580, 575);  // Adjusted coordinates relative to the window size and position
    glVertex2f(600, 575);  // Adjusted coordinates relative to the window size and position
    glVertex2f(560, 550);  // Adjusted coordinates relative to the window size and position
    glEnd();


    glBegin(GL_QUADS);//car
    glColor3f(0.0, 0.0, 0.75);
    glVertex2f(80, 15);
    glVertex2f(80, 40);
    glVertex2f(120, 40);
    glVertex2f(120, 15);

    glVertex2f(90, 15);
    glVertex2f(90, 60);
    glVertex2f(110, 60);
    glVertex2f(110, 15);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f); // Set color to red
    glBegin(GL_LINE_LOOP); // Draw a circle inside the rectangle
    float radius = 5.0f;
    int segments = 90;
    for (int i = 0; i < segments; ++i) {
        float theta = 2.0f * 3.1415926f * float(i) / float(segments);
        float x = radius * cosf(theta);
        float y = radius * sinf(theta);
        glVertex2f(x + 85.0f, y + 11.0f);
    }
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f); // Set color to green
    glBegin(GL_LINE_LOOP);
    float radius2 = 5.0f;
    int segments2 = 90;
    for (int i = 0; i < segments2; ++i) {
        float theta = 2.0f * 3.1415926f * float(i) / float(segments2);
        float x = radius2 * cosf(theta);
        float y = radius2 * sinf(theta);
        glVertex2f(x + 115.0f, y + 11.0f);
    }
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f); // Set color to blue
    glBegin(GL_TRIANGLE_FAN);
    float radius3 = 6.0f;
    int segments3 = 100;
    for (int i = 0; i <= segments3; ++i) {
        float theta = 2.0f * 3.1415926f * float(i) / float(segments3);
        float x = radius3 * cosf(theta);
        float y = radius3 * sinf(theta);
        glVertex2f(x + 158.0f, y + 232.0f);
    }
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f); // Set color to blue
    glBegin(GL_TRIANGLE_FAN);
    float radius4 = 6.0f;
    int segments4 = 100;
    for (int i = 0; i <= segments3; ++i) {
        float theta = 2.0f * 3.1415926f * float(i) / float(segments3);
        float x = radius4 * cosf(theta);
        float y = radius4 * sinf(theta);
        glVertex2f(x + 158.0f, y + 195.0f);
    }
    glEnd();

    glColor3f(0.8f, 0.0f, 0.0f); // Set color to blue
    glBegin(GL_TRIANGLE_FAN);
    float radius5 = 6.5f;
    int segments5 = 100;
    for (int i = 0; i <= segments3; ++i) {
        float theta = 2.0f * 3.1415926f * float(i) / float(segments3);
        float x = radius5 * cosf(theta);
        float y = radius5 * sinf(theta);
        glVertex2f(x + 158.0f, y + 199.0f);
    }
    glEnd();







    glFlush(); // Process all OpenGL routines

}





int main(int argc, char* argv[])
{
    glutInit(&argc, argv); // Initalise GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode

    glutInitWindowPosition(300, 50); // Set window position
    glutInitWindowSize(1000, 600); // Set window size
    glutCreateWindow("A House"); // Create display window

    init();

    glutDisplayFunc(drawShapes); // Send graphics to display window

    glutMainLoop();// Display everything and wait

    return 0;
}
