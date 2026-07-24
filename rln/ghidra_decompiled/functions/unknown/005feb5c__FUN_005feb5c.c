/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005feb5c
 * Function: FUN_005feb5c
 * Signature: undefined FUN_005feb5c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_005feb5c(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 005fea1c with catch @ 005feb5c */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005feb80 to 006fefef has its CatchHandler @ 005ff064 */
  iVar1 = param_2[4];
  iVar2 = param_2[5];
  FUN_005fe488();
  if (iVar1 != iVar2) {
    if (*param_2 == 0xc) {
                    /* catch() { ... } // from try @ 005fe958 with catch @ 005febac */
      if (param_2[4] != param_2[5]) {
        if (param_2[2] < (int)(uint)*(byte *)(param_1 + 0x4a)) goto LAB_005febc0;
        FUN_005fe674(param_1,param_2);
      }
    }
    else {
LAB_005febc0:
      FUN_005fe5c0(param_1,param_2);
    }
  }
  iVar1 = *param_2;
  if (iVar1 - 1U < 3) {
LAB_005febec:
    if (*(int *)(param_1 + 0x40) < 0x100) {
                    /* catch() { ... } // from try @ 005fe4b0 with catch @ 005febfc */
      if (iVar1 == 5) {
        local_58 = *(undefined8 *)(param_2 + 2);
        local_50 = 3;
LAB_005fecc8:
        puVar5 = &local_58;
      }
      else {
        if (iVar1 != 1) {
          local_58 = CONCAT44(local_58._4_4_,(uint)(iVar1 == 2));
          local_50 = 1;
          goto LAB_005fecc8;
        }
        local_60 = 0;
        local_58 = *(undefined8 *)(param_1 + 8);
        local_50 = 5;
        puVar5 = &uStack_68;
      }
      uVar4 = FUN_005fe158(param_1,&local_58,puVar5);
      param_2[2] = uVar4;
      *param_2 = 4;
      uVar4 = uVar4 | 0x100;
      goto LAB_005fece8;
    }
  }
  else if (iVar1 == 4) {
    if (param_2[2] < 0x100) {
      uVar4 = param_2[2] | 0x100;
      goto LAB_005fece8;
    }
  }
  else if (iVar1 == 5) goto LAB_005febec;
  FUN_005fe488(param_1,param_2);
                    /* catch() { ... } // from try @ 005fe3ec with catch @ 005fec4c */
  if (*param_2 == 0xc) {
    uVar4 = param_2[2];
    if (param_2[4] == param_2[5]) goto LAB_005fece8;
    if ((int)uVar4 < (int)(uint)*(byte *)(param_1 + 0x4a)) goto LAB_005fec8c;
    FUN_005fe674(param_1,param_2,uVar4);
  }
  else {
LAB_005fec8c:
    FUN_005fe5c0(param_1,param_2);
  }
  uVar4 = param_2[2];
                    /* catch() { ... } // from try @ 005fe210 with catch @ 005fec9c */
LAB_005fece8:
                    /* catch() { ... } // from try @ 005fe150 with catch @ 005fecec */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


