/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00447c20
 * Function: Caver::GameOverViewController::GameOverViewController
 * Signature: undefined __thiscall GameOverViewController(GameOverViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverViewController::GameOverViewController() */

void __thiscall Caver::GameOverViewController::GameOverViewController(GameOverViewController *this)

{
  undefined *puVar1;
  
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar1 = PTR_vtable_007e5538;
  this[0x50] = (GameOverViewController)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x48) = puVar1 + 0x80;
  *(undefined8 *)(this + 0x75) = 0;
  return;
}


