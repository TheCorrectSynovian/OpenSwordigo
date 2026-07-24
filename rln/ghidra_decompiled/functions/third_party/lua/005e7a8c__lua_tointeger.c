/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e7a8c
 * Function: lua_tointeger
 * Signature: undefined __cdecl lua_tointeger(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_tointeger(lua_State*, int) */

void lua_tointeger(lua_State *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  lua_State *plVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
                    /* try { // try from 005e7a90 to 006e7ab7 has its CatchHandler @ 005e7e04 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
                    /* catch() { ... } // from try @ 005e7678 with catch @ 005e7b34 */
      if (param_2 == -0x2712) {
        plVar3 = param_1 + 0x78;
      }
      else {
                    /* catch() { ... } // from try @ 005e7904 with catch @ 005e7b40
                       catch() { ... } // from try @ 005e7954 with catch @ 005e7b40 */
        if (param_2 == -0x2711) {
                    /* try { // try from 005e7b70 to 006e7eab has its CatchHandler @ 005e7eb4 */
          uVar4 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
          *(undefined4 *)(param_1 + 0x90) = 5;
          *(undefined8 *)(param_1 + 0x88) = uVar4;
          plVar3 = param_1 + 0x88;
        }
        else {
                    /* catch() { ... } // from try @ 005e7920 with catch @ 005e7b4c */
          if (param_2 == -10000) {
            plVar3 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
          }
          else {
            plVar3 = (lua_State *)&DAT_00699bc8;
            if ((int)(-0x2712 - (long)param_2) <=
                (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
              plVar3 = (lua_State *)
                       (**(long **)(*(long *)(param_1 + 0x28) + 8) +
                        (-0x2712 - (long)param_2) * 0x10 + 0x18);
            }
          }
        }
      }
    }
    else {
      plVar3 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
                    /* try { // try from 005e7ab8 to 006e7b6f has its CatchHandler @ 005e7534 */
    plVar3 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar3) {
      plVar3 = (lua_State *)&DAT_00699bc8;
    }
  }
  if (*(int *)(plVar3 + 8) != 3) {
    plVar3 = (lua_State *)FUN_005f5ef0(plVar3,auStack_38);
    lVar2 = 0;
    if (plVar3 == (lua_State *)0x0) goto LAB_005e7b0c;
  }
  lVar2 = (long)*(double *)plVar3;
LAB_005e7b0c:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2);
  }
                    /* catch() { ... } // from try @ 005e7884 with catch @ 005e7b1c */
                    /* catch() { ... } // from try @ 005e7778 with catch @ 005e7b28 */
  return;
}


