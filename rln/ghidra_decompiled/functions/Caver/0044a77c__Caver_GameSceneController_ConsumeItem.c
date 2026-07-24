/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044a77c
 * Function: Caver::GameSceneController::ConsumeItem
 * Signature: undefined __thiscall ConsumeItem(GameSceneController * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::ConsumeItem(boost::shared_ptr<Caver::Item> const&) */

void __thiscall
Caver::GameSceneController::ConsumeItem(GameSceneController *this,shared_ptr *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long local_48 [2];
  long local_38;
  
                    /* try { // try from 0044a784 to 0054a793 has its CatchHandler @ 0044cd88 */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 0044a7a8 to 0054a7b7 has its CatchHandler @ 0044d838 */
  FUN_0066a528(local_48,*(long *)param_1 + 8);
  iVar5 = FUN_006689e0(local_48,"healingpotion");
                    /* try { // try from 0044a7d0 to 0054a7df has its CatchHandler @ 0044cd88 */
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if ((iVar5 == 0) && (lVar6 = *(long *)(this + 0xf0), *(char *)(lVar6 + 0x78) == '\0')) {
    uVar1 = *(int *)(lVar6 + 0x80) + 10;
                    /* try { // try from 0044a7f4 to 0054a807 has its CatchHandler @ 0044d834 */
    if ((int)*(uint *)(lVar6 + 0x7c) <= (int)uVar1) {
      uVar1 = *(uint *)(lVar6 + 0x7c);
    }
    *(uint *)(lVar6 + 0x80) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0044a870 to 0054a87f has its CatchHandler @ 0044cd80 */
    __stack_chk_fail();
  }
                    /* try { // try from 0044a824 to 0054a833 has its CatchHandler @ 0044cd80 */
  return;
}


