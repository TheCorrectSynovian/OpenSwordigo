/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064a924
 * Function: FUN_0064a924
 * Signature: undefined FUN_0064a924(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064a924(exception *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
                    /* try { // try from 0064a940 to 0074a967 has its CatchHandler @ 0064a9f0 */
  *(undefined ***)param_1 = &PTR_FUN_007b7560;
  lVar4 = *(long *)(param_1 + 8);
  if ((undefined *)(lVar4 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 0064a710 with catch @ 0064a974 */
                    /* catch() { ... } // from try @ 0064a668 with catch @ 0064a978 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar3 = *(int *)(lVar4 + -8);
      *(int *)(lVar4 + -8) = iVar3 + -1;
    }
    else {
      piVar5 = (int *)(lVar4 + -8);
      do {
        iVar3 = *piVar5;
                    /* catch() { ... } // from try @ 0064a7cc with catch @ 0064a98c
                       catch() { ... } // from try @ 0064a864 with catch @ 0064a98c */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar3 < 1) {
                    /* catch() { ... } // from try @ 0064a6ac with catch @ 0064a99c */
      operator_delete((undefined *)(lVar4 + -0x18));
    }
  }
  std::exception::~exception(param_1);
  operator_delete(param_1);
                    /* try { // try from 0064a968 to 0074a9bf has its CatchHandler @ 0064a508 */
                    /* catch() { ... } // from try @ 0064a744 with catch @ 0064a96c */
                    /* catch() { ... } // from try @ 0064a724 with catch @ 0064a970 */
  return;
}


