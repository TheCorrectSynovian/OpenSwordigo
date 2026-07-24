/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f33f0
 * Function: lua_close
 * Signature: undefined __cdecl lua_close(lua_State * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_close(lua_State*) */

void lua_close(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0xb0);
  FUN_005ed5f4(lVar3,*(undefined8 *)(lVar3 + 0x40));
  FUN_005ed86c(lVar3,1);
  *(undefined8 *)(lVar3 + 0xb0) = 0;
  do {
    *(undefined8 **)(lVar3 + 0x28) = *(undefined8 **)(lVar3 + 0x50);
    uVar2 = **(undefined8 **)(lVar3 + 0x50);
    *(undefined4 *)(lVar3 + 0x60) = 0;
    *(undefined8 *)(lVar3 + 0x10) = uVar2;
    *(undefined8 *)(lVar3 + 0x18) = uVar2;
    iVar1 = FUN_005eb998(lVar3,thunk_FUN_005ed96c,0);
  } while (iVar1 != 0);
  FUN_005f3344(lVar3);
  return;
}


