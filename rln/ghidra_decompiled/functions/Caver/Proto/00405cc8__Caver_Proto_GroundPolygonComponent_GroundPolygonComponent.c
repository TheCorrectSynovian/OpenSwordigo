/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00405cc8
 * Function: Caver::Proto::GroundPolygonComponent::GroundPolygonComponent
 * Signature: undefined __thiscall GroundPolygonComponent(GroundPolygonComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundPolygonComponent::GroundPolygonComponent() */

void __thiscall
Caver::Proto::GroundPolygonComponent::GroundPolygonComponent(GroundPolygonComponent *this)

{
  undefined *puVar1;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(GroundPolygonComponent **)(this + 0x18) = this + 0x30;
  *(undefined4 *)(this + 0x28) = 4;
  this[0x58] = (GroundPolygonComponent)0x1;
  puVar1 = PTR_vtable_007e7d70;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 0x61) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x5c) = 0;
  return;
}


