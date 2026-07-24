/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1b20
 * Function: Caver::ProgramState::RegisterFunctions
 * Signature: undefined __thiscall RegisterFunctions(ProgramState * this, LibFunction * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::RegisterFunctions(Caver::LibFunction const*) */

void __thiscall Caver::ProgramState::RegisterFunctions(ProgramState *this,LibFunction *param_1)

{
  luaL_register(*(lua_State **)this,(char *)0x0,(luaL_Reg *)param_1);
  lua_settop(*(lua_State **)this,-2);
  return;
}


