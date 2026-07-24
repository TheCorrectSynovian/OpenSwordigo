/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615c34
 * Function: operator+
 * Signature: undefined __cdecl operator+(CPVRTString * param_1, char param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* TEMPNAMEPLACEHOLDERVALUE(CPVRTString const&, char) */

void operator+(CPVRTString *param_1,char param_2)

{
  size_t __size;
  ulong __size_00;
  size_t __n;
  void *__dest;
  void *pvVar1;
  long *in_x8;
  
                    /* try { // try from 00615c38 to 00715caf has its CatchHandler @ 00615e24 */
  pvVar1 = *(void **)(param_1 + 8);
  __n = *(size_t *)(param_1 + 0x10);
  __size = __n + 1;
  __dest = malloc(__size);
                    /* catch() { ... } // from try @ 00615890 with catch @ 00615c64 */
  memmove(__dest,pvVar1,__n);
  __size_00 = __n + 2;
  *(undefined1 *)((long)__dest + __n) = 0;
  if (__size < __size_00) {
    pvVar1 = malloc(__size_00);
    memcpy(pvVar1,__dest,__n);
    *(char *)((long)pvVar1 + __n) = param_2;
    *(undefined1 *)((long)pvVar1 + __size) = 0;
    if (pvVar1 != __dest) {
                    /* try { // try from 00615cb0 to 00715df3 has its CatchHandler @ 0061538c */
      free(__dest);
      __dest = pvVar1;
                    /* catch() { ... } // from try @ 00615af8 with catch @ 00615cb4 */
                    /* catch() { ... } // from try @ 00615ae0 with catch @ 00615cb8 */
    }
  }
  else {
                    /* catch() { ... } // from try @ 00615924 with catch @ 00615cbc */
    *(char *)((long)__dest + __n) = param_2;
                    /* catch() { ... } // from try @ 0061590c with catch @ 00615cc0 */
    *(undefined1 *)((long)__dest + __size) = 0;
  }
                    /* catch() { ... } // from try @ 00615758 with catch @ 00615cc4 */
                    /* catch() { ... } // from try @ 00615668 with catch @ 00615cc8 */
                    /* catch() { ... } // from try @ 00615530 with catch @ 00615ccc */
  *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
  in_x8[1] = 0;
  pvVar1 = malloc(__size_00);
  in_x8[2] = __size;
  in_x8[3] = __size_00;
  memcpy(pvVar1,__dest,__size);
  *(undefined1 *)((long)pvVar1 + __size) = 0;
  if (pvVar1 != (void *)0x0) {
    in_x8[1] = (long)pvVar1;
  }
  free(__dest);
  return;
}


