/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b36c
 * Function: FUN_0064b36c
 * Signature: undefined FUN_0064b36c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0064b36c(long *param_1,char param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[2];
                    /* try { // try from 0064b380 to 0074b383 has its CatchHandler @ 0064b394 */
                    /* catch() { ... } // from try @ 0064b350 with catch @ 0064b384 */
  if (((ulong)param_1[1] < uVar1) && (*(char *)(uVar1 - 1) == param_2)) {
                    /* catch() { ... } // from try @ 0064b414 with catch @ 0064b3ac */
    param_1[2] = uVar1 - 1;
    return (ulong)*(byte *)(uVar1 - 1);
  }
                    /* catch() { ... } // from try @ 0064b380 with catch @ 0064b394 */
                    /* try { // try from 0064b398 to 0074b39b has its CatchHandler @ 0064b3a4 */
                    /* try { // try from 0064b39c to 0074b3a7 has its CatchHandler @ 0064b2cc */
  uVar1 = (**(code **)(*param_1 + 0x58))();
                    /* catch() { ... } // from try @ 0064b398 with catch @ 0064b3a4 */
  return uVar1;
}


