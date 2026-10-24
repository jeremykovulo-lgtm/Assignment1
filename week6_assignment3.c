/*Name: Jeremy Kovulo
  Admission number:BCS-05-0070/2026
    */
#include <stdio.h>

int main(){
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    for(branch = 0; branch < 3; branch++){
        for(floor = 0; floor < 5; floor++){
            for(room = 0; room < 10; room++){
                printf("Branch %d, Floor %d, Room %d (1=occupied, 0=vacant): ", branch + 1, floor + 1, room + 1);
                scanf("%d", &chain[branch][floor][room]);
                if(chain[branch][floor][room] == 1){
                    totalOccupied++;
                }
            }
        }
    }

    printf("\nTotal occupied rooms across all branches = %d\n", totalOccupied);

    return 0;
}