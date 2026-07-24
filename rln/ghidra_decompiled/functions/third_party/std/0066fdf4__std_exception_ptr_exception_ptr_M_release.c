/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fdf4
 * Function: std::__exception_ptr::exception_ptr::_M_release
 * Signature: undefined __thiscall _M_release(exception_ptr * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::__exception_ptr::exception_ptr::_M_release() */

void __thiscall std::__exception_ptr::exception_ptr::_M_release(exception_ptr *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
    piVar5 = (int *)(lVar4 + -0x80);
    do {
      iVar1 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      if (*(code **)(lVar4 + -0x68) != (code *)0x0) {
        (**(code **)(lVar4 + -0x68))(*(undefined8 *)this);
      }
      __cxa_free_exception(*(undefined8 *)this);
      *(undefined8 *)this = 0;
    }
  }
                    /* try { // try from 0066fe44 to 0076fe93 has its CatchHandler @ 0066fe44
                       catch() { ... } // from try @ 0066fe44 with catch @ 0066fe44
                       catch() { ... } // from try @ 0066ffd4 with catch @ 0066fe44 */
  return;
}


