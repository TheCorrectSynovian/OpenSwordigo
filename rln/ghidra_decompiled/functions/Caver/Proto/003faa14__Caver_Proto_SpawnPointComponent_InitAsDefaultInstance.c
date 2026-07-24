/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003faa14
 * Function: Caver::Proto::SpawnPointComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(SpawnPointComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpawnPointComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::SpawnPointComponent::InitAsDefaultInstance(SpawnPointComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


