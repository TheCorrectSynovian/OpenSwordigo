/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d01e8
 * Function: Caver::Proto::Polygon::Polygon
 * Signature: undefined __thiscall Polygon(Polygon * this, Polygon * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Polygon::Polygon(Caver::Proto::Polygon const&) */

void __thiscall Caver::Proto::Polygon::Polygon(Polygon *this,Polygon *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7600 + 0x10;
  *(Polygon **)(this + 0x10) = this + 0x28;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 4;
  *(undefined2 *)(this + 0x48) = 0x100;
  *(undefined **)this = puVar1;
  *(undefined4 *)(this + 0x4c) = 0;
  MergeFrom(this,param_1);
  return;
}


