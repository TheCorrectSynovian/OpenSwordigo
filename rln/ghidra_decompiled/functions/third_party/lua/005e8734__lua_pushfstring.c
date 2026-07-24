/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8734
 * Function: lua_pushfstring
 * Signature: undefined __cdecl lua_pushfstring(lua_State * param_1, char * param_2, ...)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_pushfstring(lua_State*, char const*, ...) */

void lua_pushfstring(lua_State *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005e8770 to 006e8783 has its CatchHandler @ 005e8c7c */
                    /* try { // try from 005e8784 to 006e878f has its CatchHandler @ 005e8c08 */
  local_c0 = in_x2;
  uStack_b8 = in_x3;
  local_b0 = in_x4;
  uStack_a8 = in_x5;
  local_a0 = in_x6;
  uStack_98 = in_x7;
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78))
  {
                    /* try { // try from 005e8790 to 006e8867 has its CatchHandler @ 005e871c */
    FUN_005edcb0(param_1);
  }
  puStack_80 = &local_c0;
  ppuStack_88 = &local_90;
  uStack_78 = 0xffffff80ffffffd0;
  local_90 = (undefined1 *)register0x00000008;
  FUN_005eefd8(param_1,param_2,&local_90);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


