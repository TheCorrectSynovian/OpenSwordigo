/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064a484
 * Function: FUN_0064a484
 * Signature: undefined FUN_0064a484(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064a484(exception *param_1)

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
                    /* try { // try from 0064a508 to 0074a667 has its CatchHandler @ 0064a508
                       catch() { ... } // from try @ 0064a508 with catch @ 0064a508
                       catch() { ... } // from try @ 0064a66c with catch @ 0064a508
                       catch() { ... } // from try @ 0064a6d4 with catch @ 0064a508
                       catch() { ... } // from try @ 0064a748 with catch @ 0064a508
                       catch() { ... } // from try @ 0064a88c with catch @ 0064a508
                       catch() { ... } // from try @ 0064a968 with catch @ 0064a508
                       catch() { ... } // from try @ 0064a9e8 with catch @ 0064a508 */
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
  operator_delete(param_1);
  return;
}


