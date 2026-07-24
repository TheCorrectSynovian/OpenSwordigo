/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00440504
 * Function: Caver::GameInterfaceBuilder::MainMenuButtonWithTitle
 * Signature: undefined __thiscall MainMenuButtonWithTitle(GameInterfaceBuilder * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GameInterfaceBuilder::MainMenuButtonWithTitle(std::string const&) */

void __thiscall
Caver::GameInterfaceBuilder::MainMenuButtonWithTitle(GameInterfaceBuilder *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  string *psVar7;
  long *plVar8;
  long *in_x8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_78 [8];
  long *local_70;
  long *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_58,"ui_mainmenu_button",auStack_60);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_58,0));
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58 + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 004406b8 with catch @ 004406f0 */
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
                    /* try { // try from 004406b8 to 005406cb has its CatchHandler @ 004406f0 */
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_58,"ui_mainmenu_button_pressed",auStack_78);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_58,0));
  if ((undefined *)(local_58 + -0x18) != puVar6) {
                    /* try { // try from 004406cc to 005406f3 has its CatchHandler @ 0044069c */
    piVar9 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  FramedButtonWithTitle((string *)this,false);
  GUIButton::SetFrameTextureForState((GUIButton *)*in_x8,0,&local_68);
  GUIButton::SetFrameTextureForState((GUIButton *)*in_x8,1,&local_70);
  local_58 = *(long *)((GUIView *)*in_x8 + 0x74);
  uStack_50 = *(undefined8 *)((long)local_68 + 0x54);
  GUIView::SetFrame((GUIView *)*in_x8,(Rectangle *)&local_58);
  lVar5 = _UNK_0068e268;
  lVar4 = _DAT_0068e260;
  plVar8 = (long *)*in_x8;
  *(undefined4 *)((long)plVar8 + 0x19c) = 0xffffffff;
  plVar8[0x35] = lVar5;
  plVar8[0x34] = lVar4;
  (**(code **)(*plVar8 + 0x58))();
  *(undefined8 *)(*in_x8 + 0x1b0) = _DAT_0068e280;
  if ((local_70 != (long *)0x0) &&
     (iVar10 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*local_70 + 8))();
  }
  if ((local_68 != (long *)0x0) &&
     (iVar10 = (int)local_68[1] + -1, *(int *)(local_68 + 1) = iVar10, iVar10 == 0)) {
    (**(code **)(*local_68 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 004406cc with catch @ 0044069c */
  return;
}


