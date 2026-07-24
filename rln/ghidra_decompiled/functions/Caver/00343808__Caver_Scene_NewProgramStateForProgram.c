/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00343808
 * Function: Caver::Scene::NewProgramStateForProgram
 * Signature: undefined __cdecl NewProgramStateForProgram(Program * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::NewProgramStateForProgram(Caver::Program const&) */

void Caver::Scene::NewProgramStateForProgram(Program *param_1)

{
  Program *in_x1;
  undefined8 *in_x8;
  
  if (param_1[9] == (Program)0x0) {
    *in_x8 = 0;
    in_x8[1] = 0;
  }
  else {
    ProgramState::CreateChildState();
    if ((ProgramState *)*in_x8 != (ProgramState *)0x0) {
      ProgramState::LoadProgram((ProgramState *)*in_x8,in_x1);
    }
  }
  return;
}


