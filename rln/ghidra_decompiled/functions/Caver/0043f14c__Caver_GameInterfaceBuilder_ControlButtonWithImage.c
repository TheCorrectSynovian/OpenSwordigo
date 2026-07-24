/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043f14c
 * Function: Caver::GameInterfaceBuilder::ControlButtonWithImage
 * Signature: undefined __thiscall ControlButtonWithImage(GameInterfaceBuilder * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameInterfaceBuilder::ControlButtonWithImage(boost::intrusive_ptr<Caver::Texture> const&)
    */

void __thiscall
Caver::GameInterfaceBuilder::ControlButtonWithImage
          (GameInterfaceBuilder *this,intrusive_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  GUIButton *pGVar5;
  string *psVar6;
  shared_ptr<Caver::GUIButton> *in_x8;
  int *piVar7;
  int iVar8;
  undefined1 auStack_68 [8];
  long local_60;
  long *local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 0043f0e8 with catch @ 0043f174 */
  pGVar5 = operator_new(0x1d0);
  GUIButton::GUIButton(pGVar5,0);
  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>(in_x8,pGVar5);
  pGVar5 = *(GUIButton **)in_x8;
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_60,"ui_controls_button",auStack_68);
                    /* try { // try from 0043f1c4 to 0053f1cb has its CatchHandler @ 0043f1ec */
  TextureLibrary::TextureForName(psVar6,SUB81(&local_60,0));
                    /* try { // try from 0043f1cc to 0053f1ef has its CatchHandler @ 0043f084 */
  GUIButton::SetFrameTextureForState(pGVar5,0,local_58);
                    /* catch() { ... } // from try @ 0043f1c4 with catch @ 0043f1ec */
                    /* catch() { ... } // from try @ 0043f204 with catch @ 0043f1f0 */
  if ((local_58[0] != (long *)0x0) &&
     (iVar8 = (int)local_58[0][1] + -1, *(int *)(local_58[0] + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_58[0] + 8))();
  }
                    /* try { // try from 0043f200 to 0053f203 has its CatchHandler @ 0043f214 */
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 0043f204 to 0053f227 has its CatchHandler @ 0043f1f0 */
                    /* catch() { ... } // from try @ 0043f200 with catch @ 0043f214 */
  if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_60 + -8);
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
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  pGVar5 = *(GUIButton **)in_x8;
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_60,"ui_controls_button_pressed",auStack_68);
  TextureLibrary::TextureForName(psVar6,SUB81(&local_60,0));
  GUIButton::SetFrameTextureForState(pGVar5,1,local_58);
  if ((local_58[0] != (long *)0x0) &&
     (iVar8 = (int)local_58[0][1] + -1, *(int *)(local_58[0] + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_58[0] + 8))();
  }
  if ((undefined *)(local_60 + -0x18) != puVar4) {
    piVar7 = (int *)(local_60 + -8);
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
                    /* catch() { ... } // from try @ 0043f374 with catch @ 0043f344 */
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  GUIButton::SetImage(*(GUIButton **)in_x8,(intrusive_ptr *)this);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


