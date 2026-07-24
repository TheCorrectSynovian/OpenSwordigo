/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042da88
 * Function: Caver::Proto::SpawnPointComponent::Clear
 * Signature: undefined __thiscall Clear(SpawnPointComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpawnPointComponent::Clear() */

void __thiscall Caver::Proto::SpawnPointComponent::Clear(SpawnPointComponent *this)

{
  if (((this[0x18] != (SpawnPointComponent)0x0) &&
      (*(undefined4 *)(this + 0xc) = 0, ((byte)this[0x18] >> 1 & 1) != 0)) &&
     (*(Vector3 **)(this + 0x10) != (Vector3 *)0x0)) {
    Vector3::Clear(*(Vector3 **)(this + 0x10));
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


