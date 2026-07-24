/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066a3f4
 * Function: FUN_0066a3f4
 * Signature: undefined FUN_0066a3f4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


size_t * FUN_0066a3f4(size_t *param_1,undefined8 param_2,long param_3)

{
  size_t *psVar1;
  size_t *__dest;
  ulong uVar2;
  size_t __n;
  size_t sVar3;
  ulong uVar4;
  
  uVar2 = param_1[1];
  uVar4 = param_3 + *param_1;
                    /* try { // try from 0066a420 to 0076a423 has its CatchHandler @ 0066a46c */
  if (0x3ffffffffffffff9 < uVar4) {
                    /* try { // try from 0066a51c to 0076a543 has its CatchHandler @ 0066a578 */
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_S_create");
  }
                    /* try { // try from 0066a424 to 0076a4cb has its CatchHandler @ 0066a36c */
  if ((uVar2 < uVar4) && (uVar4 < uVar2 << 1)) {
    uVar4 = uVar2 << 1;
  }
  if ((0x1000 < uVar4 + 0x39) && (uVar2 < uVar4)) {
    uVar4 = (uVar4 + 0x1000) - (uVar4 + 0x39 & 0xfff);
    if (0x3ffffffffffffff9 < uVar4) {
      uVar4 = 0x3ffffffffffffff9;
    }
  }
                    /* catch() { ... } // from try @ 0066a420 with catch @ 0066a46c */
  psVar1 = operator_new(uVar4 + 0x19);
  __n = *param_1;
  __dest = psVar1 + 3;
  psVar1[1] = uVar4;
  *(undefined4 *)(psVar1 + 2) = 0;
  sVar3 = 0;
  if (__n != 0) {
    __dest = psVar1 + 3;
    if (__n == 1) {
      *(char *)(psVar1 + 3) = (char)param_1[3];
                    /* catch() { ... } // from try @ 0066a5d0 with catch @ 0066a4cc */
      sVar3 = *param_1;
    }
    else {
      __dest = memcpy(__dest,param_1 + 3,__n);
      sVar3 = *param_1;
    }
  }
  if (psVar1 != &DAT_007fd2e0) {
    *psVar1 = sVar3;
    *(undefined1 *)((long)psVar1 + sVar3 + 0x18) = 0;
    return __dest;
  }
  return __dest;
}


