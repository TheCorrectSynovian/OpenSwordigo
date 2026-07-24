/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053ed40
 * Function: Caver::StripeView::SetHasTag
 * Signature: undefined __thiscall SetHasTag(StripeView * this, bool param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StripeView::SetHasTag(bool, float) */

void __thiscall Caver::StripeView::SetHasTag(StripeView *this,bool param_1,float param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  GUIFrameView *pGVar6;
  string *psVar7;
  GUIView *this_00;
  long lVar8;
  code *pcVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long *local_58;
  long *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 0053eca8 with catch @ 0053ed40
                       catch() { ... } // from try @ 0053ed10 with catch @ 0053ed40 */
                    /* catch() { ... } // from try @ 0053edf4 with catch @ 0053ed44 */
  lVar4 = tpidr_el0;
                    /* try { // try from 0053ed5c to 0063ed63 has its CatchHandler @ 0053ee00 */
  local_48 = *(long *)(lVar4 + 0x28);
  if (param_1) {
    if (*(long *)(this + 0x110) == 0) {
                    /* catch() { ... } // from try @ 0053ee10 with catch @ 0053ee1c */
                    /* try { // try from 0053ee20 to 0063ee23 has its CatchHandler @ 0053ee28 */
      pGVar6 = operator_new(0x110);
                    /* catch() { ... } // from try @ 0053ee20 with catch @ 0053ee28 */
      GUIFrameView::GUIFrameView(pGVar6);
                    /* try { // try from 0053ee2c to 0063ee6f has its CatchHandler @ 0053ee2c
                       catch() { ... } // from try @ 0053ee2c with catch @ 0053ee2c
                       catch() { ... } // from try @ 0053ee74 with catch @ 0053ee2c
                       catch() { ... } // from try @ 0053f05c with catch @ 0053ee2c
                       catch() { ... } // from try @ 0053f0d8 with catch @ 0053ee2c
                       catch() { ... } // from try @ 0053f140 with catch @ 0053ee2c */
      boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
                ((shared_ptr<Caver::GUIFrameView> *)&local_58,pGVar6);
      plVar12 = *(long **)(this + 0x110);
      plVar1 = *(long **)(this + 0x118);
      *(long **)(this + 0x110) = local_58;
      *(long **)(this + 0x118) = local_50;
      local_58 = plVar12;
      local_50 = plVar1;
      if ((plVar1 != (long *)0x0) && (lVar8 = plVar1[1], plVar1[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 0053ee70 to 0063ee73 has its CatchHandler @ 0053f0dc */
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* try { // try from 0053ee74 to 0063ee83 has its CatchHandler @ 0053ee2c */
        lVar8 = plVar1[2];
        plVar1[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
                    /* try { // try from 0053ee84 to 0063ee8f has its CatchHandler @ 0053f0f0 */
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
      pGVar6 = *(GUIFrameView **)(this + 0x110);
      psVar7 = (string *)TextureLibrary::sharedLibrary();
      FUN_00666bb8(local_68,"ui_menu_stripe_tag",auStack_70);
      TextureLibrary::TextureForName(psVar7,SUB81(local_68,0));
      GUIFrameView::SetFrameTexture(pGVar6,(intrusive_ptr *)&local_58,false);
                    /* try { // try from 0053eed8 to 0063ef07 has its CatchHandler @ 0053f08c */
      if ((local_58 != (long *)0x0) &&
         (iVar11 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar11, iVar11 == 0)) {
        (**(code **)(*local_58 + 8))();
      }
      if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
        piVar10 = (int *)(local_68[0] + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar11 = *piVar10;
          *piVar10 = iVar11 + -1;
        }
        else {
          do {
            iVar11 = *piVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar3) {
              *piVar10 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar11 < 1) {
          operator_delete((undefined *)(local_68[0] + -0x18));
        }
      }
      this_00 = *(GUIView **)(this + 0x110);
      plVar12 = *(long **)(this_00 + 0x100);
      if (plVar12 != (long *)0x0) {
                    /* try { // try from 0053ef28 to 0063ef4f has its CatchHandler @ 0053f0f0 */
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      }
      local_58 = *(long **)(this_00 + 0x74);
      local_50 = *(long **)((long)plVar12 + 0x54);
      GUIView::SetFrame(this_00,(Rectangle *)&local_58);
      iVar11 = (int)plVar12[1] + -1;
      *(int *)(plVar12 + 1) = iVar11;
      if (iVar11 == 0) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
      local_58 = *(long **)(this + 0x110);
      pcVar9 = *(code **)(*(long *)this + 0x60);
      local_50 = *(long **)(this + 0x118);
      if (local_50 != (long *)0x0) {
        local_50[1] = local_50[1] + 1;
      }
      (*pcVar9)(this,&local_58);
      plVar12 = local_50;
      if ((local_50 != (long *)0x0) &&
         (lVar8 = local_50[1], local_50[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*local_50 + 0x10))(local_50);
        lVar8 = plVar12[2];
        plVar12[2] = lVar8 + -1;
                    /* try { // try from 0053efc8 to 0063f05b has its CatchHandler @ 0053f0f4 */
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
    }
    fVar5 = DAT_00683944;
    *(float *)(this + 0x130) = param_2;
    if (fVar5 < *(float *)(this + 0x8c)) {
                    /* try { // try from 0053ed90 to 0063ed9b has its CatchHandler @ 0053eda8 */
      (**(code **)(*(long *)this + 0x58))(this);
    }
  }
  else {
    plVar12 = *(long **)(this + 0x118);
                    /* catch() { ... } // from try @ 0053ed90 with catch @ 0053eda8 */
    *(undefined8 *)(this + 0x110) = 0;
    *(undefined8 *)(this + 0x118) = 0;
    if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0))
    {
                    /* try { // try from 0053edcc to 0063edf3 has its CatchHandler @ 0053edfc */
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar8 = plVar12[2];
      plVar12[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    *(float *)(this + 0x130) = param_2;
  }
                    /* try { // try from 0053edf4 to 0063ee0f has its CatchHandler @ 0053ed44 */
                    /* catch() { ... } // from try @ 0053edcc with catch @ 0053edfc */
                    /* catch() { ... } // from try @ 0053ed5c with catch @ 0053ee00 */
  if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 0053ee10 to 0063ee1b has its CatchHandler @ 0053ee1c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


