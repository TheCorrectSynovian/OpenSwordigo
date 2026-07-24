/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435704
 * Function: Caver::Proto::ProjectileControllerComponent::ProjectileControllerComponent
 * Signature: undefined __thiscall ProjectileControllerComponent(ProjectileControllerComponent * this, ProjectileControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProjectileControllerComponent::ProjectileControllerComponent(Caver::Proto::ProjectileControllerComponent
   const&) */

void __thiscall
Caver::Proto::ProjectileControllerComponent::ProjectileControllerComponent
          (ProjectileControllerComponent *this,ProjectileControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5f00;
  *(undefined4 *)(this + 8) = 0;
  *(undefined2 *)(this + 0xc) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x10) = 0;
  MergeFrom(this,param_1);
  return;
}


