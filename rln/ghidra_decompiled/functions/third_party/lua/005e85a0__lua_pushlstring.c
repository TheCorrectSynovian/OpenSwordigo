/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e85a0
 * Function: lua_pushlstring
 * Signature: undefined __cdecl lua_pushlstring(lua_State * param_1, char * param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_pushlstring(lua_State*, char const*, unsigned long) */

void lua_pushlstring(lua_State *param_1,char *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78))
  {
    FUN_005edcb0(param_1);
  }
                    /* try { // try from 005e85d4 to 006e85e7 has its CatchHandler @ 005e8694 */
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uVar1 = FUN_005f356c(param_1,param_2,param_3);
                    /* try { // try from 005e85e8 to 006e8667 has its CatchHandler @ 005e8354 */
  *puVar2 = uVar1;
  *(undefined4 *)(puVar2 + 1) = 4;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


