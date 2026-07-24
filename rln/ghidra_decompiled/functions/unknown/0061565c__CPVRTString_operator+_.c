/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061565c
 * Function: CPVRTString::operator+=
 * Signature: undefined __thiscall operator+=(CPVRTString * this, char param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::TEMPNAMEPLACEHOLDERVALUE(char) */

CPVRTString * __thiscall CPVRTString::operator+=(CPVRTString *this,char param_1)

{
  ulong __size;
  void *__src;
  long lVar1;
  void *__dest;
  undefined1 *__s;
  size_t __n;
  
                    /* try { // try from 00615668 to 00715673 has its CatchHandler @ 00615cc8 */
                    /* try { // try from 00615674 to 00715733 has its CatchHandler @ 00615dd0 */
  __src = *(void **)(this + 8);
  lVar1 = *(long *)(this + 0x10);
  __n = (size_t)param_1;
  __size = __n + lVar1 + 1;
  __dest = __src;
  if (*(ulong *)(this + 0x18) < __size) {
    __dest = malloc(__size);
    *(ulong *)(this + 0x18) = __size;
    memmove(__dest,__src,lVar1 + 1);
  }
  __s = (undefined1 *)((long)__dest + lVar1);
  if (param_1 != '\0') {
    memset(__s,1,__n);
    __s = (undefined1 *)((long)__dest + lVar1 + __n);
  }
  *__s = 0;
  *(size_t *)(this + 0x10) = *(long *)(this + 0x10) + __n;
  if (__dest != *(void **)(this + 8)) {
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
  return this;
}


