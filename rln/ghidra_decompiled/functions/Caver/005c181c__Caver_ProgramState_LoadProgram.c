/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c181c
 * Function: Caver::ProgramState::LoadProgram
 * Signature: undefined __thiscall LoadProgram(ProgramState * this, Program * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::LoadProgram(Caver::Program const&) */

void __thiscall Caver::ProgramState::LoadProgram(ProgramState *this,Program *param_1)

{
  Program::LoadIntoState(param_1,*(lua_State **)this);
  return;
}


