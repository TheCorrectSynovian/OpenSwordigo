/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066739c
 * Function: FUN_0066739c
 * Signature: undefined FUN_0066739c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0066739c(long *param_1,ulong param_2,byte param_3)

{
  ulong uVar1;
  void *__s;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  
                    /* try { // try from 0066739c to 007673af has its CatchHandler @ 00667fe4 */
  lVar2 = *param_1;
  lVar4 = *(long *)(lVar2 + -0x18);
  if (0x3ffffffffffffff9U - lVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::append");
  }
  uVar1 = param_2 + lVar4;
                    /* try { // try from 00667440 to 00767453 has its CatchHandler @ 00668130 */
  if ((*(ulong *)(lVar2 + -0x10) < uVar1) || (0 < *(int *)(lVar2 + -8))) {
    FUN_00667088(param_1,uVar1);
    lVar2 = *param_1;
    lVar4 = *(long *)(lVar2 + -0x18);
    __s = (void *)(lVar2 + lVar4);
  }
  else {
    __s = (void *)(lVar2 + lVar4);
  }
  if (param_2 == 1) {
    *(byte *)(lVar2 + lVar4) = param_3;
                    /* try { // try from 0066745c to 0076746f has its CatchHandler @ 006680d0 */
    puVar3 = (undefined1 *)*param_1;
  }
  else {
    memset(__s,(uint)param_3,param_2);
    puVar3 = (undefined1 *)*param_1;
  }
  if (puVar3 == &DAT_007fd2f8) {
    return 0;
  }
                    /* try { // try from 00667474 to 0076747f has its CatchHandler @ 006680c4 */
  *(ulong *)(puVar3 + -0x18) = uVar1;
  *(undefined4 *)(puVar3 + -8) = 0;
  puVar3[uVar1] = 0;
  return 0;
}


