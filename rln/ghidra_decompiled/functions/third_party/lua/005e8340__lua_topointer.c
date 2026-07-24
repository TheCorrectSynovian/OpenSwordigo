/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8340
 * Function: lua_topointer
 * Signature: undefined __cdecl lua_topointer(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_topointer(lua_State*, int) */

long lua_topointer(lua_State *param_1,int param_2)

{
  lua_State *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar1 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
                    /* try { // try from 005e846c to 006e84ab has its CatchHandler @ 005e8648 */
        uVar3 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar3;
        plVar1 = param_1 + 0x88;
      }
      else if (param_2 == -10000) {
        plVar1 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
        plVar1 = (lua_State *)&DAT_00699bc8;
        if ((int)(-0x2712 - (long)param_2) <=
            (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
          plVar1 = (lua_State *)
                   (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10 +
                   0x18);
        }
      }
    }
    else {
      plVar1 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
                    /* try { // try from 005e8354 to 006e8383 has its CatchHandler @ 005e8354
                       catch() { ... } // from try @ 005e8354 with catch @ 005e8354
                       catch() { ... } // from try @ 005e8388 with catch @ 005e8354
                       catch() { ... } // from try @ 005e84ac with catch @ 005e8354
                       catch() { ... } // from try @ 005e8558 with catch @ 005e8354
                       catch() { ... } // from try @ 005e85e8 with catch @ 005e8354
                       catch() { ... } // from try @ 005e86f8 with catch @ 005e8354 */
    plVar1 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar1) {
      plVar1 = (lua_State *)&DAT_00699bc8;
    }
  }
                    /* try { // try from 005e8384 to 006e8387 has its CatchHandler @ 005e8708 */
                    /* try { // try from 005e8388 to 006e846b has its CatchHandler @ 005e8354 */
  lVar2 = 0;
  switch(*(undefined4 *)(plVar1 + 8)) {
  case 2:
  case 7:
    if (param_2 < 1) {
      if (param_2 < -9999) {
        if (param_2 == -0x2712) {
          plVar1 = param_1 + 0x78;
        }
        else if (param_2 == -0x2711) {
          uVar3 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
          *(undefined4 *)(param_1 + 0x90) = 5;
          *(undefined8 *)(param_1 + 0x88) = uVar3;
          plVar1 = param_1 + 0x88;
        }
        else if (param_2 == -10000) {
          plVar1 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
        }
        else {
          plVar1 = (lua_State *)&DAT_00699bc8;
          if ((int)(-0x2712 - (long)param_2) <=
              (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
            plVar1 = (lua_State *)
                     (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10
                     + 0x18);
          }
        }
      }
      else {
        plVar1 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
      }
    }
    else {
      plVar1 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
      if (*(lua_State **)(param_1 + 0x10) <= plVar1) {
        plVar1 = (lua_State *)&DAT_00699bc8;
      }
    }
    if (*(int *)(plVar1 + 8) != 2) {
      if (*(int *)(plVar1 + 8) == 7) {
        return *(long *)plVar1 + 0x28;
      }
                    /* try { // try from 005e8544 to 006e8557 has its CatchHandler @ 005e86c8 */
      return 0;
    }
    lVar2 = *(long *)plVar1;
    break;
  case 5:
  case 6:
  case 8:
    return *(long *)plVar1;
  }
  return lVar2;
}


