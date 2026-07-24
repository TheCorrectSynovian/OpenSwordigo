/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2478
 * Function: Caver::ProgramTable::StringAtIndex
 * Signature: undefined __cdecl StringAtIndex(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramTable::StringAtIndex(int) */

void Caver::ProgramTable::StringAtIndex(int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char *__s;
  int in_w1;
  long *in_x8;
  long lVar3;
  
  puVar2 = (undefined8 *)(ulong)(uint)param_1;
                    /* catch() { ... } // from try @ 005c25c4 with catch @ 005c2484 */
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005c24a4 to 006c24a7 has its CatchHandler @ 005c2550 */
  lua_pushinteger((lua_State *)*puVar2,(long)in_w1);
                    /* try { // try from 005c24b0 to 006c24b3 has its CatchHandler @ 005c2548 */
  lua_gettable((lua_State *)*puVar2,*(int *)(puVar2 + 1));
  *in_x8 = (long)(PTR_DAT_007e5de8 + 0x18);
  __s = (char *)lua_tolstring((lua_State *)*puVar2,-1,(ulong *)0x0);
                    /* try { // try from 005c24e0 to 006c2507 has its CatchHandler @ 005c261c */
  if (__s != (char *)0x0) {
    strlen(__s);
    FUN_0066918c();
  }
  lua_settop((lua_State *)*puVar2,-2);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


