/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00615878
 * Function: CPVRTString::operator=
 * Signature: undefined __thiscall operator=(CPVRTString * this, char param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::TEMPNAMEPLACEHOLDERVALUE(char) */

CPVRTString * __thiscall CPVRTString::operator=(CPVRTString *this,char param_1)

{
  void *__ptr;
  size_t __n;
  
                    /* try { // try from 00615890 to 007158b7 has its CatchHandler @ 00615c64 */
  __ptr = *(void **)(this + 8);
  __n = (size_t)param_1;
  if (*(ulong *)(this + 0x18) <= __n) {
    free(__ptr);
    __ptr = malloc(__n + 1);
    *(void **)(this + 8) = __ptr;
    *(size_t *)(this + 0x18) = __n + 1;
  }
  *(size_t *)(this + 0x10) = __n;
  memset(__ptr,1,__n);
  *(undefined1 *)(*(long *)(this + 8) + *(long *)(this + 0x10)) = 0;
                    /* try { // try from 006158d8 to 007158ff has its CatchHandler @ 00615dbc */
  return this;
}


