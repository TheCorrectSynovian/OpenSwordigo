/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8db4
 * Function: lua_createtable
 * Signature: undefined __cdecl lua_createtable(lua_State * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_createtable(lua_State*, int, int) */

void lua_createtable(lua_State *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 005e8dd8 to 006e8deb has its CatchHandler @ 005ea3ac */
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78))
  {
    FUN_005edcb0(param_1,param_2,param_3);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
                    /* try { // try from 005e8df8 to 006e8e23 has its CatchHandler @ 005ea374 */
  uVar1 = FUN_005f3db4(param_1,param_2,param_3);
  *puVar2 = uVar1;
  *(undefined4 *)(puVar2 + 1) = 5;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


