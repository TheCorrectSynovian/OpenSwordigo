/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1b58
 * Function: Caver::ProgramState::RegisterLibrary
 * Signature: undefined __thiscall RegisterLibrary(ProgramState * this, string * param_1, LibFunction * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::RegisterLibrary(std::string const&, Caver::LibFunction const*) */

void __thiscall
Caver::ProgramState::RegisterLibrary(ProgramState *this,string *param_1,LibFunction *param_2)

{
  luaL_register(*(lua_State **)this,*(char **)param_1,(luaL_Reg *)param_2);
  lua_settop(*(lua_State **)this,-2);
  return;
}


