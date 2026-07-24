/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00662dac
 * Function: FUN_00662dac
 * Signature: undefined FUN_00662dac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00662dac(long param_1,long param_2)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 00662e34 with catch @ 00662dac */
  if (((*(uint *)(param_1 + 0x78) >> 3 & 1) == 0) || (param_2 < 1)) {
    lVar1 = *(long *)(param_1 + 0x98);
    *(long *)(param_1 + 8) = lVar1;
    *(long *)(param_1 + 0x10) = lVar1;
                    /* try { // try from 00662e24 to 00762e33 has its CatchHandler @ 00662ef4 */
    *(long *)(param_1 + 0x18) = lVar1;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x98);
    *(long *)(param_1 + 8) = lVar1;
                    /* try { // try from 00662dd0 to 00762de3 has its CatchHandler @ 00662fa0 */
    *(long *)(param_1 + 0x10) = lVar1;
    *(long *)(param_1 + 0x18) = lVar1 + param_2 * 4;
  }
                    /* try { // try from 00662de8 to 00762df3 has its CatchHandler @ 00662f30 */
  if (((param_2 == 0) && ((*(uint *)(param_1 + 0x78) & 0x11) != 0)) &&
     (1 < *(ulong *)(param_1 + 0xa0))) {
    *(long *)(param_1 + 0x28) = lVar1;
    *(long *)(param_1 + 0x20) = lVar1;
    *(ulong *)(param_1 + 0x30) = lVar1 + *(ulong *)(param_1 + 0xa0) * 4 + -4;
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* try { // try from 00662e0c to 00762e1f has its CatchHandler @ 00662f2c */
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}


