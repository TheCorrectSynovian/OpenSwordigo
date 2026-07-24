/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2080
 * Function: Caver::ProgramTable::PointerForKey
 * Signature: undefined __thiscall PointerForKey(ProgramTable * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramTable::PointerForKey(std::string const&) */

undefined8 __thiscall Caver::ProgramTable::PointerForKey(ProgramTable *this,string *param_1)

{
  undefined8 uVar1;
  
  lua_pushlstring(*(lua_State **)this,*(char **)param_1,*(ulong *)(*(char **)param_1 + -0x18));
                    /* try { // try from 005c20a0 to 006c20c7 has its CatchHandler @ 005c214c */
  lua_gettable(*(lua_State **)this,*(int *)(this + 8));
  uVar1 = lua_touserdata(*(lua_State **)this,-1);
                    /* try { // try from 005c20c8 to 006c21bb has its CatchHandler @ 005c205c */
  lua_settop(*(lua_State **)this,-2);
  return uVar1;
}


