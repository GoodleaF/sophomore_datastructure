#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Queue_simulation.h"

void main(void) {
	int duration;
	struct Job;
	srand(time(NULL));
	while (current_time < MAX_SIMUL_TIME) {
		printf("\n----- time %d ----- \n", current_time);
		if (is_job_arrived()) {
			insert_job( ,current_time,duration);
		}
		if (is_printer_idle()) {

		}
		else {
			--remaining_time;
		}

		++current_time;
	}

}