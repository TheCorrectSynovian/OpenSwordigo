/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006006c4
 * Function: FUN_006006c4
 * Signature: undefined FUN_006006c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006006c4(undefined8 param_1)

{
  size_t sVar1;
  long lVar2;
  char *__s;
  long lVar3;
  
                    /* try { // try from 006006c4 to 007006d7 has its CatchHandler @ 006008b8 */
  lVar3 = 0;
  do {
    __s = (&PTR_DAT_007d8c98)[lVar3];
    sVar1 = strlen(__s);
                    /* try { // try from 006006f8 to 007006fb has its CatchHandler @ 0060095c */
                    /* try { // try from 006006fc to 007008db has its CatchHandler @ 006005d0 */
    lVar2 = FUN_005f356c(param_1,__s,sVar1);
    lVar3 = lVar3 + 1;
    *(char *)(lVar2 + 10) = (char)lVar3;
    *(byte *)(lVar2 + 9) = *(byte *)(lVar2 + 9) | 0x20;
  } while (lVar3 != 0x15);
  return;
}


