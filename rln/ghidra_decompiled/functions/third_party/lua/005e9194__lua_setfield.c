/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e9194
 * Function: lua_setfield
 * Signature: undefined __cdecl lua_setfield(lua_State * param_1, int param_2, char * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_setfield(lua_State*, int, char const*) */

void lua_setfield(lua_State *param_1,int param_2,char *param_3)

{
  long lVar1;
  size_t sVar2;
  lua_State *plVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
                    /* try { // try from 005e91a0 to 006e91b3 has its CatchHandler @ 005ea0c8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar3 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
        uVar4 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar4;
        plVar3 = param_1 + 0x88;
      }
      else if (param_2 == -10000) {
        plVar3 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
        plVar3 = (lua_State *)&DAT_00699bc8;
        if ((int)(-0x2712 - (long)param_2) <=
            (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
          plVar3 = (lua_State *)
                   (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10 +
                   0x18);
        }
      }
    }
    else {
      plVar3 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
                    /* try { // try from 005e91d4 to 006e91df has its CatchHandler @ 005e9f10 */
    plVar3 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar3) {
      plVar3 = (lua_State *)&DAT_00699bc8;
    }
  }
                    /* try { // try from 005e91f8 to 006e91fb has its CatchHandler @ 005ea064 */
  sVar2 = strlen(param_3);
                    /* try { // try from 005e9200 to 006e9213 has its CatchHandler @ 005e9fe0 */
  local_48 = FUN_005f356c(param_1,param_3,sVar2);
                    /* try { // try from 005e9214 to 006e922f has its CatchHandler @ 005e9f84 */
  local_40 = 4;
  FUN_005f61e8(param_1,plVar3,&local_48,*(long *)(param_1 + 0x10) + -0x10);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


