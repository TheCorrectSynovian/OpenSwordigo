/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003af664
 * Function: Caver::SimpleGlowComponent::SimpleGlowComponent
 * Signature: undefined __thiscall SimpleGlowComponent(SimpleGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SimpleGlowComponent::SimpleGlowComponent() */

void __thiscall Caver::SimpleGlowComponent::SimpleGlowComponent(SimpleGlowComponent *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  GlowComponent::GlowComponent((GlowComponent *)this);
  puVar3 = PTR_vtable_007e6ac0;
  *(undefined8 *)(this + 0xac) = 0x3f0000003f000000;
  *(undefined8 *)(this + 0xa4) = 0x3f0000003f000000;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined **)(this + 0x18) = puVar3 + 0x178;
  *(undefined **)(this + 0x10) = puVar3 + 0x138;
  uVar2 = _UNK_00689a68;
  uVar1 = _DAT_00689a60;
  *(undefined8 *)(this + 0xb4) = 0xa41a00000;
  *(undefined8 *)(this + 0xc4) = uVar2;
  *(undefined8 *)(this + 0xbc) = uVar1;
  uVar2 = _UNK_00689a78;
  uVar1 = _DAT_00689a70;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3e19999a;
  *(undefined **)this = puVar3 + 0x10;
  *(undefined8 *)(this + 0xd8) = uVar2;
  *(undefined8 *)(this + 0xd0) = uVar1;
  return;
}


