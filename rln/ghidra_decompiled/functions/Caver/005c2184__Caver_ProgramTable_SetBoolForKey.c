/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2184
 * Function: Caver::ProgramTable::SetBoolForKey
 * Signature: undefined __thiscall SetBoolForKey(ProgramTable * this, string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramTable::SetBoolForKey(std::string const&, bool) */

void __thiscall Caver::ProgramTable::SetBoolForKey(ProgramTable *this,string *param_1,bool param_2)

{
  lua_pushlstring(*(lua_State **)this,*(char **)param_1,*(ulong *)(*(char **)param_1 + -0x18));
  lua_pushboolean(*(lua_State **)this,(uint)param_2);
  lua_settable(*(lua_State **)this,*(int *)(this + 8));
  return;
}


