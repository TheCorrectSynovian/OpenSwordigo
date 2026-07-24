/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c22e0
 * Function: Caver::ProgramTable::SetStringForKey
 * Signature: undefined __thiscall SetStringForKey(ProgramTable * this, string * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramTable::SetStringForKey(std::string const&, std::string const&) */

void __thiscall
Caver::ProgramTable::SetStringForKey(ProgramTable *this,string *param_1,string *param_2)

{
  lua_pushlstring(*(lua_State **)this,*(char **)param_1,*(ulong *)(*(char **)param_1 + -0x18));
  lua_pushstring(*(lua_State **)this,*(char **)param_2);
  lua_settable(*(lua_State **)this,*(int *)(this + 8));
  return;
}


