/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8060
 * Function: lua_tocfunction
 * Signature: undefined __cdecl lua_tocfunction(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_tocfunction(lua_State*, int) */

undefined8 lua_tocfunction(lua_State *param_1,int param_2)

{
  lua_State *plVar1;
  undefined8 uVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
                    /* try { // try from 005e80a4 to 006e80ff has its CatchHandler @ 005e7eec */
      if (param_2 == -0x2712) {
        plVar1 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
                    /* catch() { ... } // from try @ 005e7f34 with catch @ 005e80dc */
        uVar2 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar2;
        plVar1 = param_1 + 0x88;
      }
      else {
                    /* catch() { ... } // from try @ 005e807c with catch @ 005e80bc */
        if (param_2 == -10000) {
                    /* catch() { ... } // from try @ 005e7fc4 with catch @ 005e80c4 */
          plVar1 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
                    /* catch() { ... } // from try @ 005e7f7c with catch @ 005e80cc */
        }
        else {
                    /* try { // try from 005e8100 to 006e816f has its CatchHandler @ 005e8278 */
          plVar1 = (lua_State *)&DAT_00699bc8;
          if ((int)(-0x2712 - (long)param_2) <=
              (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
            plVar1 = (lua_State *)
                     (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10
                     + 0x18);
          }
        }
      }
    }
    else {
      plVar1 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
                    /* try { // try from 005e807c to 006e80a3 has its CatchHandler @ 005e80bc */
    if (*(lua_State **)(param_1 + 0x10) <= plVar1) {
      plVar1 = (lua_State *)&DAT_00699bc8;
    }
  }
  if (*(int *)(plVar1 + 8) != 6) {
    return 0;
  }
  if (*(char *)(*(long *)plVar1 + 10) == '\0') {
    return 0;
  }
  return *(undefined8 *)(*(long *)plVar1 + 0x20);
}


