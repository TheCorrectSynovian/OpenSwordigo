/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a5b88
 * Function: Caver::ParticleComponent::Clone
 * Signature: undefined __thiscall Clone(ParticleComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleComponent::Clone() const */

long * __thiscall Caver::ParticleComponent::Clone(ParticleComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = operator_new(0x90);
  *(undefined4 *)(plVar3 + 1) = 0;
  *(undefined1 *)(plVar3 + 6) = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar2 = PTR_vtable_007e6850;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  plVar3[7] = (long)puVar1;
  plVar4 = plVar3 + 9;
  *plVar4 = 0;
  plVar3[0xb] = (long)plVar4;
  plVar3[0xc] = (long)plVar4;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[3] = (long)(puVar2 + 0x168);
  plVar3[2] = (long)(puVar2 + 0x128);
  plVar3[0xe] = (long)puVar1;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = -0x100000000;
  *(undefined4 *)(plVar3 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar3 + 7,this + 0x38);
  FUN_0066a6a8(plVar3 + 0xe,this + 0x70);
  *(undefined4 *)(plVar3 + 0x10) = *(undefined4 *)(this + 0x80);
  return plVar3;
}


