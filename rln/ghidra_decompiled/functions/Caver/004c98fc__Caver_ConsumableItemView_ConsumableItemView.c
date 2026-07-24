/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c98fc
 * Function: Caver::ConsumableItemView::ConsumableItemView
 * Signature: undefined __thiscall ConsumableItemView(ConsumableItemView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ConsumableItemView::ConsumableItemView() */

void __thiscall Caver::ConsumableItemView::ConsumableItemView(ConsumableItemView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  int *piVar6;
  int iVar7;
  long *local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  GUIButton::GUIButton((GUIButton *)this,0);
  puVar4 = PTR_vtable_007e4e88;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined **)this = puVar4 + 0x10;
  psVar5 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 004c9950 to 005c9963 has its CatchHandler @ 004c9f70 */
  FUN_00666bb8(local_48,"ui_controls_button",auStack_50);
  TextureLibrary::TextureForName(psVar5,SUB81(local_48,0));
                    /* try { // try from 004c9974 to 005c997f has its CatchHandler @ 004c9f38 */
  GUIButton::SetFrameTextureForState((GUIButton *)this,0,&local_60);
  if ((local_60 != (long *)0x0) &&
     (iVar7 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar7, iVar7 == 0)) {
                    /* try { // try from 004c99a0 to 005c99db has its CatchHandler @ 004c9edc */
    (**(code **)(*local_60 + 8))();
  }
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_48[0] + -8);
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
                    /* try { // try from 004c9ad4 to 005c9adf has its CatchHandler @ 004c9e08 */
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  psVar5 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(local_48,"ui_controls_button_pressed",auStack_50);
  TextureLibrary::TextureForName(psVar5,SUB81(local_48,0));
  GUIButton::SetFrameTextureForState((GUIButton *)this,1,&local_60);
                    /* try { // try from 004c99fc to 005c9a0f has its CatchHandler @ 004c9ed8 */
  if ((local_60 != (long *)0x0) &&
     (iVar7 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*local_60 + 8))();
  }
                    /* try { // try from 004c9a20 to 005c9a2b has its CatchHandler @ 004c9ea0 */
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
    piVar6 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
                    /* try { // try from 004c9ab0 to 005c9ac3 has its CatchHandler @ 004c9e40 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  uStack_58 = _DAT_00692288;
  local_60 = _DAT_00692280;
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_60);
  this[0xe4] = (ConsumableItemView)0x1;
                    /* try { // try from 004c9a54 to 005c9a8f has its CatchHandler @ 004c9e44 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


