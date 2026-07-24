/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615d18
 * Function: operator+
 * Signature: undefined __cdecl operator+(char * param_1, CPVRTString * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* TEMPNAMEPLACEHOLDERVALUE(char const*, CPVRTString const&) */

void operator+(char *param_1,CPVRTString *param_2)

{
  ulong __size;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  void *__dest;
  void *__dest_00;
  void *pvVar1;
  long *in_x8;
  
                    /* catch() { ... } // from try @ 0061551c with catch @ 00615d38 */
                    /* catch() { ... } // from try @ 0061550c with catch @ 00615d3c */
  __n_01 = strlen(param_1);
                    /* catch() { ... } // from try @ 00615408 with catch @ 00615d40 */
  __dest = malloc(__n_01 + 1);
  memcpy(__dest,param_1,__n_01);
  *(undefined1 *)((long)__dest + __n_01) = 0;
  pvVar1 = *(void **)(param_2 + 8);
  __n_00 = *(size_t *)(param_2 + 0x10);
  __n = __n_00 + __n_01;
  __size = __n + 1;
  if (__n_01 + 1 < __size) {
    __dest_00 = malloc(__size);
    memcpy(__dest_00,__dest,__n_01);
    *(undefined1 *)((long)__dest_00 + __n) = 0;
    memmove((void *)((long)__dest_00 + __n_01),pvVar1,__n_00);
    *(undefined1 *)((long)__dest_00 + __n) = 0;
                    /* catch() { ... } // from try @ 006153f4 with catch @ 00615db0 */
    if (__dest_00 != __dest) {
                    /* catch() { ... } // from try @ 00615514 with catch @ 00615db4
                       catch() { ... } // from try @ 00615b28 with catch @ 00615db4 */
                    /* catch() { ... } // from try @ 00615a1c with catch @ 00615db8
                       catch() { ... } // from try @ 00615aa8 with catch @ 00615db8 */
      free(__dest);
      __dest = __dest_00;
                    /* catch() { ... } // from try @ 0061584c with catch @ 00615dbc
                       catch() { ... } // from try @ 006158d8 with catch @ 00615dbc */
                    /* catch() { ... } // from try @ 00615434 with catch @ 00615dc0 */
    }
  }
  else {
    memmove((undefined1 *)((long)__dest + __n_01),pvVar1,__n_00);
                    /* catch() { ... } // from try @ 00615568 with catch @ 00615dd0
                       catch() { ... } // from try @ 00615674 with catch @ 00615dd0
                       catch() { ... } // from try @ 00615764 with catch @ 00615dd0
                       catch() { ... } // from try @ 00615934 with catch @ 00615dd0 */
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
  in_x8[1] = 0;
  pvVar1 = malloc(__size);
                    /* try { // try from 00615df4 to 00715e1b has its CatchHandler @ 00615e24 */
  in_x8[2] = __n;
  in_x8[3] = __size;
  memcpy(pvVar1,__dest,__n);
  *(undefined1 *)((long)pvVar1 + __n) = 0;
  if (pvVar1 != (void *)0x0) {
    in_x8[1] = (long)pvVar1;
  }
                    /* try { // try from 00615e1c to 00715e27 has its CatchHandler @ 0061538c */
                    /* catch() { ... } // from try @ 00615c38 with catch @ 00615e24
                       catch() { ... } // from try @ 00615df4 with catch @ 00615e24 */
  free(__dest);
  return;
}


