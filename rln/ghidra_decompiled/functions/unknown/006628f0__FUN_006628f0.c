/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006628f0
 * Function: FUN_006628f0
 * Signature: undefined FUN_006628f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_006628f0(long param_1,long param_2,int param_3)

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
LAB_0066293c:
    bVar6 = true;
    lVar5 = 0;
  }
  else {
    iVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x28))();
    lVar5 = (long)iVar3;
    if (iVar3 < 0) goto LAB_0066293c;
    bVar6 = iVar3 < 1;
  }
  lVar7 = -1;
  bVar1 = FUN_0061f654(param_1 + 0x68);
  uVar8 = 0;
  if (bVar1 <= (byte)(bVar6 & param_2 != 0)) goto LAB_006629d0;
                    /* catch() { ... } // from try @ 0066268c with catch @ 006629f8 */
                    /* catch() { ... } // from try @ 0066267c with catch @ 00662a00 */
                    /* catch() { ... } // from try @ 00662608 with catch @ 00662a08 */
  if (((param_2 != 0) || (param_3 != 1)) ||
     ((*(char *)(param_1 + 0xaa) != '\0' &&
      (cVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x30))(*(long **)(param_1 + 200)),
      cVar2 == '\0')))) {
    if (*(char *)(param_1 + 0xc0) != '\0') {
      lVar4 = *(long *)(param_1 + 8);
                    /* try { // try from 00662a78 to 00762a87 has its CatchHandler @ 00662d68 */
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x98);
      lVar4 = *(long *)(param_1 + 0xb0) + (ulong)(*(long *)(param_1 + 0x10) != lVar4) * 4;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xb8);
      *(long *)(param_1 + 0xb0) = lVar4;
      *(long *)(param_1 + 0x10) = lVar4;
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
    local_8 = *(undefined8 *)(param_1 + 0x7c);
    lVar5 = lVar5 * param_2;
    if ((param_3 != 1) || (*(char *)(param_1 + 0xa9) == '\0')) goto LAB_00662a2c;
    bVar6 = false;
LAB_00662aa4:
    local_8 = *(undefined8 *)(param_1 + 0x8c);
    iVar3 = FUN_006623d0(param_1);
                    /* try { // try from 00662ab8 to 00762abb has its CatchHandler @ 00662d74 */
    lVar5 = lVar5 + iVar3;
    if (!bVar6) {
LAB_00662a2c:
                    /* try { // try from 00662a2c to 00762a53 has its CatchHandler @ 00662d68 */
      auVar9 = FUN_006625d4(param_1,lVar5,param_3,local_8);
                    /* try { // try from 00662a54 to 00762a77 has its CatchHandler @ 006625b0 */
                    /* catch() { ... } // from try @ 006626f4 with catch @ 00662a5c
                       catch() { ... } // from try @ 0066273c with catch @ 00662a5c */
      return auVar9;
    }
  }
  else {
    local_8 = *(undefined8 *)(param_1 + 0x7c);
    if (*(char *)(param_1 + 0xa9) != '\0') {
      bVar6 = true;
      lVar5 = 0;
      goto LAB_00662aa4;
    }
    lVar5 = 0;
  }
  if (*(char *)(param_1 + 0xaa) != '\0') {
    lVar5 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 2;
  }
                    /* try { // try from 006629b0 to 00762a2b has its CatchHandler @ 006625b0 */
  lVar4 = FUN_0061f8b4(param_1 + 0x68,0,1);
  if (lVar4 != -1) {
    lVar7 = lVar4 + lVar5;
    uVar8 = local_8;
  }
LAB_006629d0:
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = lVar7;
                    /* catch() { ... } // from try @ 006626a8 with catch @ 006629e8 */
  return auVar9;
}


