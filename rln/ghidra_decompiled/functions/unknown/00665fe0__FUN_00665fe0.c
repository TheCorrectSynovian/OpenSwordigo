/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00665fe0
 * Function: FUN_00665fe0
 * Signature: undefined FUN_00665fe0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00665fe0(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long local_8;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
            (&local_8,*(long **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10));
  if ((undefined *)(local_8 + -0x18) != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar3 = *(int *)(local_8 + -8);
      *(int *)(local_8 + -8) = iVar3 + -1;
    }
    else {
      piVar4 = (int *)(local_8 + -8);
      do {
        iVar3 = *piVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = iVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar3 < 1) {
      operator_delete((undefined *)(local_8 + -0x18));
    }
  }
  return local_8;
}


