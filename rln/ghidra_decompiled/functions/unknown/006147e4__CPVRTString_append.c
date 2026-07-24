/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006147e4
 * Function: CPVRTString::append
 * Signature: undefined __thiscall append(CPVRTString * this, ulong param_1, char param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::append(unsigned long, char) */

CPVRTString * __thiscall CPVRTString::append(CPVRTString *this,ulong param_1,char param_2)

{
  ulong __size;
  long lVar1;
  void *__dest;
  undefined1 *__s;
  void *__src;
  
                    /* try { // try from 006147fc to 007148db has its CatchHandler @ 006148e4 */
  lVar1 = *(long *)(this + 0x10);
  __src = *(void **)(this + 8);
  __size = param_1 + lVar1 + 1;
  __dest = __src;
  if (*(ulong *)(this + 0x18) < __size) {
    __dest = malloc(__size);
                    /* catch() { ... } // from try @ 006132cc with catch @ 00614828 */
    *(ulong *)(this + 0x18) = __size;
    memmove(__dest,__src,lVar1 + 1);
  }
  __s = (undefined1 *)((long)__dest + lVar1);
  if (param_1 != 0) {
    memset(__s,(uint)(byte)param_2,param_1);
    __s = (undefined1 *)((long)__dest + lVar1 + param_1);
  }
  *__s = 0;
                    /* catch() { ... } // from try @ 0061327c with catch @ 00614864 */
                    /* catch() { ... } // from try @ 006130c8 with catch @ 00614868
                       catch() { ... } // from try @ 0061316c with catch @ 00614868 */
                    /* catch() { ... } // from try @ 0061309c with catch @ 0061486c
                       catch() { ... } // from try @ 00613194 with catch @ 0061486c */
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_1;
  if (__dest != *(void **)(this + 8)) {
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
  return this;
}


