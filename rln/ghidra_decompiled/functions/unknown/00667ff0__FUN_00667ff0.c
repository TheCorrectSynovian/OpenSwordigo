/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667ff0
 * Function: FUN_00667ff0
 * Signature: undefined FUN_00667ff0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00667ff0(long *param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  
                    /* catch() { ... } // from try @ 0066728c with catch @ 00667ff0 */
                    /* catch() { ... } // from try @ 0066716c with catch @ 00667ff4 */
                    /* catch() { ... } // from try @ 00666cf0 with catch @ 00667ff8 */
                    /* catch() { ... } // from try @ 0066751c with catch @ 00667ffc
                       catch() { ... } // from try @ 006676b0 with catch @ 00667ffc
                       catch() { ... } // from try @ 0066788c with catch @ 00667ffc
                       catch() { ... } // from try @ 006679c0 with catch @ 00667ffc
                       catch() { ... } // from try @ 00667c38 with catch @ 00667ffc
                       catch() { ... } // from try @ 00667dd4 with catch @ 00667ffc */
                    /* catch() { ... } // from try @ 00667220 with catch @ 00668008 */
                    /* catch() { ... } // from try @ 006669f8 with catch @ 0066800c */
                    /* catch() { ... } // from try @ 006670cc with catch @ 00668010 */
  __n = strlen(param_2);
                    /* catch() { ... } // from try @ 00666884 with catch @ 00668014 */
  lVar4 = *param_1;
                    /* catch() { ... } // from try @ 00666e60 with catch @ 00668018
                       catch() { ... } // from try @ 00666ef8 with catch @ 00668018
                       catch() { ... } // from try @ 00666f90 with catch @ 00668018
                       catch() { ... } // from try @ 00667080 with catch @ 00668018 */
                    /* catch() { ... } // from try @ 006669d4 with catch @ 0066801c
                       catch() { ... } // from try @ 00666c1c with catch @ 0066801c
                       catch() { ... } // from try @ 00666df4 with catch @ 0066801c
                       catch() { ... } // from try @ 006670f8 with catch @ 0066801c
                       catch() { ... } // from try @ 00667184 with catch @ 0066801c
                       catch() { ... } // from try @ 00667258 with catch @ 0066801c
                       catch() { ... } // from try @ 00667354 with catch @ 0066801c */
                    /* catch() { ... } // from try @ 00667d34 with catch @ 00668020 */
                    /* catch() { ... } // from try @ 00667d20 with catch @ 00668024 */
  uVar3 = *(ulong *)(lVar4 + -0x18);
                    /* catch() { ... } // from try @ 00667cd4 with catch @ 00668028 */
                    /* catch() { ... } // from try @ 00667cc0 with catch @ 0066802c */
  if (uVar3 < __n) {
                    /* catch() { ... } // from try @ 00667e94 with catch @ 00668030 */
                    /* catch() { ... } // from try @ 00667d88 with catch @ 00668034 */
                    /* catch() { ... } // from try @ 00667bf0 with catch @ 00668038 */
                    /* catch() { ... } // from try @ 00667bf8 with catch @ 0066803c */
    return 0xffffffffffffffff;
  }
                    /* catch() { ... } // from try @ 006674d4 with catch @ 00668040 */
  uVar3 = uVar3 - __n;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  do {
    iVar2 = memcmp((void *)(lVar4 + uVar3),param_2,__n);
    if (iVar2 == 0) {
                    /* try { // try from 00668070 to 0076818f has its CatchHandler @ 006681b0 */
      return uVar3;
    }
                    /* catch() { ... } // from try @ 006674b0 with catch @ 00668050 */
    bVar1 = uVar3 != 0;
    uVar3 = uVar3 - 1;
  } while (bVar1);
                    /* catch() { ... } // from try @ 00667ae4 with catch @ 0066808c */
                    /* catch() { ... } // from try @ 0066797c with catch @ 00668090 */
  return 0xffffffffffffffff;
}


