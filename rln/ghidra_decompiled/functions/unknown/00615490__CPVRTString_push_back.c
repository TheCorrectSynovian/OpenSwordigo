/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615490
 * Function: CPVRTString::push_back
 * Signature: undefined __thiscall push_back(CPVRTString * this, char param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::push_back(char) */

void __thiscall CPVRTString::push_back(CPVRTString *this,char param_1)

{
  ulong __size;
  void *__src;
  long lVar1;
  void *__dest;
  undefined1 *__s;
  size_t __n;
  
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
                    /* try { // try from 0061550c to 00715513 has its CatchHandler @ 00615d3c */
  *__s = 0;
                    /* try { // try from 00615514 to 0071551b has its CatchHandler @ 00615db4 */
                    /* try { // try from 0061551c to 0071552f has its CatchHandler @ 00615d38 */
  *(size_t *)(this + 0x10) = *(long *)(this + 0x10) + __n;
  if (__dest != *(void **)(this + 8)) {
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
                    /* try { // try from 00615530 to 00715543 has its CatchHandler @ 00615ccc */
  return;
}


