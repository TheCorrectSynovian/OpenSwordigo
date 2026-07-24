/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c17c4
 * Function: Caver::ProgramState::ExecuteString
 * Signature: undefined __thiscall ExecuteString(ProgramState * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::ExecuteString(std::string const&) */

void __thiscall Caver::ProgramState::ExecuteString(ProgramState *this,string *param_1)

{
  int iVar1;
  
  luaL_loadstring(*(lua_State **)this,*(char **)param_1);
  *(undefined4 *)(this + 0x48) = 0;
  iVar1 = lua_resume(*(lua_State **)this,0);
  if (iVar1 != 1) {
    this[0x53] = (ProgramState)0x1;
  }
  return;
}


