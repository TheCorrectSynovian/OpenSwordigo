/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e689c
 * Function: lua_newthread
 * Signature: undefined __cdecl lua_newthread(lua_State * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_newthread(lua_State*) */

void lua_newthread(lua_State *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78))
  {
    FUN_005edcb0(param_1);
  }
  uVar1 = FUN_005f2f88(param_1);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *puVar2 = uVar1;
  *(undefined4 *)(puVar2 + 1) = 8;
                    /* try { // try from 005e68e0 to 006e68eb has its CatchHandler @ 005e69b0 */
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
                    /* try { // try from 005e68ec to 006e6917 has its CatchHandler @ 005e69bc */
  return;
}


