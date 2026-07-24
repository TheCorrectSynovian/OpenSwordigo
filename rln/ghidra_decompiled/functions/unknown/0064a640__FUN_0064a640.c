/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064a640
 * Function: FUN_0064a640
 * Signature: undefined FUN_0064a640(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064a640(exception *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_007b7650;
  lVar4 = *(long *)(param_1 + 8);
                    /* try { // try from 0064a668 to 0074a66b has its CatchHandler @ 0064a978 */
                    /* try { // try from 0064a66c to 0074a6ab has its CatchHandler @ 0064a508 */
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
                    /* try { // try from 0064a6ac to 0074a6d3 has its CatchHandler @ 0064a99c */
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


