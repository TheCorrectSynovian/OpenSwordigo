/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065dc98
 * Function: FUN_0065dc98
 * Signature: undefined FUN_0065dc98(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0065dc98(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if (*(long **)(param_1 + 200) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  cVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x30))();
  if (((cVar2 == '\0') || ((uVar1 & 0x11) == 0)) || (*(char *)(param_1 + 0xa9) != '\0')) {
LAB_0065dd70:
    lVar4 = FUN_0064ae74(param_1,param_2,param_3);
    return lVar4;
  }
  lVar3 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28);
  lVar4 = lVar3;
  if ((*(char *)(param_1 + 0xaa) == '\0') &&
     (lVar4 = *(ulong *)(param_1 + 0xa0) - 1, *(ulong *)(param_1 + 0xa0) < 2)) {
    lVar4 = lVar3;
  }
  if (0x3ff < lVar4) {
    lVar4 = 0x400;
  }
  if (param_3 < lVar4) goto LAB_0065dd70;
  lVar3 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
  lVar4 = FUN_0061f7d8(param_1 + 0x68,*(long *)(param_1 + 0x20),lVar3,param_2,param_3);
  if (lVar4 != lVar3 + param_3) goto LAB_0065dd54;
  if ((*(uint *)(param_1 + 0x78) & 0x11) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(undefined8 *)(param_1 + 0x18) = uVar6;
LAB_0065dda8:
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x98);
    *(long *)(param_1 + 8) = lVar5;
    *(long *)(param_1 + 0x10) = lVar5;
    *(long *)(param_1 + 0x18) = lVar5;
    if (*(ulong *)(param_1 + 0xa0) < 2) goto LAB_0065dda8;
    *(long *)(param_1 + 0x28) = lVar5;
    *(long *)(param_1 + 0x20) = lVar5;
    *(ulong *)(param_1 + 0x30) = lVar5 + (*(ulong *)(param_1 + 0xa0) - 1);
  }
  *(undefined1 *)(param_1 + 0xaa) = 1;
LAB_0065dd54:
  lVar5 = lVar4 - lVar3;
  if (lVar4 <= lVar3) {
    lVar5 = 0;
  }
  return lVar5;
}


