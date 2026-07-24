/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006692d8
 * Function: FUN_006692d8
 * Signature: undefined FUN_006692d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006692d8(undefined8 param_1,long *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
                    /* try { // try from 006692d8 to 007692e3 has its CatchHandler @ 00669614 */
                    /* try { // try from 006692e4 to 0076930b has its CatchHandler @ 00669290 */
  uVar2 = *(ulong *)(*param_2 + -0x18);
  if (param_3 <= uVar2) {
    uVar1 = uVar2 - param_3;
    if (param_4 < uVar2 - param_3) {
      uVar1 = param_4;
    }
    FUN_0066918c(param_1,*param_2 + param_3,uVar1);
    return;
  }
                    /* try { // try from 0066930c to 0076931b has its CatchHandler @ 0066960c */
                    /* try { // try from 0066931c to 00769327 has its CatchHandler @ 00669608 */
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",&LAB_0069fa60,param_3,uVar2)
  ;
}


