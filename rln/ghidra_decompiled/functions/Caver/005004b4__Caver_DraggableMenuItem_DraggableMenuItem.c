/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005004b4
 * Function: Caver::DraggableMenuItem::DraggableMenuItem
 * Signature: undefined __thiscall DraggableMenuItem(DraggableMenuItem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DraggableMenuItem::DraggableMenuItem() */

void __thiscall Caver::DraggableMenuItem::DraggableMenuItem(DraggableMenuItem *this)

{
  undefined *puVar1;
  
  GUIView::GUIView((GUIView *)this);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  puVar1 = PTR_vtable_007e52a8;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined **)this = puVar1 + 0x10;
  GUITexturedRect::GUITexturedRect((GUITexturedRect *)(this + 0x110));
  return;
}


