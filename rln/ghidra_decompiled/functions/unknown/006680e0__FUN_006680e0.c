/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006680e0
 * Function: FUN_006680e0
 * Signature: undefined FUN_006680e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_006680e0(long *param_1,void *param_2,ulong param_3,size_t param_4)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  
                    /* catch() { ... } // from try @ 00667770 with catch @ 006680e8 */
                    /* catch() { ... } // from try @ 00666a98 with catch @ 006680f4 */
                    /* catch() { ... } // from try @ 00667040 with catch @ 006680f8 */
                    /* catch() { ... } // from try @ 00666f50 with catch @ 006680fc */
                    /* catch() { ... } // from try @ 00667608 with catch @ 00668100
                       catch() { ... } // from try @ 00667670 with catch @ 00668100 */
  if (param_4 != 0) {
    lVar2 = *param_1;
    uVar3 = *(ulong *)(lVar2 + -0x18);
    for (; param_3 < uVar3; param_3 = param_3 + 1) {
      pvVar1 = memchr(param_2,(uint)*(byte *)(lVar2 + param_3),param_4);
                    /* catch() { ... } // from try @ 00666bd0 with catch @ 0066812c */
      if (pvVar1 != (void *)0x0) {
                    /* catch() { ... } // from try @ 006672fc with catch @ 00668154 */
                    /* catch() { ... } // from try @ 00666ac4 with catch @ 00668158
                       catch() { ... } // from try @ 00666b48 with catch @ 00668158 */
                    /* catch() { ... } // from try @ 00666990 with catch @ 0066815c */
                    /* catch() { ... } // from try @ 006668fc with catch @ 00668160 */
                    /* catch() { ... } // from try @ 00666da4 with catch @ 00668164 */
                    /* catch() { ... } // from try @ 00666924 with catch @ 00668168 */
        return param_3;
      }
                    /* catch() { ... } // from try @ 00667440 with catch @ 00668130 */
    }
  }
                    /* catch() { ... } // from try @ 00666eb8 with catch @ 0066814c */
                    /* catch() { ... } // from try @ 00666acc with catch @ 00668150 */
  return 0xffffffffffffffff;
}


