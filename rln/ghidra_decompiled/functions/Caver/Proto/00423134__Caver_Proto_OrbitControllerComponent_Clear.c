/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423134
 * Function: Caver::Proto::OrbitControllerComponent::Clear
 * Signature: undefined __thiscall Clear(OrbitControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OrbitControllerComponent::Clear() */

void __thiscall Caver::Proto::OrbitControllerComponent::Clear(OrbitControllerComponent *this)

{
  if (this[0x20] != (OrbitControllerComponent)0x0) {
    if ((((byte)this[0x20] & 1) != 0) && (*(Vector3 **)(this + 0x10) != (Vector3 *)0x0)) {
      Vector3::Clear(*(Vector3 **)(this + 0x10));
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


