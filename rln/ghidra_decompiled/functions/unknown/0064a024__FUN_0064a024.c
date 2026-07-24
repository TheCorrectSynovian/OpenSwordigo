/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064a024
 * Function: FUN_0064a024
 * Signature: undefined FUN_0064a024(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064a024(exception *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_007b7650;
  lVar4 = *(long *)(param_1 + 8);
  if ((undefined *)(lVar4 + -0x18) != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar3 = *(int *)(lVar4 + -8);
      *(int *)(lVar4 + -8) = iVar3 + -1;
    }
    else {
      piVar5 = (int *)(lVar4 + -8);
      do {
        iVar3 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar3 < 1) {
      operator_delete((undefined *)(lVar4 + -0x18));
    }
  }
  std::exception::~exception(param_1);
  return;
}


