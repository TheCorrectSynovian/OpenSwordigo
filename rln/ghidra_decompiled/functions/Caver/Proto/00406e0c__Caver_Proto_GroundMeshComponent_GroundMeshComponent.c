/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00406e0c
 * Function: Caver::Proto::GroundMeshComponent::GroundMeshComponent
 * Signature: undefined __thiscall GroundMeshComponent(GroundMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshComponent::GroundMeshComponent() */

void __thiscall Caver::Proto::GroundMeshComponent::GroundMeshComponent(GroundMeshComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_vtable_007e7300;
  *(GroundMeshComponent **)(this + 0x20) = this + 0x38;
  *(undefined8 *)(this + 0x58) = 0;
  *(GroundMeshComponent **)(this + 0x60) = this + 0x78;
  *(GroundMeshComponent **)(this + 0x98) = this + 0xb0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x30) = 4;
  *(undefined4 *)(this + 0x70) = 4;
  *(undefined4 *)(this + 0xa8) = 4;
  puVar1 = PTR__default_vertex_data__007e4e40;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  puVar2 = PTR__default_indices__007e67d8;
  *(undefined8 *)(this + 0xd0) = 0;
  this[0xd8] = (GroundMeshComponent)0x0;
  *(undefined **)this = puVar3 + 0x10;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0xdc) = 0;
  return;
}


