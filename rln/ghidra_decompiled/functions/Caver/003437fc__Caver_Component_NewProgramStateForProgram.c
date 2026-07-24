/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003437fc
 * Function: Caver::Component::NewProgramStateForProgram
 * Signature: undefined __cdecl NewProgramStateForProgram(Program * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::NewProgramStateForProgram(Caver::Program const&) */

void Caver::Component::NewProgramStateForProgram(Program *param_1)

{
  Scene::NewProgramStateForProgram(*(Program **)(*(long *)(param_1 + 0x28) + 0x20));
  return;
}


