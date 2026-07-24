/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033a8ec
 * Function: Caver::SoundEffectComponent::Clone
 * Signature: undefined __thiscall Clone(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::Clone() const */

long * __thiscall Caver::SoundEffectComponent::Clone(SoundEffectComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = operator_new(0x98);
  *(undefined4 *)(plVar3 + 1) = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *(undefined1 *)(plVar3 + 6) = 0;
  puVar2 = PTR_vtable_007e54d0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  plVar3[7] = (long)puVar1;
  plVar4 = plVar3 + 9;
  *plVar4 = 0;
  plVar3[0xb] = (long)plVar4;
  plVar3[0xc] = (long)plVar4;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[0xd] = 0;
  plVar3[0xe] = (long)(puVar2 + 400);
  plVar3[10] = 0;
  plVar3[3] = (long)(puVar2 + 0x170);
  plVar3[2] = (long)(puVar2 + 0x130);
  plVar3[0xf] = (long)puVar1;
  *(undefined4 *)(plVar3 + 0x10) = 0x3f800000;
  *(undefined8 *)((long)plVar3 + 0x84) = 0;
  *(undefined4 *)((long)plVar3 + 0x94) = 0;
  *(undefined8 *)((long)plVar3 + 0x8c) = 0;
  *(undefined4 *)(plVar3 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar3 + 7,this + 0x38);
  FUN_0066a6a8(plVar3 + 0xf,this + 0x78);
  plVar3[0x10] = *(long *)(this + 0x80);
  return plVar3;
}


