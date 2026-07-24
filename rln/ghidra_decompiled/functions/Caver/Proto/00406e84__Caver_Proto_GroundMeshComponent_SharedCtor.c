/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00406e84
 * Function: Caver::Proto::GroundMeshComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(GroundMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshComponent::SharedCtor() */

void __thiscall Caver::Proto::GroundMeshComponent::SharedCtor(GroundMeshComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_indices__007e67d8;
  puVar1 = PTR__default_vertex_data__007e4e40;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  this[0xd8] = (GroundMeshComponent)0x0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0xdc) = 0;
  return;
}


