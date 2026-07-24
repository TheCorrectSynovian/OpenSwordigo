/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042ad9c
 * Function: Caver::Proto::SwingableWeaponControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponControllerComponent::New() const */

void Caver::Proto::SwingableWeaponControllerComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = operator_new(0x28);
  puVar1 = PTR_vtable_007e6528;
  plVar4[1] = 0;
  puVar3 = PTR__default_weapon_template_name__007e78e0;
  puVar2 = PTR__default_controlling_bone_name__007e7410;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[3] = (long)puVar3;
  plVar4[2] = (long)puVar2;
  *(undefined4 *)(plVar4 + 4) = 0;
  return;
}


