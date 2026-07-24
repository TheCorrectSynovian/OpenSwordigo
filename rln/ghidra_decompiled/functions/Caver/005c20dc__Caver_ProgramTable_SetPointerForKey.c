/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c20dc
 * Function: Caver::ProgramTable::SetPointerForKey
 * Signature: undefined __thiscall SetPointerForKey(ProgramTable * this, string * param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramTable::SetPointerForKey(std::string const&, void*) */

void __thiscall
Caver::ProgramTable::SetPointerForKey(ProgramTable *this,string *param_1,void *param_2)

{
  lua_pushlstring(*(lua_State **)this,*(char **)param_1,*(ulong *)(*(char **)param_1 + -0x18));
  lua_pushlightuserdata(*(lua_State **)this,param_2);
  lua_settable(*(lua_State **)this,*(int *)(this + 8));
  return;
}


