/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2384
 * Function: Caver::ProgramTable::SetIntForKey
 * Signature: undefined __thiscall SetIntForKey(ProgramTable * this, string * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramTable::SetIntForKey(std::string const&, int) */

void __thiscall Caver::ProgramTable::SetIntForKey(ProgramTable *this,string *param_1,int param_2)

{
                    /* catch() { ... } // from try @ 005c23bc with catch @ 005c239c
                       catch() { ... } // from try @ 005c2420 with catch @ 005c239c */
  lua_pushlstring(*(lua_State **)this,*(char **)param_1,*(ulong *)(*(char **)param_1 + -0x18));
                    /* try { // try from 005c23b4 to 006c23bb has its CatchHandler @ 005c23ec */
  lua_pushinteger(*(lua_State **)this,(long)param_2);
                    /* try { // try from 005c23bc to 006c23f3 has its CatchHandler @ 005c239c */
  lua_settable(*(lua_State **)this,*(int *)(this + 8));
  return;
}


