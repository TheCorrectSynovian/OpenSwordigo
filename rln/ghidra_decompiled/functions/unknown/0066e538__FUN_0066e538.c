/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066e538
 * Function: FUN_0066e538
 * Signature: undefined FUN_0066e538(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_0066e538(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  size_t __n;
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_2;
  uVar3 = *(ulong *)(lVar4 + -0x18);
                    /* try { // try from 0066e554 to 0076e55f has its CatchHandler @ 0066e7ec */
                    /* try { // try from 0066e560 to 0076e5b3 has its CatchHandler @ 0066e364 */
  if (uVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::append",
                 param_3,uVar3);
  }
  __n = uVar3 - param_3;
  if (param_4 < uVar3 - param_3) {
    __n = param_4;
  }
  if (__n != 0) {
    puVar1 = (undefined *)*param_1;
    lVar2 = *(long *)(puVar1 + -0x18);
    uVar3 = __n + lVar2;
    if ((*(ulong *)(puVar1 + -0x10) < uVar3) || (0 < *(int *)(puVar1 + -8))) {
      FUN_0066e318(param_1,uVar3);
      puVar1 = (undefined *)*param_1;
      lVar4 = *param_2;
      lVar2 = *(long *)(puVar1 + -0x18);
    }
                    /* try { // try from 0066e5b4 to 0076e5db has its CatchHandler @ 0066e734 */
    if (__n == 1) {
      *(undefined4 *)(puVar1 + lVar2 * 4) = *(undefined4 *)(lVar4 + param_3 * 4);
    }
    else {
      wmemcpy((wchar_t *)(puVar1 + lVar2 * 4),(wchar_t *)(lVar4 + param_3 * 4),__n);
      puVar1 = (undefined *)*param_1;
    }
    if (puVar1 != &DAT_007fd318) {
      *(undefined4 *)(puVar1 + -8) = 0;
      *(ulong *)(puVar1 + -0x18) = uVar3;
      *(undefined4 *)(puVar1 + uVar3 * 4) = 0;
    }
  }
                    /* try { // try from 0066e5dc to 0076e63b has its CatchHandler @ 0066e364 */
  return param_1;
}


