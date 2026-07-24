/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1ac0
 * Function: Caver::ProgramState::NewMetatable
 * Signature: undefined __thiscall NewMetatable(ProgramState * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::NewMetatable(std::string const&) */

void __thiscall Caver::ProgramState::NewMetatable(ProgramState *this,string *param_1)

{
  luaL_newmetatable(*(lua_State **)this,*(char **)param_1);
  return;
}


