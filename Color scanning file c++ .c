#include <kipr/botball.h>

int main()
{
    //wait_for_light(0);
    printf("Hello World\n");
    camera_open();
    while (1==1)
    {
        camera_update();
        if (get_object_count(0)==0)
        {
            printf("NO OBJECTS FOUND\n");
        if (analog(2) < 2000)
        {
            mav(0,1000);
            mav(1,500);
        }
        if (analog(2) > 2000)
        {
            mav(0,500);
            mav(1,1000);
        }
        }
        if (get_object_center_x(0,0) > 80)
        {
            printf("OBJECT ON RIGHT\n");
           if (analog(2) < 2000)
        {
            mav(0,1000);
            mav(1,500);
        }
        if (analog(2) > 2000)
        {
            mav(0,500);
            mav(1,1000);
        }
        }
        else
        {
            if (get_object_center_x(0,0) < 80)
            {
                printf("OBJECT ON LEFT\n");
               if (analog(2) < 2000)
        {
            mav(0,1000);
            mav(1,500);
        }
        if (analog(2) > 2000)
        {
            mav(0,500);
            mav(1,1000);
        }
            }
            else
            {
                break;
            }
        }
    }
    return 0;
}
