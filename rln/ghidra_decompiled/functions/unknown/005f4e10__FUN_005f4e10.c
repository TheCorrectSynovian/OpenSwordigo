/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f4e10
 * Function: FUN_005f4e10
 * Signature: undefined FUN_005f4e10(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f4e10(long param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  char *__s;
  long lVar4;
  
  lVar4 = 0x128;
  do {
    __s = *(char **)((long)&PTR_DAT_007d8788 + lVar4);
    sVar1 = strlen(__s);
    uVar2 = FUN_005f356c(param_1,__s,sVar1);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4) = uVar2;
                    /* try { // try from 005f4e60 to 006f4e67 has its CatchHandler @ 005f50c0 */
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + lVar4);
    lVar4 = lVar4 + 8;
                    /* try { // try from 005f4e68 to 006f4e77 has its CatchHandler @ 005f5050 */
    *(byte *)(lVar3 + 9) = *(byte *)(lVar3 + 9) | 0x20;
                    /* try { // try from 005f4e78 to 006f4efb has its CatchHandler @ 005f4e04 */
  } while (lVar4 != 0x1b0);
  return;
}


