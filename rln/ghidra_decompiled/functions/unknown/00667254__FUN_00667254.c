/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667254
 * Function: FUN_00667254
 * Signature: undefined FUN_00667254(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00667254(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 *__dest;
  long lVar2;
  undefined1 *puVar3;
  
                    /* try { // try from 00667258 to 00767283 has its CatchHandler @ 0066801c */
  puVar3 = (undefined1 *)*param_1;
  lVar2 = *(long *)(puVar3 + -0x18);
  if (0x3ffffffffffffff9U - lVar2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::append");
  }
                    /* try { // try from 0066728c to 007672af has its CatchHandler @ 00667ff0 */
  uVar1 = param_3 + lVar2;
  if ((*(ulong *)(puVar3 + -0x10) < uVar1) || (0 < *(int *)(puVar3 + -8))) {
    if ((puVar3 <= param_2) && (param_2 <= puVar3 + lVar2)) {
      lVar2 = (long)param_2 - (long)puVar3;
      FUN_00667088(param_1,uVar1);
      puVar3 = (undefined1 *)*param_1;
                    /* try { // try from 0066733c to 00767353 has its CatchHandler @ 00667fec */
      param_2 = puVar3 + lVar2;
      lVar2 = *(long *)(puVar3 + -0x18);
      __dest = puVar3 + lVar2;
      goto joined_r0x0066734c;
    }
                    /* try { // try from 006672b0 to 007672c3 has its CatchHandler @ 00667fe8 */
    FUN_00667088(param_1,uVar1);
    puVar3 = (undefined1 *)*param_1;
    lVar2 = *(long *)(puVar3 + -0x18);
  }
  __dest = puVar3 + lVar2;
joined_r0x0066734c:
  if (param_3 == 1) {
    puVar3[lVar2] = *param_2;
    puVar3 = (undefined1 *)*param_1;
  }
  else {
                    /* try { // try from 00667354 to 00767397 has its CatchHandler @ 0066801c */
    memcpy(__dest,param_2,param_3);
    puVar3 = (undefined1 *)*param_1;
  }
  if (puVar3 == &DAT_007fd2f8) {
                    /* try { // try from 006672fc to 00767303 has its CatchHandler @ 00668154 */
    return 0;
  }
  *(ulong *)(puVar3 + -0x18) = uVar1;
  *(undefined4 *)(puVar3 + -8) = 0;
  puVar3[uVar1] = 0;
  return 0;
}


