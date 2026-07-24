/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fc674
 * Function: FUN_005fc674
 * Signature: undefined FUN_005fc674(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fc674(lua_State *param_1)

{
  long lVar1;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  luaL_checklstring(param_1,1,&local_30);
  lua_pushinteger(param_1,local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 005fc6bc to 006fc6c7 has its CatchHandler @ 005fd4e4 */
                    /* try { // try from 005fc6c8 to 006fc6cf has its CatchHandler @ 005fd484 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005fc6d0 to 006fc6db has its CatchHandler @ 005fd4e4 */
  __stack_chk_fail();
}


