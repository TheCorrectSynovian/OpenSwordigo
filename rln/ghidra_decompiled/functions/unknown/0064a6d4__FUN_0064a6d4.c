/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064a6d4
 * Function: FUN_0064a6d4
 * Signature: undefined FUN_0064a6d4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064a6d4(exception *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
                    /* try { // try from 0064a6d4 to 0074a70f has its CatchHandler @ 0064a508 */
  *(undefined ***)param_1 = &PTR_FUN_007b7560;
  lVar4 = *(long *)(param_1 + 8);
  if ((undefined *)(lVar4 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 0064a724 to 0074a727 has its CatchHandler @ 0064a970 */
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
                    /* try { // try from 0064a744 to 0074a747 has its CatchHandler @ 0064a96c */
                    /* try { // try from 0064a748 to 0074a7cb has its CatchHandler @ 0064a508 */
    if (iVar3 < 1) {
      operator_delete((undefined *)(lVar4 + -0x18));
    }
  }
  std::exception::~exception(param_1);
                    /* try { // try from 0064a710 to 0074a717 has its CatchHandler @ 0064a974 */
  operator_delete(param_1);
  return;
}


