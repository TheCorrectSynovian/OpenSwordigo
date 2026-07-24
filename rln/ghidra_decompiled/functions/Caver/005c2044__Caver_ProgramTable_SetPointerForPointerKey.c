/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2044
 * Function: Caver::ProgramTable::SetPointerForPointerKey
 * Signature: undefined __thiscall SetPointerForPointerKey(ProgramTable * this, void * param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramTable::SetPointerForPointerKey(void*, void*) */

void __thiscall
Caver::ProgramTable::SetPointerForPointerKey(ProgramTable *this,void *param_1,void *param_2)

{
                    /* catch() { ... } // from try @ 005c20c8 with catch @ 005c205c */
  lua_pushlightuserdata(*(lua_State **)this,param_1);
  lua_pushlightuserdata(*(lua_State **)this,param_2);
  lua_settable(*(lua_State **)this,*(int *)(this + 8));
  return;
}


