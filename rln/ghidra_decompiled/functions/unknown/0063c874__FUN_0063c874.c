/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063c874
 * Function: FUN_0063c874
 * Signature: undefined FUN_0063c874(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063c874(undefined8 param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *param_3;
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
    *param_3 = lVar4;
  }
  if ((lVar4 - 1U <= *(long *)(param_2 + 0x10) - 1U) &&
     (lVar4 = *(long *)(*(long *)(param_2 + 8) + (lVar4 - 1U) * 8), lVar4 != 0)) {
    FUN_0063c520(param_1,param_3,lVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00665808("locale::_Impl::_M_replace_facet");
}


