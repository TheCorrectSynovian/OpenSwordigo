/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c242c
 * Function: Caver::ProgramTable::SetFloatForKey
 * Signature: undefined __thiscall SetFloatForKey(ProgramTable * this, string * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramTable::SetFloatForKey(std::string const&, float) */

void __thiscall
Caver::ProgramTable::SetFloatForKey(ProgramTable *this,string *param_1,float param_2)

{
                    /* catch() { ... } // from try @ 005c244c with catch @ 005c2430 */
                    /* try { // try from 005c2444 to 006c244b has its CatchHandler @ 005c2468 */
                    /* try { // try from 005c244c to 006c247b has its CatchHandler @ 005c2430 */
  lua_pushlstring(*(lua_State **)this,*(char **)param_1,*(ulong *)(*(char **)param_1 + -0x18));
  lua_pushnumber(*(lua_State **)this,(double)param_2);
                    /* catch() { ... } // from try @ 005c2444 with catch @ 005c2468 */
  lua_settable(*(lua_State **)this,*(int *)(this + 8));
  return;
}


