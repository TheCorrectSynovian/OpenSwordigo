/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1e70
 * Function: FUN_005c1e70
 * Signature: undefined FUN_005c1e70(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005c1e70(void *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  void *local_38;
  undefined4 local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 005c1ee8 with catch @ 005c1e7c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0xffffd8ee;
  local_38 = param_1;
  puVar4 = (undefined8 *)
           Caver::ProgramTable::PointerForPointerKey((ProgramTable *)&local_38,param_1);
  iVar3 = lua_type((lua_State *)*puVar4,1);
  if (iVar3 == 1) {
                    /* try { // try from 005c1ec0 to 006c1ee7 has its CatchHandler @ 005c1f6c */
    iVar3 = lua_toboolean((lua_State *)*puVar4,1);
    bVar2 = iVar3 != 0;
  }
  else {
    bVar2 = false;
  }
  *(bool *)((long)puVar4 + 0x52) = bVar2;
                    /* try { // try from 005c1ee8 to 006c1fdb has its CatchHandler @ 005c1e7c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


