/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00321b34
 * Function: Caver::LightComponent::Prepare
 * Signature: undefined __thiscall Prepare(LightComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::Prepare() */

void __thiscall Caver::LightComponent::Prepare(LightComponent *this)

{
  RegisterLibrary(this);
  if ((*(uint *)(this + 0x70) < 5) && ((1 << (ulong)(*(uint *)(this + 0x70) & 0x1f) & 0x16U) != 0))
  {
    SceneObject::SetAlwaysActive(*(SceneObject **)(this + 0x28),true);
    return;
  }
  return;
}


