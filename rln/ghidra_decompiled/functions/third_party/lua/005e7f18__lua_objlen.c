/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e7f18
 * Function: lua_objlen
 * Signature: undefined __cdecl lua_objlen(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_objlen(lua_State*, int) */

long lua_objlen(lua_State *param_1,int param_2)

{
  int iVar1;
  lua_State *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar2 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
        uVar3 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar3;
        plVar2 = param_1 + 0x88;
      }
      else {
                    /* try { // try from 005e7f7c to 006e7fa3 has its CatchHandler @ 005e80cc */
        if (param_2 == -10000) {
          plVar2 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
        }
        else {
                    /* try { // try from 005e7fc4 to 006e7feb has its CatchHandler @ 005e80c4 */
          plVar2 = (lua_State *)&DAT_00699bc8;
          if ((int)(-0x2712 - (long)param_2) <=
              (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
            plVar2 = (lua_State *)
                     (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10
                     + 0x18);
          }
        }
      }
    }
    else {
      plVar2 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
                    /* try { // try from 005e7f34 to 006e7f5b has its CatchHandler @ 005e80dc */
    plVar2 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar2) {
      plVar2 = (lua_State *)&DAT_00699bc8;
    }
  }
  lVar4 = 0;
  switch(*(undefined4 *)(plVar2 + 8)) {
  case 3:
                    /* try { // try from 005e8018 to 006e803f has its CatchHandler @ 005e820c */
    iVar1 = FUN_005f5f80(param_1,plVar2);
    if (iVar1 == 0) {
      return 0;
    }
  case 4:
    lVar4 = *(long *)(*(long *)plVar2 + 0x10);
    break;
  case 5:
    iVar1 = FUN_005f4b90(*(undefined8 *)plVar2);
    lVar4 = (long)iVar1;
    break;
  case 7:
    lVar4 = *(long *)(*(long *)plVar2 + 0x20);
  }
  return lVar4;
}


