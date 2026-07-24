/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067f9ac
 * Function: __cxa_current_exception_type
 * Signature: undefined __cxa_current_exception_type(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long __cxa_current_exception_type(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)__cxa_get_globals();
  plVar1 = (long *)*plVar1;
  if (plVar1 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    if ((plVar1[10] & 1U) != 0) {
      plVar1 = (long *)(*plVar1 + -0x70);
    }
    lVar2 = *plVar1;
  }
  return lVar2;
}


