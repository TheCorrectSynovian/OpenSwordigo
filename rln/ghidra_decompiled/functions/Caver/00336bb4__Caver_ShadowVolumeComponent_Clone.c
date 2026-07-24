/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336bb4
 * Function: Caver::ShadowVolumeComponent::Clone
 * Signature: undefined __thiscall Clone(ShadowVolumeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowVolumeComponent::Clone() const */

long * __thiscall Caver::ShadowVolumeComponent::Clone(ShadowVolumeComponent *this)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = operator_new(0x90);
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *(undefined1 *)(plVar2 + 6) = 0;
  puVar1 = PTR_vtable_007e5730;
  plVar2[7] = (long)(PTR_DAT_007e5de8 + 0x18);
  plVar3 = plVar2 + 9;
  *plVar3 = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[10] = 0;
  plVar2[0xb] = (long)plVar3;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0x11] = 0;
  plVar2[0xf] = 0;
  *(undefined4 *)(plVar2 + 0x10) = 0;
  plVar2[0xc] = (long)plVar3;
  plVar2[3] = (long)(puVar1 + 0x168);
  plVar2[2] = (long)(puVar1 + 0x128);
  *(undefined4 *)(plVar2 + 4) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(plVar2 + 7,this + 0x38);
  return plVar2;
}


