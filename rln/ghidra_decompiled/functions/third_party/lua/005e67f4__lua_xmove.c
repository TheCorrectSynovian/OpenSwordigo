/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e67f4
 * Function: lua_xmove
 * Signature: undefined __cdecl lua_xmove(lua_State * param_1, lua_State * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_xmove(lua_State*, lua_State*, int) */

void lua_xmove(lua_State *param_1,lua_State *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    lVar2 = *(long *)(param_1 + 0x10);
    puVar3 = (undefined8 *)(lVar2 + (long)param_3 * -0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    if (0 < param_3) {
      puVar5 = *(undefined8 **)(param_2 + 0x10);
      *(undefined8 **)(param_2 + 0x10) = puVar5 + 2;
      *puVar5 = *puVar3;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(lVar2 + (long)param_3 * -0x10 + 8);
      if (param_3 != 1) {
        lVar2 = 0;
        lVar4 = (ulong)(uint)param_3 - 1;
        do {
          puVar3 = *(undefined8 **)(param_2 + 0x10);
          lVar4 = lVar4 + -1;
          lVar1 = *(long *)(param_1 + 0x10) + lVar2;
          *(undefined8 **)(param_2 + 0x10) = puVar3 + 2;
          lVar2 = lVar2 + 0x10;
          *puVar3 = *(undefined8 *)(lVar1 + 0x10);
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar1 + 0x18);
        } while (lVar4 != 0);
      }
    }
  }
  return;
}


