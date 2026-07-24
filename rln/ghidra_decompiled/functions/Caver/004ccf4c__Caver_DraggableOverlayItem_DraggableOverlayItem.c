/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ccf4c
 * Function: Caver::DraggableOverlayItem::DraggableOverlayItem
 * Signature: undefined __thiscall DraggableOverlayItem(DraggableOverlayItem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DraggableOverlayItem::DraggableOverlayItem() */

void __thiscall Caver::DraggableOverlayItem::DraggableOverlayItem(DraggableOverlayItem *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_68 [8];
  long local_60;
  long *local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar4 = PTR_vtable_007e7810;
                    /* catch() { ... } // from try @ 004ccfdc with catch @ 004ccf78
                       catch() { ... } // from try @ 004ccff8 with catch @ 004ccf78 */
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined **)this = puVar4 + 0x10;
  GUIRoundedRect::GUIRoundedRect((GUIRoundedRect *)(this + 0x108));
  GUIRoundedRect::GUIRoundedRect((GUIRoundedRect *)(this + 0x1b0));
  puVar4 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined **)(this + 600) = puVar4 + 0x18;
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_60,"ui_controls_button_pressed",auStack_68);
                    /* try { // try from 004ccfd8 to 005ccfdb has its CatchHandler @ 004ccfec */
                    /* try { // try from 004ccfdc to 005ccfef has its CatchHandler @ 004ccf78 */
  TextureLibrary::TextureForName(psVar5,SUB81(&local_60,0));
                    /* catch() { ... } // from try @ 004ccfd8 with catch @ 004ccfec */
                    /* try { // try from 004ccff0 to 005ccff7 has its CatchHandler @ 004cd000 */
  GUIRoundedRect::InitWithTexture((GUIRoundedRect *)(this + 0x108),(intrusive_ptr *)local_58);
                    /* try { // try from 004ccff8 to 005cd003 has its CatchHandler @ 004ccf78 */
                    /* catch() { ... } // from try @ 004ccff0 with catch @ 004cd000 */
                    /* catch() { ... } // from try @ 004cd08c with catch @ 004cd004 */
  if ((local_58[0] != (long *)0x0) &&
     (iVar7 = (int)local_58[0][1] + -1, *(int *)(local_58[0] + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*local_58[0] + 8))();
  }
  if ((undefined *)(local_60 + -0x18) != puVar4) {
    piVar6 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
                    /* try { // try from 004cd0d8 to 005cd0db has its CatchHandler @ 004cd19c */
                    /* try { // try from 004cd0dc to 005cd1af has its CatchHandler @ 004cd0a8 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_60,"ui_controls_button_pressed",auStack_68);
  TextureLibrary::TextureForName(psVar5,SUB81(&local_60,0));
                    /* try { // try from 004cd064 to 005cd067 has its CatchHandler @ 004cd080 */
  GUIRoundedRect::InitWithTexture((GUIRoundedRect *)(this + 0x1b0),(intrusive_ptr *)local_58);
                    /* try { // try from 004cd068 to 005cd06f has its CatchHandler @ 004cd094 */
  if ((local_58[0] != (long *)0x0) &&
     (iVar7 = (int)local_58[0][1] + -1, *(int *)(local_58[0] + 1) = iVar7, iVar7 == 0)) {
                    /* catch() { ... } // from try @ 004cd064 with catch @ 004cd080 */
                    /* try { // try from 004cd084 to 005cd08b has its CatchHandler @ 004cd090 */
    (**(code **)(*local_58[0] + 8))();
  }
                    /* try { // try from 004cd08c to 005cd0a7 has its CatchHandler @ 004cd004 */
                    /* catch() { ... } // from try @ 004cd084 with catch @ 004cd090 */
                    /* catch() { ... } // from try @ 004cd068 with catch @ 004cd094 */
  if ((undefined *)(local_60 + -0x18) != puVar4) {
    piVar6 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
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
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
                    /* try { // try from 004cd0a8 to 005cd0d7 has its CatchHandler @ 004cd0a8
                       catch() { ... } // from try @ 004cd0a8 with catch @ 004cd0a8
                       catch() { ... } // from try @ 004cd0dc with catch @ 004cd0a8 */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


