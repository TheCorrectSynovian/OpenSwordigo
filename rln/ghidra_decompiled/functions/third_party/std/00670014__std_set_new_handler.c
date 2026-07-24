/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670014
 * Function: std::set_new_handler
 * Signature: undefined set_new_handler(_func_void * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_new_handler(void (*)()) */

_func_void * std::set_new_handler(_func_void *param_1)

{
  char cVar1;
  bool bVar2;
  _func_void *p_Var3;
  
  do {
    p_Var3 = DAT_007fd320;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x7fd320,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_007fd320 = param_1;
    }
  } while (cVar1 != '\0');
  return p_Var3;
}


