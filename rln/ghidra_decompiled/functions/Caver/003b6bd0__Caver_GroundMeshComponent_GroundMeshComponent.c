/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b6bd0
 * Function: Caver::GroundMeshComponent::GroundMeshComponent
 * Signature: undefined __thiscall GroundMeshComponent(GroundMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::GroundMeshComponent() */

void __thiscall Caver::GroundMeshComponent::GroundMeshComponent(GroundMeshComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  GroundMeshComponent *pGVar3;
  undefined1 auVar4 [16];
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (GroundMeshComponent)0x0;
  puVar1 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x50) = 0;
  puVar2 = PTR_vtable_007e7478;
  *(undefined **)(this + 0x38) = puVar1 + 0x18;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  pGVar3 = this + 0x48;
  *(undefined8 *)pGVar3 = 0;
  *(undefined **)(this + 0x18) = puVar2 + 0x168;
  *(undefined **)(this + 0x10) = puVar2 + 0x128;
  auVar4 = NEON_fmov(0x3f800000,4);
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(long *)(this + 0xb8) = auVar4._8_8_;
  *(long *)(this + 0xb0) = auVar4._0_8_;
  this[0xc0] = (GroundMeshComponent)0x0;
  *(GroundMeshComponent **)(this + 0x58) = pGVar3;
  *(GroundMeshComponent **)(this + 0x60) = pGVar3;
  *(long *)(this + 0xcc) = auVar4._8_8_;
  *(long *)(this + 0xc4) = auVar4._0_8_;
  return;
}


