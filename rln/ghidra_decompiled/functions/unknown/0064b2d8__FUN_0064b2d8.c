/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b2d8
 * Function: FUN_0064b2d8
 * Signature: undefined FUN_0064b2d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0064b2d8(long *param_1)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  
                    /* try { // try from 0064b2e4 to 0074b2eb has its CatchHandler @ 0064b31c */
  pbVar3 = (byte *)param_1[2];
                    /* try { // try from 0064b2ec to 0074b34f has its CatchHandler @ 0064b2cc */
  if (pbVar3 < (byte *)param_1[3]) {
    bVar1 = *pbVar3;
    param_1[2] = (long)(pbVar3 + 1);
    return (ulong)bVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x50))();
  return uVar2;
}


