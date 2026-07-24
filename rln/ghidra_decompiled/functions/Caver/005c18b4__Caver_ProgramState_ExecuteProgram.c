/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c18b4
 * Function: Caver::ProgramState::ExecuteProgram
 * Signature: undefined __thiscall ExecuteProgram(ProgramState * this, Program * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::ExecuteProgram(Caver::Program const&) */

void __thiscall Caver::ProgramState::ExecuteProgram(ProgramState *this,Program *param_1)

{
  ulong uVar1;
  
  uVar1 = Program::LoadIntoState(param_1,*(lua_State **)this);
  if ((uVar1 & 1) != 0) {
    Execute(this,0);
    return;
  }
  return;
}


