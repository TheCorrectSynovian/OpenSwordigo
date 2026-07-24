/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004197e0
 * Function: Caver::Proto::EntityControllerComponent::EntityControllerComponent
 * Signature: undefined __thiscall EntityControllerComponent(EntityControllerComponent * this, EntityControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityControllerComponent::EntityControllerComponent(Caver::Proto::EntityControllerComponent
   const&) */

void __thiscall
Caver::Proto::EntityControllerComponent::EntityControllerComponent
          (EntityControllerComponent *this,EntityControllerComponent *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_00689bc8;
                    /* catch() { ... } // from try @ 00418090 with catch @ 004197fc */
  puVar1 = PTR_vtable_007e7ec8 + 0x10;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 0x28) = uVar2;
  MergeFrom(this,param_1);
  return;
}


