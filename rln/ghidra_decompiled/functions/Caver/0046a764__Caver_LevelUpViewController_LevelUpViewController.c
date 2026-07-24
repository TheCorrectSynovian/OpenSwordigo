/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046a764
 * Function: Caver::LevelUpViewController::LevelUpViewController
 * Signature: undefined __thiscall LevelUpViewController(LevelUpViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LevelUpViewController::LevelUpViewController() */

void __thiscall Caver::LevelUpViewController::LevelUpViewController(LevelUpViewController *this)

{
  undefined *puVar1;
  
                    /* try { // try from 0046a770 to 0056a7ab has its CatchHandler @ 0046adfc */
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar1 = PTR_vtable_007e6058;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x48) = puVar1 + 0x80;
  return;
}


