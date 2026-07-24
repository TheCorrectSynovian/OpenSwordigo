/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040dadc
 * Function: Caver::Proto::HealthComponent::Clear
 * Signature: undefined __thiscall Clear(HealthComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HealthComponent::Clear() */

void __thiscall Caver::Proto::HealthComponent::Clear(HealthComponent *this)

{
  if (this[0x20] != (HealthComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    if ((((byte)this[0x20] >> 2 & 1) != 0) && (*(Vector2 **)(this + 0x18) != (Vector2 *)0x0)) {
      Vector2::Clear(*(Vector2 **)(this + 0x18));
    }
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


