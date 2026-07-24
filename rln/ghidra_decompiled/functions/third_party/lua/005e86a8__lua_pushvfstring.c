/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e86a8
 * Function: lua_pushvfstring
 * Signature: undefined __cdecl lua_pushvfstring(lua_State * param_1, char * param_2, __va_list param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_pushvfstring(lua_State*, char const*, std::__va_list) */

void lua_pushvfstring(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005e8544 with catch @ 005e86c8 */
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78))
  {
    FUN_005edcb0(param_1);
  }
  uStack_48 = param_3[3];
  local_50 = param_3[2];
                    /* try { // try from 005e86f8 to 006e871b has its CatchHandler @ 005e8354 */
  uStack_58 = param_3[1];
  local_60 = *param_3;
                    /* catch() { ... } // from try @ 005e8668 with catch @ 005e8704 */
                    /* catch() { ... } // from try @ 005e8384 with catch @ 005e8708 */
  FUN_005eefd8(param_1,param_2,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 005e871c to 006e876f has its CatchHandler @ 005e871c
                       catch() { ... } // from try @ 005e871c with catch @ 005e871c
                       catch() { ... } // from try @ 005e8790 with catch @ 005e871c
                       catch() { ... } // from try @ 005e8958 with catch @ 005e871c
                       catch() { ... } // from try @ 005e8a20 with catch @ 005e871c
                       catch() { ... } // from try @ 005e8bf4 with catch @ 005e871c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


