/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046a7a4
 * Function: Caver::LevelUpViewController::LoadView
 * Signature: undefined __thiscall LoadView(LevelUpViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LevelUpViewController::LoadView() */

void __thiscall Caver::LevelUpViewController::LoadView(LevelUpViewController *this)

{
  undefined8 uVar1;
  long lVar2;
  CharacterView *pCVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pCVar3 = operator_new(0x1e8);
                    /* try { // try from 0046a7d4 to 0056a7e7 has its CatchHandler @ 0046adf8 */
  CharacterView::CharacterView(pCVar3);
  boost::shared_ptr<Caver::CharacterView>::shared_ptr<Caver::CharacterView>
            ((shared_ptr<Caver::CharacterView> *)&local_48,pCVar3);
  uVar1 = *(undefined8 *)(this + 0x68);
  plVar6 = *(long **)(this + 0x70);
  *(undefined8 *)(this + 0x68) = local_48;
  *(long **)(this + 0x70) = local_40;
                    /* try { // try from 0046a7f8 to 0056a803 has its CatchHandler @ 0046adc0 */
  local_48 = uVar1;
  local_40 = plVar6;
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
                    /* try { // try from 0046a824 to 0056a85f has its CatchHandler @ 0046ad64 */
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  pCVar3 = *(CharacterView **)(this + 0x68);
  if (*(int *)(pCVar3 + 0x70) != 0x12) {
    plVar6 = *(long **)(pCVar3 + 0x58);
    *(undefined4 *)(pCVar3 + 0x70) = 0x12;
    if ((plVar6 != (long *)0x0) && (DAT_00683734 < *(float *)((long)plVar6 + 0x8c))) {
                    /* try { // try from 0046a880 to 0056a893 has its CatchHandler @ 0046ad60 */
      (**(code **)(*plVar6 + 0x58))(plVar6);
      pCVar3 = *(CharacterView **)(this + 0x68);
    }
  }
  *(LevelUpViewController **)(pCVar3 + 0x100) = this + 0x48;
  local_48 = *(undefined8 *)(*(long *)(this + 0x58) + 0x80);
  local_40 = *(long **)(*(long *)(this + 0x58) + 0x88);
  if (local_40 != (long *)0x0) {
                    /* try { // try from 0046a8a4 to 0056a8af has its CatchHandler @ 0046ad28 */
    local_40[1] = local_40[1] + 1;
  }
  CharacterView::InitWithGameState(pCVar3,(shared_ptr *)&local_48);
  plVar6 = local_40;
  if ((local_40 != (long *)0x0) && (lVar5 = local_40[1], local_40[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
                    /* try { // try from 0046a8d0 to 0056a90b has its CatchHandler @ 0046accc */
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  CharacterView::SetLevelUpMode(*(CharacterView **)(this + 0x68));
  uVar1 = *(undefined8 *)(this + 0x68);
  plVar6 = *(long **)(this + 0x70);
  if (plVar6 != (long *)0x0) {
    plVar6[1] = plVar6[1] + 2;
  }
  plVar7 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x18) = uVar1;
  *(long **)(this + 0x20) = plVar6;
                    /* try { // try from 0046a92c to 0056a93f has its CatchHandler @ 0046acc8 */
  if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar5 = plVar7[2];
    plVar7[2] = lVar5 + -1;
                    /* try { // try from 0046a950 to 0056a95b has its CatchHandler @ 0046ac90 */
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  puVar4 = *(undefined8 **)(this + 0x40);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,this);
  }
                    /* try { // try from 0046a988 to 0056a9c3 has its CatchHandler @ 0046ac34 */
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
                    /* try { // try from 0046a9c4 to 0056aecf has its CatchHandler @ 0046a6e8 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


