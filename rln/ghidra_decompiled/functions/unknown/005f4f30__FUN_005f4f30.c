/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f4f30
 * Function: FUN_005f4f30
 * Signature: undefined FUN_005f4f30(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f4f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char *local_58;
  undefined1 auStack_50 [12];
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  cVar1 = *param_4;
  if ((cVar1 == '@') || (cVar1 == '=')) {
    pcVar6 = param_4 + 1;
  }
  else {
    pcVar6 = "binary string";
    if (cVar1 != '\x1b') {
      pcVar6 = param_4;
    }
  }
  local_44 = 0x61754c1b;
  local_40 = DAT_0069a368;
  local_70 = param_1;
  uStack_68 = param_2;
  local_60 = param_3;
  local_58 = pcVar6;
  lVar4 = FUN_005f8758(param_2,auStack_50,0xc);
  if (lVar4 != 0) {
    FUN_005ef3d4(param_1,"%s: %s in precompiled chunk",pcVar6,"unexpected end");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(local_70,3);
  }
  iVar3 = memcmp(&local_44,auStack_50,0xc);
  if (iVar3 != 0) {
    FUN_005ef3d4(local_70,"%s: %s in precompiled chunk",local_58,"bad header");
                    /* WARNING: Subroutine does not return */
    FUN_005eb814(local_70,3);
  }
  uVar5 = FUN_005f356c(param_1,&DAT_0069a392,2);
  FUN_005f5064(&local_70,uVar5);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005f4e68 with catch @ 005f5050 */
  return;
}


