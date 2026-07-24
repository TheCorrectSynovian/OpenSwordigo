/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2124
 * Function: Caver::ProgramTable::BoolForKey
 * Signature: undefined __thiscall BoolForKey(ProgramTable * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramTable::BoolForKey(std::string const&) */

bool __thiscall Caver::ProgramTable::BoolForKey(ProgramTable *this,string *param_1)

{
  int iVar1;
  
  lua_pushlstring(*(lua_State **)this,*(char **)param_1,*(ulong *)(*(char **)param_1 + -0x18));
                    /* catch() { ... } // from try @ 005c20a0 with catch @ 005c214c */
  lua_gettable(*(lua_State **)this,*(int *)(this + 8));
  iVar1 = lua_toboolean(*(lua_State **)this,-1);
  lua_settop(*(lua_State **)this,-2);
  return iVar1 != 0;
}


