/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005296c0
 * Function: Caver::MenuItemSlot::MenuItemSlot
 * Signature: undefined __thiscall MenuItemSlot(MenuItemSlot * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MenuItemSlot::MenuItemSlot() */

void __thiscall Caver::MenuItemSlot::MenuItemSlot(MenuItemSlot *this)

{
  undefined *puVar1;
  
                    /* catch() { ... } // from try @ 0052969c with catch @ 005296d4 */
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e7020 + 0x10;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x122] = (MenuItemSlot)0x0;
  *(undefined4 *)(this + 0xf8) = 0x3f800000;
  *(undefined2 *)(this + 0x120) = 1;
  *(undefined **)this = puVar1;
  GUITexturedRect::GUITexturedRect((GUITexturedRect *)(this + 0x128));
                    /* catch() { ... } // from try @ 00529760 with catch @ 00529714 */
  GUITexturedRect::GUITexturedRect((GUITexturedRect *)(this + 0x198));
  GUITexturedRect::GUITexturedRect((GUITexturedRect *)(this + 0x208));
  this[0x278] = (MenuItemSlot)0x0;
  *(undefined4 *)(this + 0x27c) = 0;
  return;
}


