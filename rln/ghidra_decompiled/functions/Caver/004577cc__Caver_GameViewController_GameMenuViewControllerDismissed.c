/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004577cc
 * Function: Caver::GameViewController::GameMenuViewControllerDismissed
 * Signature: undefined __cdecl GameMenuViewControllerDismissed(GameMenuViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::GameMenuViewControllerDismissed(Caver::GameMenuViewController*) */

void Caver::GameViewController::GameMenuViewControllerDismissed(GameMenuViewController *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  string *psVar6;
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 004577d0 to 005577d3 has its CatchHandler @ 00457888 */
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  psVar6 = *(string **)(param_1 + 0xd8);
  FUN_0066a528(local_38,*(long *)(param_1 + 0xa8) + 400);
                    /* try { // try from 00457804 to 00557807 has its CatchHandler @ 0045785c */
  GameSceneView::SetCurrentMenuTab(psVar6);
                    /* try { // try from 00457808 to 0055787b has its CatchHandler @ 0045764c */
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar4 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar4;
      *piVar4 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 00457804 with catch @ 0045785c */
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
                    /* try { // try from 0045787c to 005578af has its CatchHandler @ 004578b8 */
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


