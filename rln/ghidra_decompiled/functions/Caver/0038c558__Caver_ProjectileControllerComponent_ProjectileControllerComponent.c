/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038c558
 * Function: Caver::ProjectileControllerComponent::ProjectileControllerComponent
 * Signature: undefined __thiscall ProjectileControllerComponent(ProjectileControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileControllerComponent::ProjectileControllerComponent() */

void __thiscall
Caver::ProjectileControllerComponent::ProjectileControllerComponent
          (ProjectileControllerComponent *this)

{
  undefined *puVar1;
  ProjectileControllerComponent *pPVar2;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (ProjectileControllerComponent)0x0;
  puVar1 = PTR_vtable_007e78b0;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pPVar2 = this + 0x48;
  *(undefined8 *)pPVar2 = 0;
  *(undefined2 *)(this + 0x70) = 0x101;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(ProjectileControllerComponent **)(this + 0x58) = pPVar2;
  *(ProjectileControllerComponent **)(this + 0x60) = pPVar2;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar1 + 0x168;
  *(undefined **)(this + 0x10) = puVar1 + 0x128;
  *(undefined8 *)(this + 0x78) = 0;
  return;
}


