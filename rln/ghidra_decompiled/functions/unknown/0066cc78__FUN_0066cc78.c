/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066cc78
 * Function: FUN_0066cc78
 * Signature: undefined FUN_0066cc78(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066cc78(undefined8 param_1,long *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(*param_2 + -0x18);
  if (param_3 <= uVar2) {
                    /* try { // try from 0066cc94 to 0076cc9f has its CatchHandler @ 0066cd98 */
                    /* try { // try from 0066cca0 to 0076cdb7 has its CatchHandler @ 0066cc30 */
    uVar1 = uVar2 - param_3;
    if (param_4 < uVar2 - param_3) {
      uVar1 = param_4;
    }
    FUN_0066cb34(param_1,*param_2 + param_3 * 4,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",&LAB_0069fa60,param_3,uVar2)
  ;
}


