/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e0a34
 * Function: Caver::OverlayMenuButton::OverlayMenuButton
 * Signature: undefined __thiscall OverlayMenuButton(OverlayMenuButton * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::OverlayMenuButton::OverlayMenuButton() */

void __thiscall Caver::OverlayMenuButton::OverlayMenuButton(OverlayMenuButton *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  OverlayButton::OverlayButton((OverlayButton *)this);
  uStack_48 = _UNK_00692ad8;
  local_50 = _DAT_00692ad0;
  puVar1 = PTR_vtable_007e6038 + 0x10;
  puVar2 = PTR_DAT_007e5de8 + 0x18;
                    /* catch() { ... } // from try @ 004e0ae8 with catch @ 004e0a7c */
  this[0x1f8] = (OverlayMenuButton)0x0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined **)this = puVar1;
  *(undefined **)(this + 0x1f0) = puVar2;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_50);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004e0acc to 005e0acf has its CatchHandler @ 004e0adc */
  __stack_chk_fail();
}


