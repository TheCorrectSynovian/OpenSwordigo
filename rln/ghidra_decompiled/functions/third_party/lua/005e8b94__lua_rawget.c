/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8b94
 * Function: lua_rawget
 * Signature: undefined __cdecl lua_rawget(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_rawget(lua_State*, int) */

void lua_rawget(lua_State *param_1,int param_2)

{
  undefined8 *puVar1;
  lua_State *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
                    /* try { // try from 005e8bec to 006e8bf3 has its CatchHandler @ 005e8bf8 */
      if (param_2 == -0x2712) {
        plVar2 = param_1 + 0x78;
      }
      else {
                    /* try { // try from 005e8bf4 to 006e8c7f has its CatchHandler @ 005e871c */
                    /* catch() { ... } // from try @ 005e8bec with catch @ 005e8bf8 */
        if (param_2 == -0x2711) {
          uVar4 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
          *(undefined4 *)(param_1 + 0x90) = 5;
          *(undefined8 *)(param_1 + 0x88) = uVar4;
          plVar2 = param_1 + 0x88;
        }
        else {
                    /* catch() { ... } // from try @ 005e8b10 with catch @ 005e8bfc */
          if (param_2 == -10000) {
                    /* catch() { ... } // from try @ 005e8784 with catch @ 005e8c08 */
            plVar2 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
          }
          else {
            plVar2 = (lua_State *)&DAT_00699bc8;
            if ((int)(-0x2712 - (long)param_2) <=
                (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
              plVar2 = (lua_State *)
                       (**(long **)(*(long *)(param_1 + 0x28) + 8) +
                        (-0x2712 - (long)param_2) * 0x10 + 0x18);
            }
          }
        }
      }
    }
    else {
      plVar2 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar2) {
      plVar2 = (lua_State *)&DAT_00699bc8;
    }
  }
                    /* catch() { ... } // from try @ 005e8770 with catch @ 005e8c7c */
  puVar1 = (undefined8 *)FUN_005f4118(*(undefined8 *)plVar2,*(long *)(param_1 + 0x10) + -0x10);
                    /* catch() { ... } // from try @ 005e964c with catch @ 005e8c80
                       catch() { ... } // from try @ 005e9810 with catch @ 005e8c80
                       catch() { ... } // from try @ 005e9c30 with catch @ 005e8c80 */
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar3 + -0x10) = *puVar1;
  *(undefined4 *)(lVar3 + -8) = *(undefined4 *)(puVar1 + 1);
  return;
}


