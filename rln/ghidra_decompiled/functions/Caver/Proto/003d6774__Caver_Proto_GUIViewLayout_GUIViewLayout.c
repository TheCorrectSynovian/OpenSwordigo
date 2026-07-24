/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d6774
 * Function: Caver::Proto::GUIViewLayout::GUIViewLayout
 * Signature: undefined __thiscall GUIViewLayout(GUIViewLayout * this, GUIViewLayout * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIViewLayout::GUIViewLayout(Caver::Proto::GUIViewLayout const&) */

void __thiscall
Caver::Proto::GUIViewLayout::GUIViewLayout(GUIViewLayout *this,GUIViewLayout *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e5978;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x28) = 4;
  puVar1 = PTR__default_identifier__007e4ab0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  *(GUIViewLayout **)(this + 0x18) = this + 0x30;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined4 *)(this + 0x58) = 0;
  MergeFrom(this,param_1);
  return;
}


