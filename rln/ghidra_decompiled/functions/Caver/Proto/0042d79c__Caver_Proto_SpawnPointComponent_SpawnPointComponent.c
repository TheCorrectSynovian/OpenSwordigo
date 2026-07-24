/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042d79c
 * Function: Caver::Proto::SpawnPointComponent::SpawnPointComponent
 * Signature: undefined __thiscall SpawnPointComponent(SpawnPointComponent * this, SpawnPointComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpawnPointComponent::SpawnPointComponent(Caver::Proto::SpawnPointComponent const&)
    */

void __thiscall
Caver::Proto::SpawnPointComponent::SpawnPointComponent
          (SpawnPointComponent *this,SpawnPointComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5ed8;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


