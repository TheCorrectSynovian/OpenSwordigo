/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050d64c
 * Function: Caver::InventoryTrinketSlot::Init
 * Signature: undefined __thiscall Init(InventoryTrinketSlot * this, shared_ptr * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryTrinketSlot::Init(boost::shared_ptr<Caver::GameState> const&, float) */

void __thiscall
Caver::InventoryTrinketSlot::Init(InventoryTrinketSlot *this,shared_ptr *param_1,float param_2)

{
  undefined8 uVar1;
  long lVar2;
  MenuItemSlot *pMVar3;
  GUILabel *pGVar4;
  FontLibrary *this_00;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  float fVar8;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined8 *)param_1;
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  }
  plVar7 = *(long **)(this + 0x108);
  *(undefined8 *)(this + 0x100) = uVar1;
  *(long *)(this + 0x108) = lVar5;
  if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar5 = plVar7[2];
    plVar7[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  *(float *)(this + 0x140) = param_2;
  pMVar3 = operator_new(0x280);
  MenuItemSlot::MenuItemSlot(pMVar3);
  boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>
            ((shared_ptr<Caver::MenuItemSlot> *)&local_58,pMVar3);
  uVar1 = *(undefined8 *)(this + 0x110);
  plVar7 = *(long **)(this + 0x118);
  *(long *)(this + 0x110) = local_58;
  *(long **)(this + 0x118) = local_50;
  local_58 = uVar1;
  local_50 = plVar7;
  if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0050d758 with catch @ 0050d728 */
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar5 = plVar7[2];
    plVar7[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 0050d744 to 0060d757 has its CatchHandler @ 0050d77c */
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  pMVar3 = *(MenuItemSlot **)(this + 0x110);
                    /* try { // try from 0050d758 to 0060d77f has its CatchHandler @ 0050d728 */
  *(InventoryTrinketSlot **)(pMVar3 + 0xf0) = this + 0xf0;
  MenuItemSlot::Init(pMVar3,param_2);
  local_58 = *(long *)(this + 0x110);
  *(undefined1 *)(local_58 + 0x120) = 0;
  pcVar6 = *(code **)(*(long *)this + 0x60);
                    /* catch() { ... } // from try @ 0050d744 with catch @ 0050d77c */
  local_50 = *(long **)(this + 0x118);
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar6)(this,&local_58);
  plVar7 = local_50;
  if ((local_50 != (long *)0x0) && (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 0050d808 with catch @ 0050d7c0 */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = plVar7[2];
    plVar7[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
                    /* try { // try from 0050d7ec to 0060d7ef has its CatchHandler @ 0050d7fc */
  pGVar4 = operator_new(0x150);
  GUILabel::GUILabel(pGVar4);
                    /* catch() { ... } // from try @ 0050d7ec with catch @ 0050d7fc */
                    /* try { // try from 0050d800 to 0060d807 has its CatchHandler @ 0050d810 */
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_58,pGVar4);
  lVar5 = *(long *)(this + 0x120);
  plVar7 = *(long **)(this + 0x128);
                    /* try { // try from 0050d808 to 0060d813 has its CatchHandler @ 0050d7c0 */
                    /* catch() { ... } // from try @ 0050d800 with catch @ 0050d810 */
                    /* try { // try from 0050d814 to 0060d873 has its CatchHandler @ 0050d814
                       catch() { ... } // from try @ 0050d814 with catch @ 0050d814
                       catch() { ... } // from try @ 0050d890 with catch @ 0050d814
                       catch() { ... } // from try @ 0050d900 with catch @ 0050d814
                       catch() { ... } // from try @ 0050d970 with catch @ 0050d814 */
  *(long *)(this + 0x120) = local_58;
  *(long **)(this + 0x128) = local_50;
  local_58 = lVar5;
  local_50 = plVar7;
  if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar5 = plVar7[2];
    plVar7[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  pGVar4 = *(GUILabel **)(this + 0x120);
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(this_00);
                    /* try { // try from 0050d874 to 0060d88f has its CatchHandler @ 0050d964 */
  if (local_58 != *(long *)(pGVar4 + 0xf0)) {
    if (local_50 != (long *)0x0) {
                    /* try { // try from 0050d890 to 0060d8fb has its CatchHandler @ 0050d814 */
      local_50[1] = local_50[1] + 1;
    }
    plVar7 = *(long **)(pGVar4 + 0xf8);
    *(long *)(pGVar4 + 0xf0) = local_58;
    *(long **)(pGVar4 + 0xf8) = local_50;
    if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar5 = plVar7[2];
      plVar7[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    GUILabel::UpdateText(pGVar4);
  }
  plVar7 = local_50;
                    /* try { // try from 0050d8fc to 0060d8ff has its CatchHandler @ 0050d950 */
  if ((local_50 != (long *)0x0) && (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
                    /* try { // try from 0050d900 to 0060d967 has its CatchHandler @ 0050d814 */
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = plVar7[2];
    plVar7[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  pGVar4 = *(GUILabel **)(this + 0x120);
                    /* catch() { ... } // from try @ 0050d8fc with catch @ 0050d950 */
  if ((((pGVar4[0x108] != (GUILabel)0xff) || (pGVar4[0x109] != (GUILabel)0xff)) ||
      (pGVar4[0x10a] != (GUILabel)0xff)) || (pGVar4[0x10b] != (GUILabel)0xff)) {
                    /* catch() { ... } // from try @ 0050d874 with catch @ 0050d964 */
    plVar7 = *(long **)(pGVar4 + 0x118);
                    /* try { // try from 0050d968 to 0060d96f has its CatchHandler @ 0050d978 */
    *(undefined4 *)(pGVar4 + 0x108) = 0xffffffff;
                    /* try { // try from 0050d970 to 0060d97b has its CatchHandler @ 0050d814 */
    *(undefined8 *)(pGVar4 + 0x110) = 0;
    *(undefined8 *)(pGVar4 + 0x118) = 0;
                    /* catch() { ... } // from try @ 0050d968 with catch @ 0050d978 */
                    /* catch() { ... } // from try @ 0050d9c4 with catch @ 0050d97c
                       catch() { ... } // from try @ 0050d9e0 with catch @ 0050d97c */
    if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar5 = plVar7[2];
      plVar7[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    GUILabel::UpdateText(pGVar4);
                    /* try { // try from 0050d9c0 to 0060d9c3 has its CatchHandler @ 0050d9d4 */
    pGVar4 = *(GUILabel **)(this + 0x120);
  }
                    /* try { // try from 0050d9c4 to 0060d9d7 has its CatchHandler @ 0050d97c */
  uVar1 = DAT_00683728;
  pGVar4[0x140] = (GUILabel)0x1;
                    /* catch() { ... } // from try @ 0050d9c0 with catch @ 0050d9d4 */
                    /* try { // try from 0050d9d8 to 0060d9df has its CatchHandler @ 0050d9e8 */
                    /* try { // try from 0050d9e0 to 0060d9eb has its CatchHandler @ 0050d97c */
  *(undefined4 *)(pGVar4 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar4 + 0x148) = uVar1;
                    /* catch() { ... } // from try @ 0050d9d8 with catch @ 0050d9e8 */
  GUILabel::UpdateText(pGVar4);
  pGVar4 = *(GUILabel **)(this + 0x120);
  *(undefined4 *)(pGVar4 + 0x130) = 4;
  GUILabel::UpdateBounds(pGVar4);
  local_58 = *(long *)(this + 0x120);
  pcVar6 = *(code **)(*(long *)this + 0x60);
  local_50 = *(long **)(this + 0x128);
  if (local_50 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0050da84 with catch @ 0050da18 */
    local_50[1] = local_50[1] + 1;
  }
  (*pcVar6)(this,&local_58);
  plVar7 = local_50;
  if ((local_50 != (long *)0x0) && (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar5 = plVar7[2];
                    /* try { // try from 0050da5c to 0060da5f has its CatchHandler @ 0050da78 */
                    /* try { // try from 0050da60 to 0060da67 has its CatchHandler @ 0050da8c */
    plVar7[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
                    /* catch() { ... } // from try @ 0050da5c with catch @ 0050da78 */
                    /* try { // try from 0050da7c to 0060da83 has its CatchHandler @ 0050da88 */
  lVar5 = *(long *)(this + 0x110);
                    /* try { // try from 0050da84 to 0060da9f has its CatchHandler @ 0050da18 */
                    /* catch() { ... } // from try @ 0050da7c with catch @ 0050da88 */
                    /* catch() { ... } // from try @ 0050da60 with catch @ 0050da8c */
  fVar8 = *(float *)(*(long *)(*(GUIView **)(this + 0x120) + 0xf0) + 0x48);
  local_58 = CONCAT44((*(float *)(lVar5 + 0x78) + *(float *)(lVar5 + 0x80) + -6.0) - fVar8,
                      *(undefined4 *)(lVar5 + 0x74));
  local_50 = (long *)CONCAT44(fVar8,*(undefined4 *)(lVar5 + 0x7c));
  GUIView::SetFrame(*(GUIView **)(this + 0x120),(Rectangle *)&local_58);
  (**(code **)(*(long *)this + 0xf8))(this,*(long *)(this + 0x110) + 0x74);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


