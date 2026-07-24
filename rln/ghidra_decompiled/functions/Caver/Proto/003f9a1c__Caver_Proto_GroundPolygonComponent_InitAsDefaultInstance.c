/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f9a1c
 * Function: Caver::Proto::GroundPolygonComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(GroundPolygonComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundPolygonComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::GroundPolygonComponent::InitAsDefaultInstance(GroundPolygonComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Program::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = Polygon::default_instance();
  *(undefined8 *)(this + 0x50) = uVar1;
  return;
}


