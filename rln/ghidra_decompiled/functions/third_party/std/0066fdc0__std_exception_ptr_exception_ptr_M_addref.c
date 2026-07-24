/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fdc0
 * Function: std::__exception_ptr::exception_ptr::_M_addref
 * Signature: undefined __thiscall _M_addref(exception_ptr * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::__exception_ptr::exception_ptr::_M_addref() */

void __thiscall std::__exception_ptr::exception_ptr::_M_addref(exception_ptr *this)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  
  if (*(long *)this != 0) {
    piVar3 = (int *)(*(long *)this + -0x80);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}


