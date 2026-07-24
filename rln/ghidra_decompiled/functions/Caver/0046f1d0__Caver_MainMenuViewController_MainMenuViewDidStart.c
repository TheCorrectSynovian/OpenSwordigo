/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046f1d0
 * Function: Caver::MainMenuViewController::MainMenuViewDidStart
 * Signature: undefined __cdecl MainMenuViewDidStart(MainMenuView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::MainMenuViewDidStart(Caver::MainMenuView*) */

void Caver::MainMenuViewController::MainMenuViewDidStart(MainMenuView *param_1)

{
  long *plVar1;
  long lVar2;
  ProfileSelectionViewController *this;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 0046f1d4 to 0056f1ff has its CatchHandler @ 0046eed8 */
                    /* catch() { ... } // from try @ 0046f160 with catch @ 0046f1d8 */
                    /* catch() { ... } // from try @ 0046ef2c with catch @ 0046f1dc
                       catch() { ... } // from try @ 0046efb4 with catch @ 0046f1dc */
                    /* catch() { ... } // from try @ 0046eff4 with catch @ 0046f1e0
                       catch() { ... } // from try @ 0046f070 with catch @ 0046f1e0 */
                    /* catch() { ... } // from try @ 0046ef0c with catch @ 0046f1e4 */
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 0046f0d0 with catch @ 0046f1e8 */
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(param_1 + 0xd8);
  if (lVar5 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046f298 with catch @ 0046f200
                       catch(type#1 @ 00000000) { ... } // from try @ 0046f318 with catch @ 0046f200
                        */
    this = operator_new(0x68);
    ProfileSelectionViewController::ProfileSelectionViewController(this);
    boost::shared_ptr<Caver::ProfileSelectionViewController>::
    shared_ptr<Caver::ProfileSelectionViewController>
              ((shared_ptr<Caver::ProfileSelectionViewController> *)&local_48,this);
    lVar5 = *(long *)(param_1 + 0xd8);
    plVar1 = *(long **)(param_1 + 0xe0);
    *(long *)(param_1 + 0xd8) = local_48;
    *(long **)(param_1 + 0xe0) = local_40;
    if ((plVar1 != (long *)0x0) && (lVar3 = plVar1[1], plVar1[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      local_48 = lVar5;
      local_40 = plVar1;
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar5 = plVar1[2];
                    /* try { // try from 0046f258 to 0056f263 has its CatchHandler @ 0046f2f4 */
      plVar1[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    lVar5 = *(long *)(param_1 + 0xd8);
    *(MainMenuView **)(lVar5 + 0x50) = param_1 + 0x60;
  }
  pcVar4 = *(code **)(*(long *)param_1 + 0x50);
                    /* try { // try from 0046f28c to 0056f297 has its CatchHandler @ 0046f2f0 */
  local_40 = *(long **)(param_1 + 0xe0);
  if (local_40 != (long *)0x0) {
                    /* try { // try from 0046f298 to 0056f30f has its CatchHandler @ 0046f200 */
    local_40[1] = local_40[1] + 1;
  }
  local_48 = lVar5;
  (*pcVar4)(param_1,&local_48);
  plVar1 = local_40;
  if ((local_40 != (long *)0x0) && (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar5 = plVar1[2];
    plVar1[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046f28c with catch @ 0046f2f0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046f258 with catch @ 0046f2f4
                        */
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 0046f310 to 0056f317 has its CatchHandler @ 0046f320 */
                    /* try { // try from 0046f318 to 0056f323 has its CatchHandler @ 0046f200 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


