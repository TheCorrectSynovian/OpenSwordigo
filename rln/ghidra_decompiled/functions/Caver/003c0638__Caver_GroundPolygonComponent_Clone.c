/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c0638
 * Function: Caver::GroundPolygonComponent::Clone
 * Signature: undefined __thiscall Clone(GroundPolygonComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundPolygonComponent::Clone() const */

GroundPolygonComponent * __thiscall
Caver::GroundPolygonComponent::Clone(GroundPolygonComponent *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  GroundPolygonComponent *this_00;
  GroundPolygonComponent *pGVar5;
  
  this_00 = operator_new(0xe8);
  *(undefined4 *)(this_00 + 8) = 0;
  this_00[0x30] = (GroundPolygonComponent)0x0;
  puVar4 = PTR_vtable_007e6680;
  puVar3 = PTR_DAT_007e5de8;
  puVar1 = PTR_vtable_007e6680 + 0x128;
  *(undefined **)(this_00 + 0x18) = PTR_vtable_007e6680 + 0x168;
  *(undefined **)(this_00 + 0x10) = puVar1;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  uVar2 = DAT_00689f58;
  *(undefined **)(this_00 + 0x38) = puVar3 + 0x18;
  pGVar5 = this_00 + 0x48;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)pGVar5 = 0;
  *(undefined **)this_00 = puVar4 + 0x10;
  this_00[0x91] = (GroundPolygonComponent)0x1;
  this_00[0xb0] = (GroundPolygonComponent)0x1;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined4 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  this_00[0x90] = (GroundPolygonComponent)0x0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined4 *)(this_00 + 0xb4) = 0x3f800000;
  this_00[0xb8] = (GroundPolygonComponent)0x0;
  *(undefined **)(this_00 + 0xc0) = puVar3 + 0x18;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(GroundPolygonComponent **)(this_00 + 0x58) = pGVar5;
  *(GroundPolygonComponent **)(this_00 + 0x60) = pGVar5;
  *(undefined8 *)(this_00 + 0xa8) = uVar2;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  InitWithComponent(this_00,this);
  return this_00;
}


