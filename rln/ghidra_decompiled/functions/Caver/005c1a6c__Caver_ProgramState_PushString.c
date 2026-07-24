/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1a6c
 * Function: Caver::ProgramState::PushString
 * Signature: undefined __thiscall PushString(ProgramState * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::PushString(std::string const&) */

void __thiscall Caver::ProgramState::PushString(ProgramState *this,string *param_1)

{
  lua_pushlstring(*(lua_State **)this,*(char **)param_1,*(ulong *)(*(char **)param_1 + -0x18));
  return;
}


