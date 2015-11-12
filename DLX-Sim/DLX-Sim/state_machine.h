#ifndef dlx_state_machine_h_
#define dlx_state_machine_h_

#include "dlx_sim.h"

#include "state_handler.h"
#include "register_file_handler.h"

typedef struct
{
	int status;
	int error;

	// Registers
	Registers *registers;

  // States
  State *state;
}StateMachine;

// Function Declerations
StateMachine* CreateStateMachine();
int DestroyStateMachine(StateMachine *);
void RunStateMachine(StateMachine *);

#endif