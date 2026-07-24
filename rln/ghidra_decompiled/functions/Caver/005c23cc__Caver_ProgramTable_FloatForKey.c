/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c23cc
 * Function: Caver::ProgramTable::FloatForKey
 * Signature: undefined __thiscall FloatForKey(ProgramTable * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramTable::FloatForKey(std::string const&) */

float __thiscall Caver::ProgramTable::FloatForKey(ProgramTable *this,string *param_1)

{
  double dVar1;
  
                    /* catch() { ... } // from try @ 005c23b4 with catch @ 005c23ec */
  lua_pushlstring(*(lua_State **)this,*(char **)param_1,*(ulong *)(*(char **)param_1 + -0x18));
                    /* try { // try from 005c23f4 to 006c23fb has its CatchHandler @ 005c2408 */
  lua_gettable(*(lua_State **)this,*(int *)(this + 8));
                    /* try { // try from 005c2404 to 006c2407 has its CatchHandler @ 005c2418 */
  dVar1 = (double)lua_tonumber(*(lua_State **)this,-1);
                    /* catch() { ... } // from try @ 005c23f4 with catch @ 005c2408 */
  lua_settop(*(lua_State **)this,-2);
                    /* catch() { ... } // from try @ 005c2404 with catch @ 005c2418 */
                    /* try { // try from 005c241c to 006c241f has its CatchHandler @ 005c2428 */
                    /* try { // try from 005c2420 to 006c242b has its CatchHandler @ 005c239c */
                    /* catch() { ... } // from try @ 005c241c with catch @ 005c2428 */
  return (float)dVar1;
}


