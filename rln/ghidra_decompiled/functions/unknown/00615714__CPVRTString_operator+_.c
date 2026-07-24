/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615714
 * Function: CPVRTString::operator+=
 * Signature: undefined __thiscall operator+=(CPVRTString * this, char * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::TEMPNAMEPLACEHOLDERVALUE(char const*) */

CPVRTString * __thiscall CPVRTString::operator+=(CPVRTString *this,char *param_1)

{
  ulong __size;
  size_t __n;
  size_t __n_00;
  void *__dest;
  long lVar1;
  void *__src;
  
  __n_00 = strlen(param_1);
  __n = *(size_t *)(this + 0x10);
  __src = *(void **)(this + 8);
  __size = __n + __n_00 + 1;
  __dest = __src;
  if (*(ulong *)(this + 0x18) < __size) {
                    /* try { // try from 00615758 to 00715763 has its CatchHandler @ 00615cc4 */
    __dest = malloc(__size);
                    /* try { // try from 00615764 to 00715847 has its CatchHandler @ 00615dd0 */
    *(ulong *)(this + 0x18) = __size;
    memmove(__dest,__src,__n);
    *(undefined1 *)((long)__dest + __n + __n_00) = 0;
  }
  memmove((void *)((long)__dest + __n),param_1,__n_00);
  lVar1 = *(long *)(this + 0x10);
  *(size_t *)(this + 0x10) = lVar1 + __n_00;
  *(undefined1 *)((long)__dest + lVar1 + __n_00) = 0;
  if (__dest != *(void **)(this + 8)) {
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
  return this;
}


