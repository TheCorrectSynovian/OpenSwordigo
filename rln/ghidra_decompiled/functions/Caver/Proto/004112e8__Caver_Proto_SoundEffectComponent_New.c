/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004112e8
 * Function: Caver::Proto::SoundEffectComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Proto::SoundEffectComponent::New() const */

void Caver::Proto::SoundEffectComponent::New(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = operator_new(0x28);
  puVar2 = PTR_vtable_007e64a8;
  *(undefined4 *)(plVar4 + 1) = 0;
  puVar3 = PTR__default_name__007e7518;
  lVar1 = _DAT_00683948;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[2] = (long)puVar3;
  plVar4[3] = lVar1;
  *(undefined4 *)(plVar4 + 4) = 0;
  return;
}


