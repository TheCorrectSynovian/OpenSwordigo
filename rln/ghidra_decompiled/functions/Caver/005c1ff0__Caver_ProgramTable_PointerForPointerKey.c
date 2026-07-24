/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1ff0
 * Function: Caver::ProgramTable::PointerForPointerKey
 * Signature: undefined __thiscall PointerForPointerKey(ProgramTable * this, void * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramTable::PointerForPointerKey(void*) */

undefined8 __thiscall Caver::ProgramTable::PointerForPointerKey(ProgramTable *this,void *param_1)

{
  undefined8 uVar1;
  
  lua_pushlightuserdata(*(lua_State **)this,param_1);
  lua_gettable(*(lua_State **)this,*(int *)(this + 8));
  uVar1 = lua_touserdata(*(lua_State **)this,-1);
  lua_settop(*(lua_State **)this,-2);
  return uVar1;
}


