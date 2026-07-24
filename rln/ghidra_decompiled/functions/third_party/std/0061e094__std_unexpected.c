/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e094
 * Function: std::unexpected
 * Signature: undefined unexpected(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::unexpected() */

void std::unexpected(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  _func_void *p_Var5;
  int *piVar6;
  long extraout_x1;
  
  p_Var5 = (_func_void *)get_unexpected();
  uVar4 = __cxxabiv1::__unexpected(p_Var5);
  if (1 < uVar4) {
                    /* WARNING: Subroutine does not return */
    __cxxabiv1::__terminate(*(_func_void **)(extraout_x1 + -0x38));
  }
  piVar6 = (int *)(extraout_x1 + -0x60);
  do {
    iVar1 = *piVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar3) {
      *piVar6 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (*(code **)(extraout_x1 + -0x48) != (code *)0x0) {
      (**(code **)(extraout_x1 + -0x48))(extraout_x1 + 0x20);
    }
    __cxa_free_exception(extraout_x1 + 0x20);
    return;
  }
  return;
}


