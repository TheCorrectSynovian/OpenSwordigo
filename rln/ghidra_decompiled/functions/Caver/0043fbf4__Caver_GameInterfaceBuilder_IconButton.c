/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043fbf4
 * Function: Caver::GameInterfaceBuilder::IconButton
 * Signature: undefined __thiscall IconButton(GameInterfaceBuilder * this, intrusive_ptr * param_1, intrusive_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,
   boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall
Caver::GameInterfaceBuilder::IconButton
          (GameInterfaceBuilder *this,intrusive_ptr *param_1,intrusive_ptr *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  intrusive_ptr *piVar6;
  undefined8 *in_x8;
  int *piVar7;
  int iVar8;
  undefined1 auStack_88 [8];
  long local_80;
  long *local_78;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long *local_58;
  undefined8 uStack_50;
  long local_48;
  
                    /* try { // try from 0043fbf4 to 0053fc33 has its CatchHandler @ 0043fadc */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  psVar5 = (string *)TextureLibrary::sharedLibrary();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043fb2c with catch @ 0043fc30
                        */
                    /* try { // try from 0043fc34 to 0053fc3b has its CatchHandler @ 0043fc44 */
                    /* try { // try from 0043fc3c to 0053fc47 has its CatchHandler @ 0043fadc */
  FUN_00666bb8(local_68,"ui_frame",auStack_70);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043fc34 with catch @ 0043fc44
                        */
  TextureLibrary::TextureForName(psVar5,SUB81(local_68,0));
  psVar5 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 0043fca8 with catch @ 0043fc5c */
  FUN_00666bb8(&local_80,"textbubble_border",auStack_88);
  piVar6 = (intrusive_ptr *)0x1;
                    /* try { // try from 0043fc80 to 0053fc93 has its CatchHandler @ 0043fd98 */
  TextureLibrary::TextureForName(psVar5,SUB81(&local_80,0));
  PlainButton((GameInterfaceBuilder *)&local_58,(intrusive_ptr *)&local_78,piVar6);
                    /* try { // try from 0043fc98 to 0053fca7 has its CatchHandler @ 0043fd28 */
                    /* try { // try from 0043fca8 to 0053fd9b has its CatchHandler @ 0043fc5c */
  if ((local_78 != (long *)0x0) &&
     (iVar8 = (int)local_78[1] + -1, *(int *)(local_78 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_78 + 8))();
  }
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_80 + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_80 + -8);
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
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((local_58 != (long *)0x0) &&
     (iVar8 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  if ((undefined *)(local_68[0] + -0x18) != puVar4) {
    piVar7 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 0043fc80 with catch @ 0043fd98 */
        iVar8 = *piVar7;
                    /* try { // try from 0043fda0 to 0053fde7 has its CatchHandler @ 0043fda0
                       catch() { ... } // from try @ 0043fda0 with catch @ 0043fda0
                       catch() { ... } // from try @ 0043fdf8 with catch @ 0043fda0
                       catch() { ... } // from try @ 0043fe94 with catch @ 0043fda0
                       catch() { ... } // from try @ 0043ff84 with catch @ 0043fda0 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
                    /* try { // try from 0043fde8 to 0053fdf7 has its CatchHandler @ 0043ff38 */
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  GUIButton::SetImage((GUIButton *)*in_x8,(intrusive_ptr *)this);
  GUIButton::SetHighlightedImage((GUIButton *)*in_x8,param_1);
  if (*(long *)this != 0) {
                    /* catch() { ... } // from try @ 0043fc98 with catch @ 0043fd28 */
    uStack_50 = *(undefined8 *)(*(long *)this + 0x54);
    local_58 = *(long **)((GUIView *)*in_x8 + 0x74);
    GUIView::SetFrame((GUIView *)*in_x8,(Rectangle *)&local_58);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


