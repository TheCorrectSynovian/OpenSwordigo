/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615e28
 * Function: operator+
 * Signature: undefined __cdecl operator+(char param_1, CPVRTString * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* TEMPNAMEPLACEHOLDERVALUE(char, CPVRTString const&) */

void operator+(char param_1,CPVRTString *param_2)

{
  size_t __size;
  size_t __n;
  size_t __n_00;
  char *__ptr;
  char *pcVar1;
  void *pvVar2;
  long *in_x8;
  
                    /* try { // try from 00615e28 to 00715e67 has its CatchHandler @ 00615e28
                       catch() { ... } // from try @ 00615e28 with catch @ 00615e28
                       catch() { ... } // from try @ 00615eec with catch @ 00615e28
                       catch() { ... } // from try @ 0061615c with catch @ 00615e28 */
  __ptr = malloc(2);
  *__ptr = param_1;
  __ptr[1] = '\0';
  pvVar2 = *(void **)(param_2 + 8);
  __n_00 = *(size_t *)(param_2 + 0x10);
  __size = __n_00 + 2;
                    /* try { // try from 00615e68 to 00715e7b has its CatchHandler @ 006161c8 */
  __n = __n_00 + 1;
  if (__size < 3) {
    memmove(__ptr + 1,pvVar2,__n_00);
                    /* try { // try from 00615ec0 to 00715ec7 has its CatchHandler @ 00616134 */
    __ptr[__n] = '\0';
  }
  else {
    pcVar1 = malloc(__size);
                    /* try { // try from 00615e7c to 00715e8f has its CatchHandler @ 00616164 */
    *pcVar1 = param_1;
    pcVar1[__n] = '\0';
    memmove(pcVar1 + 1,pvVar2,__n_00);
    pcVar1[__n] = '\0';
    if (pcVar1 != __ptr) {
      free(__ptr);
      __ptr = pcVar1;
    }
  }
                    /* try { // try from 00615ed0 to 00715ed7 has its CatchHandler @ 006160cc */
  *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
  in_x8[1] = 0;
                    /* try { // try from 00615ed8 to 00715eeb has its CatchHandler @ 00616070 */
  pvVar2 = malloc(__size);
  in_x8[2] = __n;
  in_x8[3] = __size;
                    /* try { // try from 00615eec to 00716157 has its CatchHandler @ 00615e28 */
  memcpy(pvVar2,__ptr,__n);
  *(undefined1 *)((long)pvVar2 + __n) = 0;
  if (pvVar2 != (void *)0x0) {
    in_x8[1] = (long)pvVar2;
  }
  free(__ptr);
  return;
}


