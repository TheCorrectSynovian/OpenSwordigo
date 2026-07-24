/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2328
 * Function: Caver::ProgramTable::IntForKey
 * Signature: undefined __thiscall IntForKey(ProgramTable * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramTable::IntForKey(std::string const&) */

undefined4 __thiscall Caver::ProgramTable::IntForKey(ProgramTable *this,string *param_1)

{
  undefined4 uVar1;
  
                    /* catch() { ... } // from try @ 005c2280 with catch @ 005c232c */
  lua_pushlstring(*(lua_State **)this,*(char **)param_1,*(ulong *)(*(char **)param_1 + -0x18));
  lua_gettable(*(lua_State **)this,*(int *)(this + 8));
  uVar1 = lua_tointeger(*(lua_State **)this,-1);
  lua_settop(*(lua_State **)this,-2);
  return uVar1;
}


