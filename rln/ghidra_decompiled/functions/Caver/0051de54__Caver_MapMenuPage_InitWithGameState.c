/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051de54
 * Function: Caver::MapMenuPage::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(MapMenuPage * this, shared_ptr * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapMenuPage::InitWithGameState(boost::shared_ptr<Caver::GameState> const&, bool) */

void __thiscall
Caver::MapMenuPage::InitWithGameState(MapMenuPage *this,shared_ptr *param_1,bool param_2)

{
  undefined8 uVar1;
  long lVar2;
  MapView *this_00;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 local_68;
  long *local_60;
  long local_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 0051de5c to 0061de77 has its CatchHandler @ 0051e0c8 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0051de78 to 0061dfff has its CatchHandler @ 0051de0c */
  uVar1 = *(undefined8 *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar5 = *(long **)(this + 0x108);
  *(undefined8 *)(this + 0x100) = uVar1;
  *(long *)(this + 0x108) = lVar3;
  if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  this[0x1f8] = (MapMenuPage)param_2;
  lVar3 = *(long *)(*(long *)param_1 + 0x170);
  plVar5 = *(long **)(*(long *)param_1 + 0x178);
  if (plVar5 != (long *)0x0) {
    plVar5[1] = plVar5[1] + 1;
  }
  if (lVar3 == 0) {
    if (plVar5 != (long *)0x0) goto LAB_0051df54;
  }
  else if (plVar5 != (long *)0x0) {
    if (plVar5[1] == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar3 = plVar5[2];
      plVar5[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
LAB_0051df54:
    lVar3 = plVar5[1] + -1;
    plVar5[1] = lVar3;
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar3 = plVar5[2];
      plVar5[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
  }
  local_68 = *(undefined8 *)(**(long **)param_1 + 0x48);
  local_60 = *(long **)(**(long **)param_1 + 0x50);
  if (local_60 != (long *)0x0) {
    local_60[1] = local_60[1] + 1;
  }
  MapView::Init(*(MapView **)(this + 0x1c8),(shared_ptr *)&local_68,param_1,param_2,false);
  plVar5 = *(long **)(this + 0x1c8);
  pcVar6 = *(code **)(*plVar5 + 0xf8);
  Rectangle::RectangleByOutsetting((Rectangle *)((long)plVar5 + 0x84),DAT_00684320);
  (*pcVar6)(plVar5,&local_58);
                    /* try { // try from 0051e000 to 0061e003 has its CatchHandler @ 0051e0b0 */
                    /* try { // try from 0051e004 to 0061e053 has its CatchHandler @ 0051de0c */
  (**(code **)(**(long **)(this + 0x1b8) + 0x130))
            (*(long **)(this + 0x1b8),*(long *)(this + 0x1c8) + 0x74);
  lVar3 = *(long *)(*(long *)param_1 + 0x170);
  plVar5 = *(long **)(*(long *)param_1 + 0x178);
  if (plVar5 == (long *)0x0) {
    if (lVar3 == 0) goto LAB_0051e0d4;
    local_50 = (long *)0x0;
  }
  else {
    if (plVar5[1] == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar4 = plVar5[2];
      plVar5[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
                    /* try { // try from 0051e054 to 0061e057 has its CatchHandler @ 0051e0b4 */
    if (lVar3 == 0) goto LAB_0051e0d4;
                    /* try { // try from 0051e058 to 0061e0cb has its CatchHandler @ 0051de0c */
    lVar3 = *(long *)(*(long *)param_1 + 0x170);
    local_50 = *(long **)(*(long *)param_1 + 0x178);
  }
  this_00 = *(MapView **)(this + 0x1c8);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  local_58 = lVar3;
  MapView::SelectNode(this_00,(shared_ptr *)&local_58);
  plVar5 = local_50;
  if ((local_50 != (long *)0x0) && (lVar3 = local_50[1], local_50[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 0051e000 with catch @ 0051e0b0 */
    (**(code **)(*local_50 + 0x10))(local_50);
                    /* catch() { ... } // from try @ 0051e054 with catch @ 0051e0b4 */
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* catch() { ... } // from try @ 0051de5c with catch @ 0051e0c8 */
                    /* try { // try from 0051e0cc to 0061e0d3 has its CatchHandler @ 0051e0dc */
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
LAB_0051e0d4:
                    /* try { // try from 0051e0d4 to 0061e0df has its CatchHandler @ 0051de0c */
  UpdateTitle(this);
                    /* catch() { ... } // from try @ 0051e0cc with catch @ 0051e0dc */
                    /* catch() { ... } // from try @ 0051e16c with catch @ 0051e0e0
                       catch() { ... } // from try @ 0051e244 with catch @ 0051e0e0 */
  if (DAT_00683944 < *(float *)(this + 0x8c)) {
    (**(code **)(*(long *)this + 0x58))(this);
  }
  plVar5 = local_60;
  if ((local_60 != (long *)0x0) && (lVar3 = local_60[1], local_60[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_60 + 0x10))(local_60);
                    /* try { // try from 0051e128 to 0061e13f has its CatchHandler @ 0051e1c0 */
    lVar3 = plVar5[2];
    plVar5[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0051e164 to 0061e16b has its CatchHandler @ 0051e220 */
                    /* try { // try from 0051e16c to 0061e1e7 has its CatchHandler @ 0051e0e0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


