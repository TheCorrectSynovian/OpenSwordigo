/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c0d60
 * Function: Caver::ProgramPanic
 * Signature: undefined __cdecl ProgramPanic(lua_State * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramPanic(lua_State*) */

void Caver::ProgramPanic(lua_State *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0;
                    /* try { // try from 005c0d74 to 006c0dc3 has its CatchHandler @ 005c0ce0 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,PTR_typeinfo_007e69b8,0);
}


