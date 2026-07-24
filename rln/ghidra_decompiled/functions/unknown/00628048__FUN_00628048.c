/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00628048
 * Function: FUN_00628048
 * Signature: undefined FUN_00628048(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00628048(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
                    /* try { // try from 0062804c to 0072804f has its CatchHandler @ 00628618 */
  lVar1 = *(long *)(*param_1 + -0x18);
  if (param_2 == 8) {
                    /* try { // try from 006280b8 to 007280bb has its CatchHandler @ 006285e8 */
    *(uint *)((long)param_1 + lVar1 + 0x18) =
         *(uint *)((long)param_1 + lVar1 + 0x18) & 0xffffffb5 | 0x40;
    return;
  }
  if (param_2 != 10) {
    uVar2 = 8;
                    /* try { // try from 00628070 to 00728073 has its CatchHandler @ 00628608 */
    if (param_2 != 0x10) {
      uVar2 = 0;
    }
    *(uint *)((long)param_1 + lVar1 + 0x18) =
         uVar2 | *(uint *)((long)param_1 + lVar1 + 0x18) & 0xffffffb5;
    return;
  }
                    /* try { // try from 00628094 to 00728097 has its CatchHandler @ 006285f8 */
  *(uint *)((long)param_1 + lVar1 + 0x18) = *(uint *)((long)param_1 + lVar1 + 0x18) & 0xffffffb5 | 2
  ;
  return;
}


