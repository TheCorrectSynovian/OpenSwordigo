/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043f5bc
 * Function: Caver::GameInterfaceBuilder::PlainButton
 * Signature: undefined __thiscall PlainButton(GameInterfaceBuilder * this, intrusive_ptr * param_1, intrusive_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameInterfaceBuilder::PlainButton(boost::intrusive_ptr<Caver::Texture> const&,
   boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall
Caver::GameInterfaceBuilder::PlainButton
          (GameInterfaceBuilder *this,intrusive_ptr *param_1,intrusive_ptr *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  GUIButton *pGVar4;
  GUILabel *pGVar5;
  FontLibrary *this_00;
  shared_ptr<Caver::GUIButton> *in_x8;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  undefined1 auStack_68 [16];
  long local_58;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pGVar4 = operator_new(0x1d0);
  GUIButton::GUIButton(pGVar4,0);
  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>(in_x8,pGVar4);
                    /* try { // try from 0043f610 to 0053f613 has its CatchHandler @ 0043f630 */
  pGVar5 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)in_x8);
                    /* try { // try from 0043f614 to 0053f643 has its CatchHandler @ 0043f59c */
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(this_00);
                    /* catch() { ... } // from try @ 0043f610 with catch @ 0043f630 */
  if (local_58 != *(long *)(pGVar5 + 0xf0)) {
    if (local_50 != (long *)0x0) {
                    /* try { // try from 0043f644 to 0053f66f has its CatchHandler @ 0043f644
                       catch() { ... } // from try @ 0043f644 with catch @ 0043f644
                       catch() { ... } // from try @ 0043f7bc with catch @ 0043f644 */
      local_50[1] = local_50[1] + 1;
    }
    plVar9 = *(long **)(pGVar5 + 0xf8);
    *(long *)(pGVar5 + 0xf0) = local_58;
    *(long **)(pGVar5 + 0xf8) = local_50;
    if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 0043f670 to 0053f683 has its CatchHandler @ 0043fa80 */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar6 = plVar9[2];
      plVar9[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
                    /* try { // try from 0043f690 to 0053f69b has its CatchHandler @ 0043fa14 */
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    GUILabel::UpdateText(pGVar5);
  }
  plVar9 = local_50;
  if ((local_50 != (long *)0x0) && (lVar6 = local_50[1], local_50[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
                    /* try { // try from 0043f6c4 to 0053f6ff has its CatchHandler @ 0043f9b0 */
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  pGVar5 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)in_x8);
  if ((((pGVar5[0x108] != (GUILabel)0xff) || (pGVar5[0x109] != (GUILabel)0xff)) ||
      (pGVar5[0x10a] != (GUILabel)0xff)) || (pGVar5[0x10b] != (GUILabel)0xff)) {
    plVar9 = *(long **)(pGVar5 + 0x118);
                    /* try { // try from 0043f728 to 0053f73b has its CatchHandler @ 0043f9ac */
    *(undefined4 *)(pGVar5 + 0x108) = 0xffffffff;
    *(undefined8 *)(pGVar5 + 0x110) = 0;
    *(undefined8 *)(pGVar5 + 0x118) = 0;
    if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 0043f74c to 0053f757 has its CatchHandler @ 0043f974 */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar6 = plVar9[2];
      plVar9[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
    GUILabel::UpdateText(pGVar5);
  }
                    /* try { // try from 0043f780 to 0053f7bb has its CatchHandler @ 0043f918 */
  pGVar5 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)in_x8);
  pGVar5[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar5 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar5 + 0x148) = DAT_007e98f0;
  GUILabel::UpdateText(pGVar5);
  lVar6 = *(long *)in_x8;
                    /* try { // try from 0043f7bc to 0053fa83 has its CatchHandler @ 0043f644 */
  FUN_00666bb8(&local_58,"click",auStack_68);
  FUN_0066a6a8(lVar6 + 0x1c0,&local_58);
  if ((undefined *)(local_58 + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
      lVar6 = *(long *)this;
      goto joined_r0x0043f89c;
    }
  }
  lVar6 = *(long *)this;
joined_r0x0043f89c:
  if (lVar6 != 0) {
    GUIButton::SetFrameTextureForState(*(GUIButton **)in_x8,0,this);
    local_58 = *(long *)(*(GUIView **)in_x8 + 0x74);
    local_50 = *(long **)(*(long *)this + 0x54);
    GUIView::SetFrame(*(GUIView **)in_x8,(Rectangle *)&local_58);
  }
  if (*(long *)param_1 != 0) {
    GUIButton::SetFrameTextureForState(*(GUIButton **)in_x8,1,param_1);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


