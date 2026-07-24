/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004513c8
 * Function: Caver::GameViewController::GameViewController
 * Signature: undefined __thiscall GameViewController(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::GameViewController() */

void __thiscall Caver::GameViewController::GameViewController(GameViewController *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar2 = PTR_vtable_007e7d18;
  puVar1 = PTR_vtable_007e7d18 + 0xe0;
  *(undefined **)this = PTR_vtable_007e7d18 + 0x10;
  *(undefined **)(this + 0x50) = puVar2 + 0xf8;
  *(undefined **)(this + 0x48) = puVar1;
  *(undefined **)(this + 0x60) = puVar2 + 0x148;
  *(undefined **)(this + 0x58) = puVar2 + 0x118;
  *(undefined **)(this + 0x78) = puVar2 + 0x198;
  *(undefined **)(this + 0x70) = puVar2 + 0x180;
  *(undefined **)(this + 0x68) = puVar2 + 0x160;
  memset(this + 0x80,0,0x6a);
  puVar1 = PTR_DAT_007e5de8;
  this[0xf8] = (GameViewController)0x0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x110] = (GameViewController)0x0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined **)(this + 0xf0) = puVar1 + 0x18;
  *(undefined **)(this + 0x138) = puVar1 + 0x18;
  return;
}


