/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410958
 * Function: Caver::Proto::ShadowComponent::Clear
 * Signature: undefined __thiscall Clear(ShadowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShadowComponent::Clear() */

void __thiscall Caver::Proto::ShadowComponent::Clear(ShadowComponent *this)

{
  if (this[0x20] != (ShadowComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    if ((((byte)this[0x20] >> 2 & 1) != 0) && (*(Vector3 **)(this + 0x18) != (Vector3 *)0x0)) {
      Vector3::Clear(*(Vector3 **)(this + 0x18));
    }
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


