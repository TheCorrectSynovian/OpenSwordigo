/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053e9a8
 * Function: Caver::StripeView::StripeView
 * Signature: undefined __thiscall StripeView(StripeView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StripeView::StripeView() */

void __thiscall Caver::StripeView::StripeView(StripeView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_60 [8];
  long *local_58;
  long local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  GUIFrameView::GUIFrameView((GUIFrameView *)this);
  puVar4 = PTR_vtable_007e7f20;
                    /* catch() { ... } // from try @ 0053e970 with catch @ 0053e9d0 */
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined **)this = puVar4 + 0x10;
  psVar5 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 0053e9f0 to 0063ea17 has its CatchHandler @ 0053ea20 */
  FUN_00666bb8(&local_50,"ui_menu_stripe",auStack_60);
                    /* try { // try from 0053ea18 to 0063ea23 has its CatchHandler @ 0053e904 */
  TextureLibrary::TextureForName(psVar5,SUB81(&local_50,0));
                    /* catch() { ... } // from try @ 0053e9f0 with catch @ 0053ea20 */
                    /* try { // try from 0053ea24 to 0063ea67 has its CatchHandler @ 0053ea24
                       catch() { ... } // from try @ 0053ea24 with catch @ 0053ea24
                       catch() { ... } // from try @ 0053ea6c with catch @ 0053ea24
                       catch() { ... } // from try @ 0053ec54 with catch @ 0053ea24
                       catch() { ... } // from try @ 0053ecd0 with catch @ 0053ea24
                       catch() { ... } // from try @ 0053ed38 with catch @ 0053ea24 */
  if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
                    /* try { // try from 0053ead0 to 0063eaff has its CatchHandler @ 0053ec84 */
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  GUIFrameView::SetFrameTexture((GUIFrameView *)this,(intrusive_ptr *)&local_58,true);
  local_50 = *(long *)(this + 0x74);
  uStack_48 = *(undefined8 *)((long)local_58 + 0x54);
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_50);
                    /* try { // try from 0053ea68 to 0063ea6b has its CatchHandler @ 0053ecd4 */
                    /* try { // try from 0053ea6c to 0063ea7b has its CatchHandler @ 0053ea24 */
  if ((local_58 != (long *)0x0) &&
     (iVar7 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar7, iVar7 == 0)) {
                    /* try { // try from 0053ea7c to 0063ea87 has its CatchHandler @ 0053ece8 */
    (**(code **)(*local_58 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


