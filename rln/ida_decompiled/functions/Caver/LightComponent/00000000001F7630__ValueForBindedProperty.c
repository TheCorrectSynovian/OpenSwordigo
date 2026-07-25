/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7630
 * Mangled: ._ZN5Caver14LightComponent22ValueForBindedPropertyEi
 * Demangled: Caver::LightComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000222C48  `non-virtual thunk to'Caver::LightComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000222BE0  Caver::LightComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7634 string=0x0000000000222BE0 "?"
 *   insn=0x00000000001F7638 string=0x00000000001F763C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LightComponent::ValueForBindedProperty(Caver::LightComponent *this, int a2)
{
  return _ZN5Caver14LightComponent22ValueForBindedPropertyEi(this, a2);
}

