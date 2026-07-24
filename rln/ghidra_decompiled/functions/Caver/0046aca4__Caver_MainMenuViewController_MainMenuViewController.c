/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046aca4
 * Function: Caver::MainMenuViewController::MainMenuViewController
 * Signature: undefined __thiscall MainMenuViewController(MainMenuViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::MainMenuViewController() */

void __thiscall Caver::MainMenuViewController::MainMenuViewController(MainMenuViewController *this)

{
  undefined *puVar1;
  
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar1 = PTR_vtable_007e70f8;
                    /* catch() { ... } // from try @ 0046a92c with catch @ 0046acc8 */
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
                    /* catch() { ... } // from try @ 0046a8d0 with catch @ 0046accc */
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x50) = puVar1 + 0xe8;
  *(undefined **)(this + 0x48) = puVar1 + 200;
  *(undefined **)(this + 0x68) = puVar1 + 0x150;
  *(undefined **)(this + 0x60) = puVar1 + 0x138;
  *(undefined **)(this + 0x58) = puVar1 + 0x120;
  GameOptions::GameOptions((GameOptions *)(this + 0x80));
  *(undefined2 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  puVar1 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x110) = 0xffffffff;
                    /* catch() { ... } // from try @ 0046a8a4 with catch @ 0046ad28 */
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x108) = 0xffffffffffffffff;
  *(undefined **)(this + 0x120) = puVar1 + 0x18;
  return;
}


