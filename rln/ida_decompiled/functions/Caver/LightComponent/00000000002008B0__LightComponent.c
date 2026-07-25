/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002008B0
 * Mangled: ._ZN5Caver14LightComponentC2Ev
 * Demangled: Caver::LightComponent::LightComponent(void)
 *
 * Callers: 1
 *   0x000000000024FDB8  Caver::LightComponent::Create(void)
 *
 * Callees: 1
 *   0x0000000000221A4C  Caver::LightComponent::LightComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002008B8 string=0x00000000002008BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LightComponent::LightComponent(Caver::LightComponent *this)
{
  return _ZN5Caver14LightComponentC2Ev(this);
}

