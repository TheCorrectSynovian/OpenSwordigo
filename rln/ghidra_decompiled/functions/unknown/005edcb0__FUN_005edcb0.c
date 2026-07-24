/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005edcb0
 * Function: FUN_005edcb0
 * Signature: undefined FUN_005edcb0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005edcb0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = *(int *)(lVar3 + 0x94) * 10;
  uVar4 = 0x7ffffffffffffffe;
  if (uVar1 != 0) {
    uVar4 = (ulong)uVar1;
  }
  *(long *)(lVar3 + 0x88) =
       (*(long *)(lVar3 + 0x78) - *(long *)(lVar3 + 0x70)) + *(long *)(lVar3 + 0x88);
  do {
    lVar2 = FUN_005edd78(param_1);
                    /* try { // try from 005edd00 to 006edd0b has its CatchHandler @ 005ee898 */
    if (*(char *)(lVar3 + 0x21) == '\0') break;
    uVar4 = uVar4 - lVar2;
  } while (0 < (long)uVar4);
  if (*(char *)(lVar3 + 0x21) == '\0') {
                    /* try { // try from 005edd2c to 006edd53 has its CatchHandler @ 005ee680 */
    lVar2 = (*(ulong *)(lVar3 + 0x80) / 100) * (long)*(int *)(lVar3 + 0x90);
                    /* try { // try from 005edd54 to 006edd5f has its CatchHandler @ 005eea60 */
  }
  else if (*(ulong *)(lVar3 + 0x88) < 0x400) {
    lVar2 = *(long *)(lVar3 + 0x78) + 0x400;
  }
  else {
    lVar2 = *(long *)(lVar3 + 0x78);
                    /* try { // try from 005edd60 to 006edd67 has its CatchHandler @ 005ee894 */
    *(ulong *)(lVar3 + 0x88) = *(ulong *)(lVar3 + 0x88) - 0x400;
  }
  *(long *)(lVar3 + 0x70) = lVar2;
                    /* try { // try from 005edd68 to 006edddf has its CatchHandler @ 005eea60 */
  return;
}


