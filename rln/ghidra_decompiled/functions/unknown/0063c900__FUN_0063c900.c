/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063c900
 * Function: FUN_0063c900
 * Signature: undefined FUN_0063c900(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063c900(undefined8 param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_3;
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return;
    }
    lVar4 = *plVar5;
    if (lVar4 == 0) {
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar3 = DAT_007fbdf8 + 1;
        DAT_007fbdf8 = iVar3;
      }
      else {
        do {
          iVar3 = DAT_007fbdf8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x7fbdf8,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            DAT_007fbdf8 = DAT_007fbdf8 + 1;
          }
        } while (cVar1 != '\0');
        iVar3 = iVar3 + 1;
      }
      lVar4 = (long)iVar3;
      *plVar5 = lVar4;
    }
    if ((*(long *)(param_2 + 0x10) - 1U < lVar4 - 1U) ||
       (*(long *)(*(long *)(param_2 + 8) + (lVar4 - 1U) * 8) == 0)) break;
    FUN_0063c520(param_1);
    param_3 = param_3 + 1;
    plVar5 = (long *)*param_3;
  }
                    /* catch() { ... } // from try @ 0063bc3c with catch @ 0063c9b8 */
                    /* WARNING: Subroutine does not return */
  FUN_00665808("locale::_Impl::_M_replace_facet");
}


