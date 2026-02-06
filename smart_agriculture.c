#include <stdio.h>
#include <unistd.h>   // for sleep()

#define SOIL_ON     40
#define SOIL_OFF    60
#define TDS_LIMIT   500
#define TURB_LIMIT  25

int main()
{
    int soil, turbidity;
    float temperature, humidity, tds;
    int pump = 0;   // 0 = OFF, 1 = ON

    while (1)
    {
        printf("\n--- SMART AGRICULTURE SYSTEM ---\n");

        printf("Enter Soil Moisture (0-100 %%): ");
        scanf("%d", &soil);

        printf("Enter Temperature (C): ");
        scanf("%f", &temperature);

        printf("Enter Humidity (%%): ");
        scanf("%f", &humidity);

        printf("Enter TDS value (ppm): ");
        scanf("%f", &tds);

        printf("Enter Turbidity (NTU): ");
        scanf("%d", &turbidity);

        if (soil < SOIL_ON &&
            tds < TDS_LIMIT &&
            turbidity < TURB_LIMIT)
        {
            pump = 1;
        }
        else
        {
            pump = 0;
        }

        printf("\n--- SYSTEM STATUS ---\n");
        printf("Soil Moisture : %d %%\n", soil);
        printf("Temperature   : %.1f C\n", temperature);
        printf("Humidity      : %.1f %%\n", humidity);
        printf("TDS           : %.1f ppm\n", tds);
        printf("Turbidity     : %d NTU\n", turbidity);

        if (pump)
            printf("Pump Status   : ON (Irrigation Started)\n");
        else
            printf("Pump Status   : OFF (Irrigation Stopped)\n");

        printf("------------------------------\n");

        sleep(3);
    }

    return 0;
}
