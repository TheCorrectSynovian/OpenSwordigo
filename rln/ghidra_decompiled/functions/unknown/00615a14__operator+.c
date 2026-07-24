/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615a14
 * Function: operator+
 * Signature: undefined __cdecl operator+(CPVRTString * param_1, CPVRTString * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* TEMPNAMEPLACEHOLDERVALUE(CPVRTString const&, CPVRTString const&) */

void operator+(CPVRTString *param_1,CPVRTString *param_2)

{
  ulong __size;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  void *__dest;
  void *__dest_00;
  void *pvVar1;
  long *in_x8;
  
                    /* try { // try from 00615a1c to 00715a27 has its CatchHandler @ 00615db8 */
  pvVar1 = *(void **)(param_1 + 8);
  __n_00 = *(size_t *)(param_1 + 0x10);
  __dest = malloc(__n_00 + 1);
  memmove(__dest,pvVar1,__n_00);
  *(undefined1 *)((long)__dest + __n_00) = 0;
  pvVar1 = *(void **)(param_2 + 8);
  __n_01 = *(size_t *)(param_2 + 0x10);
                    /* try { // try from 00615a60 to 00715a87 has its CatchHandler @ 00615c14 */
  __n = __n_01 + __n_00;
  __size = __n + 1;
  if (__n_00 + 1 < __size) {
    __dest_00 = malloc(__size);
    memcpy(__dest_00,__dest,__n_00);
    *(undefined1 *)((long)__dest_00 + __n) = 0;
    memmove((void *)((long)__dest_00 + __n_00),pvVar1,__n_01);
    *(undefined1 *)((long)__dest_00 + __n) = 0;
    if (__dest_00 != __dest) {
                    /* try { // try from 00615aa8 to 00715acf has its CatchHandler @ 00615db8 */
      free(__dest);
      __dest = __dest_00;
    }
  }
  else {
    memmove((undefined1 *)((long)__dest + __n_00),pvVar1,__n_01);
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  *in_x8 = (long)(PTR_vtable_007e7538 + 0x10);
  in_x8[1] = 0;
  pvVar1 = malloc(__size);
                    /* try { // try from 00615ae0 to 00715ae7 has its CatchHandler @ 00615cb8 */
  in_x8[2] = __n;
  in_x8[3] = __size;
  memcpy(pvVar1,__dest,__n);
  *(undefined1 *)((long)pvVar1 + __n) = 0;
                    /* try { // try from 00615af8 to 00715b07 has its CatchHandler @ 00615cb4 */
  if (pvVar1 != (void *)0x0) {
    in_x8[1] = (long)pvVar1;
  }
  free(__dest);
  return;
}


