/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8D30
 * Mangled: ._ZN5Caver15DamageComponent22ValueForBindedPropertyEi
 * Demangled: Caver::DamageComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000265C8C  `non-virtual thunk to'Caver::DamageComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002659DC  Caver::DamageComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8D38 string=0x00000000001F8D3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DamageComponent::ValueForBindedProperty(Caver::DamageComponent *this, int a2)
{
  return _ZN5Caver15DamageComponent22ValueForBindedPropertyEi(this, a2);
}

