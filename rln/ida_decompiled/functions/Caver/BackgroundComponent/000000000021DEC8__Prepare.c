/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021DEC8
 * Mangled: _ZN5Caver19BackgroundComponent7PrepareEv
 * Demangled: Caver::BackgroundComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F81D0  Caver::SceneObject::SetAlwaysActive(bool)
 *
 * Referenced strings: 1
 *   insn=0x000000000021DED0 string=0x00000000001F81D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BackgroundComponent::Prepare(Caver::SceneObject **this)
{
  Caver::SceneObject::SetAlwaysActive(this[5]);
}

