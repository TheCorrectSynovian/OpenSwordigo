/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00445884
 * Function: Caver::GameMenuViewController::SettingsViewWantsToConfigureControls
 * Signature: undefined __cdecl SettingsViewWantsToConfigureControls(SettingsView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameMenuViewController::SettingsViewWantsToConfigureControls(Caver::SettingsView*) */

void Caver::GameMenuViewController::SettingsViewWantsToConfigureControls(SettingsView *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ConfigureOverlayViewController *this;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long local_58;
  long *local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 004458a0 to 005458c7 has its CatchHandler @ 004458d8 */
  this = operator_new(0x70);
  ConfigureOverlayViewController::ConfigureOverlayViewController(this);
  boost::shared_ptr<Caver::ConfigureOverlayViewController>::
  shared_ptr<Caver::ConfigureOverlayViewController>
            ((shared_ptr<Caver::ConfigureOverlayViewController> *)&local_48,this);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  lVar3 = *(long *)(param_1 + 0x90);
                    /* catch() { ... } // from try @ 00445870 with catch @ 004458c8 */
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 004458a0 with catch @ 004458d8 */
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar5 = *(long **)(local_48 + 0x58);
  *(undefined8 *)(local_48 + 0x50) = uVar1;
  *(long *)(local_48 + 0x58) = lVar3;
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 00445900 to 00545907 has its CatchHandler @ 00445928 */
    (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* try { // try from 00445908 to 0054592b has its CatchHandler @ 00445834 */
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
                    /* catch() { ... } // from try @ 00445900 with catch @ 00445928 */
  plVar5 = *(long **)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 0044596c with catch @ 0044592c */
  pcVar4 = *(code **)(*plVar5 + 0x50);
  local_58 = local_48;
  local_50 = local_40;
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
                    /* try { // try from 0044594c to 0054595f has its CatchHandler @ 00445a6c */
  (*pcVar4)(plVar5,&local_58);
  plVar5 = local_50;
                    /* try { // try from 00445960 to 0054596b has its CatchHandler @ 004459fc */
  if ((local_50 != (long *)0x0) && (lVar3 = local_50[1], local_50[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
                    /* try { // try from 0044596c to 00545a6f has its CatchHandler @ 0044592c */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((local_40 != (long *)0x0) && (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar3 = local_40[2];
    local_40[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00445960 with catch @ 004459fc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


