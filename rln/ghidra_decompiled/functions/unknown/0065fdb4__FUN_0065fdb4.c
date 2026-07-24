/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065fdb4
 * Function: FUN_0065fdb4
 * Signature: undefined FUN_0065fdb4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_0065fdb4(long param_1,long param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_8;
  
  if (*(long **)(param_1 + 200) == (long *)0x0) {
LAB_0065fe00:
    bVar6 = true;
    lVar5 = 0;
  }
  else {
    iVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x28))();
    lVar5 = (long)iVar3;
    if (iVar3 < 0) goto LAB_0065fe00;
    bVar6 = iVar3 < 1;
  }
                    /* try { // try from 0065fe08 to 0075fe0b has its CatchHandler @ 00660014 */
  lVar7 = -1;
  bVar1 = FUN_0061f654(param_1 + 0x68);
  uVar8 = 0;
  if (bVar1 <= (byte)(bVar6 & param_2 != 0)) goto LAB_0065fe90;
  if (((param_2 != 0) || (param_3 != 1)) ||
     ((*(char *)(param_1 + 0xaa) != '\0' &&
      (cVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x30))(*(long **)(param_1 + 200)),
      cVar2 == '\0')))) {
    if (*(char *)(param_1 + 0xc0) != '\0') {
      lVar4 = *(long *)(param_1 + 0xb0);
      if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
        lVar4 = lVar4 + 1;
      }
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x98);
      *(long *)(param_1 + 0xb0) = lVar4;
      *(long *)(param_1 + 0x10) = lVar4;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xb8);
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
    local_8 = *(undefined8 *)(param_1 + 0x7c);
    lVar5 = lVar5 * param_2;
    if ((param_3 != 1) || (*(char *)(param_1 + 0xa9) == '\0')) goto LAB_0065feec;
    bVar6 = false;
LAB_0065ff60:
    local_8 = *(undefined8 *)(param_1 + 0x8c);
    iVar3 = FUN_0065f194(param_1);
    lVar5 = lVar5 + iVar3;
    if (!bVar6) {
LAB_0065feec:
      auVar9 = FUN_0065fa7c(param_1,lVar5,param_3,local_8);
      return auVar9;
    }
  }
  else {
    local_8 = *(undefined8 *)(param_1 + 0x7c);
                    /* try { // try from 0065fe50 to 0075fe53 has its CatchHandler @ 00660008 */
                    /* try { // try from 0065fe54 to 00760033 has its CatchHandler @ 0065fd50 */
    if (*(char *)(param_1 + 0xa9) != '\0') {
      bVar6 = true;
      lVar5 = 0;
      goto LAB_0065ff60;
    }
    lVar5 = 0;
  }
  if (*(char *)(param_1 + 0xaa) != '\0') {
    lVar5 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
  }
  lVar4 = FUN_0061f8b4(param_1 + 0x68,0,1);
  if (lVar4 != -1) {
    lVar7 = lVar4 + lVar5;
    uVar8 = local_8;
  }
LAB_0065fe90:
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = lVar7;
  return auVar9;
}


