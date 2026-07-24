/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e7560
 * Function: lua_equal
 * Signature: undefined __cdecl lua_equal(lua_State * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_equal(lua_State*, int, int) */

bool lua_equal(lua_State *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  lua_State *plVar3;
  lua_State *plVar4;
  undefined8 uVar5;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar3 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
        uVar5 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar5;
                    /* try { // try from 005e7678 to 006e769f has its CatchHandler @ 005e7b34 */
        plVar3 = param_1 + 0x88;
      }
      else if (param_2 == -10000) {
        plVar3 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
                    /* try { // try from 005e76a0 to 006e7717 has its CatchHandler @ 005e7534 */
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
    plVar3 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar3) {
      plVar3 = (lua_State *)&DAT_00699bc8;
    }
  }
  if (param_3 < 1) {
    if (param_3 < -9999) {
                    /* try { // try from 005e7618 to 006e763b has its CatchHandler @ 005e7d68 */
      if (param_3 == -0x2712) {
        plVar4 = param_1 + 0x78;
      }
      else if (param_3 == -0x2711) {
        uVar5 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar5;
        plVar4 = param_1 + 0x88;
      }
      else if (param_3 == -10000) {
        plVar4 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
                    /* try { // try from 005e7644 to 006e7657 has its CatchHandler @ 005e7d18 */
      }
      else {
                    /* try { // try from 005e7718 to 006e773b has its CatchHandler @ 005e7ccc */
        plVar4 = (lua_State *)&DAT_00699bc8;
        if ((int)(-0x2712 - (long)param_3) <=
            (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
          plVar4 = (lua_State *)
                   (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_3) * 0x10 +
                   0x18);
        }
      }
    }
    else {
      plVar4 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
                    /* try { // try from 005e759c to 006e7617 has its CatchHandler @ 005e7534 */
    plVar4 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_3 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar4) {
      plVar4 = (lua_State *)&DAT_00699bc8;
    }
  }
  bVar1 = false;
  if ((plVar3 != (lua_State *)&DAT_00699bc8) && (plVar4 != (lua_State *)&DAT_00699bc8)) {
                    /* try { // try from 005e7744 to 006e7757 has its CatchHandler @ 005e7c7c */
    if (*(int *)(plVar3 + 8) != *(int *)(plVar4 + 8)) {
      return false;
    }
    iVar2 = FUN_005f6604();
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


