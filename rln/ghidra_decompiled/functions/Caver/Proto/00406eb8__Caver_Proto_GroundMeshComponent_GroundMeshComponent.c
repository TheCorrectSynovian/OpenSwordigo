/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00406eb8
 * Function: Caver::Proto::GroundMeshComponent::GroundMeshComponent
 * Signature: undefined __thiscall GroundMeshComponent(GroundMeshComponent * this, GroundMeshComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshComponent::GroundMeshComponent(Caver::Proto::GroundMeshComponent const&)
    */

void __thiscall
Caver::Proto::GroundMeshComponent::GroundMeshComponent
          (GroundMeshComponent *this,GroundMeshComponent *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e7300;
  *(undefined4 *)(this + 0x30) = 4;
  *(undefined4 *)(this + 0x70) = 4;
  *(undefined4 *)(this + 0xa8) = 4;
  puVar1 = PTR__default_vertex_data__007e4e40;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar2 + 0x10;
  puVar2 = PTR__default_indices__007e67d8;
  *(undefined8 *)(this + 0xd0) = 0;
  this[0xd8] = (GroundMeshComponent)0x0;
  *(GroundMeshComponent **)(this + 0x20) = this + 0x38;
  *(undefined8 *)(this + 0x58) = 0;
  *(GroundMeshComponent **)(this + 0x60) = this + 0x78;
  *(GroundMeshComponent **)(this + 0x98) = this + 0xb0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0xdc) = 0;
  MergeFrom(this,param_1);
  return;
}


