/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615b1c
 * Function: operator+
 * Signature: undefined __cdecl operator+(CPVRTString * param_1, char * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* TEMPNAMEPLACEHOLDERVALUE(CPVRTString const&, char const*) */

void operator+(CPVRTString *param_1,char *param_2)

{
  ulong __size;
  size_t __n;
  size_t __n_00;
  void *__dest;
  size_t __n_01;
  void *pvVar1;
  long *in_x8;
  
                    /* try { // try from 00615b28 to 00715b2b has its CatchHandler @ 00615db4 */
                    /* try { // try from 00615b2c to 00715c37 has its CatchHandler @ 0061538c */
  pvVar1 = *(void **)(param_1 + 8);
  __n_00 = *(size_t *)(param_1 + 0x10);
  __dest = malloc(__n_00 + 1);
  memmove(__dest,pvVar1,__n_00);
  *(undefined1 *)((long)__dest + __n_00) = 0;
  __n_01 = strlen(param_2);
  __n = __n_01 + __n_00;
  __size = __n + 1;
  if (__n_00 + 1 < __size) {
    pvVar1 = malloc(__size);
    memcpy(pvVar1,__dest,__n_00);
    memcpy((void *)((long)pvVar1 + __n_00),param_2,__n_01);
    *(undefined1 *)((long)pvVar1 + __n) = 0;
    if (pvVar1 != __dest) {
      free(__dest);
      __dest = pvVar1;
    }
  }
  else {
    memcpy((undefined1 *)((long)__dest + __n_00),param_2,__n_01);
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
  in_x8[1] = 0;
  pvVar1 = malloc(__size);
  in_x8[2] = __n;
  in_x8[3] = __size;
  memcpy(pvVar1,__dest,__n);
  *(undefined1 *)((long)pvVar1 + __n) = 0;
  if (pvVar1 != (void *)0x0) {
    in_x8[1] = (long)pvVar1;
  }
                    /* catch() { ... } // from try @ 00615a60 with catch @ 00615c14 */
  free(__dest);
  return;
}


