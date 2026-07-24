/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e880c
 * Function: lua_pushcclosure
 * Signature: undefined __cdecl lua_pushcclosure(lua_State * param_1, _func_int_lua_State_ptr * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_pushcclosure(lua_State*, int (*)(lua_State*), int) */

void lua_pushcclosure(lua_State *param_1,_func_int_lua_State_ptr *param_2,int param_3)

{
  long lVar1;
  lua_State *plVar2;
  long *plVar3;
  long lVar4;
  
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78))
  {
    FUN_005edcb0(param_1);
  }
  if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x50)) {
    plVar2 = param_1 + 0x78;
  }
  else {
    plVar2 = (lua_State *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  }
                    /* try { // try from 005e8868 to 006e886f has its CatchHandler @ 005e8a80 */
  lVar1 = FUN_005ed3b8(param_1,param_3,*(undefined8 *)plVar2);
  *(_func_int_lua_State_ptr **)(lVar1 + 0x20) = param_2;
  plVar3 = (long *)(*(long *)(param_1 + 0x10) + (long)param_3 * -0x10);
  *(long **)(param_1 + 0x10) = plVar3;
  if (param_3 != 0) {
                    /* try { // try from 005e8888 to 006e8893 has its CatchHandler @ 005e8abc */
    lVar4 = (long)param_3 << 4;
    do {
      param_3 = param_3 + -1;
      *(undefined8 *)(lVar1 + lVar4 + 0x18) = *(undefined8 *)((long)plVar3 + lVar4 + -0x10);
      *(undefined4 *)(lVar1 + lVar4 + 0x20) = *(undefined4 *)((long)plVar3 + lVar4 + -8);
      plVar3 = *(long **)(param_1 + 0x10);
      lVar4 = lVar4 + -0x10;
                    /* try { // try from 005e88b4 to 006e88bf has its CatchHandler @ 005e8a3c */
    } while (param_3 != 0);
  }
  *plVar3 = lVar1;
  *(undefined4 *)(plVar3 + 1) = 6;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


