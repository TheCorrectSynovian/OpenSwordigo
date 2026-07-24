/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a1538
 * Function: Caver::ProfileSelectionView::ProfileSelectionView
 * Signature: undefined __thiscall ProfileSelectionView(ProfileSelectionView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionView::ProfileSelectionView() */

void __thiscall Caver::ProfileSelectionView::ProfileSelectionView(ProfileSelectionView *this)

{
  long lVar1;
  undefined *puVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar2 = PTR_vtable_007e7610;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 0xf0) = puVar2 + 0x160;
  *(undefined8 *)(this + 0xf8) = 0;
  LoadProfiles(this);
  uStack_40 = *(undefined8 *)(*(long *)(this + 0x100) + 0xf4);
  local_48 = 0;
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


