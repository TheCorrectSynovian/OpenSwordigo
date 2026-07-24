/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a7bcc
 * Function: Caver::GUIViewLayout::GUIViewLayout
 * Signature: undefined __thiscall GUIViewLayout(GUIViewLayout * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewLayout::GUIViewLayout() */

void __thiscall Caver::GUIViewLayout::GUIViewLayout(GUIViewLayout *this)

{
  undefined *puVar1;
  GUIViewLayout *pGVar2;
  
  puVar1 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined **)this = puVar1 + 0x18;
  *(undefined8 *)(this + 8) = 0;
  pGVar2 = this + 0x28;
  *(undefined8 *)pGVar2 = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(GUIViewLayout **)(this + 0x38) = pGVar2;
  *(GUIViewLayout **)(this + 0x40) = pGVar2;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0x3f80000000000000;
  return;
}


