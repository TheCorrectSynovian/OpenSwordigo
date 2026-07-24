/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062b780
 * Function: FUN_0062b780
 * Signature: undefined FUN_0062b780(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0062b780(long *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  size_t *psVar1;
  void *pvVar2;
  ulong uVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  ulong uVar8;
  size_t *__dest;
  undefined1 auStack_8 [8];
  
                    /* try { // try from 0062b798 to 0072b7a3 has its CatchHandler @ 0062ba88 */
  __dest = (size_t *)(PTR_DAT_007e5de8 + 0x18);
  *param_1 = (long)__dest;
  if (param_3 == param_4) {
    sVar7 = 0;
  }
  else {
    if ((param_3 == (undefined1 *)0x0) && (param_4 != (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00665330("basic_string::_S_construct null not valid");
    }
    sVar7 = (long)param_4 - (long)param_3;
                    /* try { // try from 0062b7e4 to 0072b80b has its CatchHandler @ 0062ba18 */
    psVar1 = (size_t *)FUN_00668c20(sVar7,0,auStack_8);
    __dest = psVar1 + 3;
    if (sVar7 == 1) {
      *(undefined1 *)(psVar1 + 3) = *param_3;
    }
    else {
      memcpy(__dest,param_3,sVar7);
    }
    if (psVar1 != (size_t *)PTR_DAT_007e5de8) {
      *(undefined4 *)(psVar1 + 2) = 0;
      *psVar1 = sVar7;
      *(undefined1 *)((long)psVar1 + sVar7 + 0x18) = 0;
    }
  }
  uVar8 = sVar7 << 1;
  sVar7 = __dest[-3];
  pvVar2 = operator_new__(uVar8);
                    /* try { // try from 0062b82c to 0072b853 has its CatchHandler @ 0062ba88 */
  psVar1 = __dest;
  while( true ) {
    uVar3 = FUN_00670e3c(param_2,pvVar2,psVar1,uVar8);
    if (uVar8 <= uVar3) {
      uVar8 = uVar3 + 1;
      operator_delete__(pvVar2);
                    /* try { // try from 0062b85c to 0072b867 has its CatchHandler @ 0062ba84 */
      pvVar2 = operator_new__(uVar8);
      uVar3 = FUN_00670e3c(param_2,pvVar2,psVar1,uVar8);
    }
    FUN_006677d4(param_1,pvVar2,uVar3);
    sVar4 = strlen((char *)psVar1);
    if ((char *)((long)psVar1 + sVar4) == (char *)((long)__dest + sVar7)) break;
    lVar6 = *param_1;
    psVar1 = (size_t *)((char *)((long)psVar1 + sVar4) + 1);
                    /* try { // try from 0062b8a8 to 0072b8cf has its CatchHandler @ 0062b9c8 */
    lVar5 = *(long *)(lVar6 + -0x18);
    uVar3 = lVar5 + 1;
    if ((*(ulong *)(lVar6 + -0x10) < uVar3) || (0 < *(int *)(lVar6 + -8))) {
      FUN_00667088(param_1,uVar3);
      lVar6 = *param_1;
      lVar5 = *(long *)(lVar6 + -0x18);
    }
    *(undefined1 *)(lVar6 + lVar5) = 0;
    lVar5 = *param_1;
                    /* try { // try from 0062b8f0 to 0072b917 has its CatchHandler @ 0062ba84 */
    if ((undefined *)(lVar5 + -0x18) != PTR_DAT_007e5de8) {
      *(undefined4 *)(lVar5 + -8) = 0;
      *(ulong *)(lVar5 + -0x18) = uVar3;
      *(undefined1 *)(lVar5 + uVar3) = 0;
    }
  }
  operator_delete__(pvVar2);
                    /* try { // try from 0062b924 to 0072b933 has its CatchHandler @ 0062ba6c */
  if (__dest + -3 == (size_t *)PTR_DAT_007e5de8) {
    return param_1;
  }
  FUN_0062b45c(__dest + -3,auStack_8);
                    /* try { // try from 0062b95c to 0072b963 has its CatchHandler @ 0062ba68 */
                    /* try { // try from 0062b964 to 0072b9eb has its CatchHandler @ 0062b654 */
  return param_1;
}


