/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8a34
 * Function: lua_getfield
 * Signature: undefined __cdecl lua_getfield(lua_State * param_1, int param_2, char * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_getfield(lua_State*, int, char const*) */

void lua_getfield(lua_State *param_1,int param_2,char *param_3)

{
  long lVar1;
  size_t sVar2;
  lua_State *plVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 005e8908 with catch @ 005e8a34 */
                    /* catch() { ... } // from try @ 005e88b4 with catch @ 005e8a3c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005e8a60 to 006e8a67 has its CatchHandler @ 005e8a6c */
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar3 = param_1 + 0x78;
      }
      else {
                    /* try { // try from 005e8b10 to 006e8bc3 has its CatchHandler @ 005e8bfc */
        if (param_2 == -0x2711) {
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
                     (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10
                     + 0x18);
          }
        }
      }
    }
    else {
      plVar3 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
                    /* catch() { ... } // from try @ 005e8a60 with catch @ 005e8a6c */
                    /* catch() { ... } // from try @ 005e88e4 with catch @ 005e8a70 */
    plVar3 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar3) {
      plVar3 = (lua_State *)&DAT_00699bc8;
    }
  }
  sVar2 = strlen(param_3);
                    /* try { // try from 005e8aa4 to 006e8aab has its CatchHandler @ 005e8ab0 */
  local_48 = FUN_005f356c(param_1,param_3,sVar2);
                    /* catch() { ... } // from try @ 005e8aa4 with catch @ 005e8ab0 */
                    /* catch() { ... } // from try @ 005e8930 with catch @ 005e8ab4 */
  local_40 = 4;
                    /* catch() { ... } // from try @ 005e8888 with catch @ 005e8abc */
  FUN_005f6020(param_1,plVar3,&local_48,*(undefined8 *)(param_1 + 0x10));
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
                    /* try { // try from 005e8ae0 to 006e8aeb has its CatchHandler @ 005e8bc8 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


