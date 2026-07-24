/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006158e4
 * Function: CPVRTString::operator=
 * Signature: undefined __thiscall operator=(CPVRTString * this, char * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::TEMPNAMEPLACEHOLDERVALUE(char const*) */

CPVRTString * __thiscall CPVRTString::operator=(CPVRTString *this,char *param_1)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_1);
                    /* try { // try from 0061590c to 00715913 has its CatchHandler @ 00615cc0 */
  if (__n < *(ulong *)(this + 0x18)) {
    __dest = *(void **)(this + 8);
  }
  else {
                    /* try { // try from 00615924 to 00715933 has its CatchHandler @ 00615cbc */
    __dest = malloc(__n + 1);
    *(size_t *)(this + 0x18) = __n + 1;
  }
                    /* try { // try from 00615934 to 00715a17 has its CatchHandler @ 00615dd0 */
  *(size_t *)(this + 0x10) = __n;
  memmove(__dest,param_1,__n);
  *(undefined1 *)((long)__dest + *(long *)(this + 0x10)) = 0;
  if (__dest != *(void **)(this + 8)) {
    free(*(void **)(this + 8));
    *(void **)(this + 8) = __dest;
  }
  return this;
}


