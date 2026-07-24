/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fe424
 * Function: FUN_005fe424
 * Signature: undefined FUN_005fe424(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fe424(long *param_1,int *param_2)

{
  if (*param_2 == 0xe) {
                    /* try { // try from 005fe468 to 006fe46f has its CatchHandler @ 005fee4c */
    *(uint *)(*(long *)(*param_1 + 0x18) + (long)param_2[2] * 4) =
         *(uint *)(*(long *)(*param_1 + 0x18) + (long)param_2[2] * 4) & 0x7fffff | 0x1000000;
    *param_2 = 0xb;
  }
  else {
                    /* try { // try from 005fe434 to 006fe45b has its CatchHandler @ 005fef04 */
    if (*param_2 == 0xd) {
      *param_2 = 0xc;
      param_2[2] = *(uint *)(*(long *)(*param_1 + 0x18) + (long)param_2[2] * 4) >> 6 & 0xff;
      return;
    }
  }
  return;
}


