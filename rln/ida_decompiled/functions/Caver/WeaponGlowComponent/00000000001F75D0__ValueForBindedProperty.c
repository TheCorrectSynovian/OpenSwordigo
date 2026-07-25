/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F75D0
 * Mangled: ._ZN5Caver19WeaponGlowComponent22ValueForBindedPropertyEi
 * Demangled: Caver::WeaponGlowComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000002CB1F8  `non-virtual thunk to'Caver::WeaponGlowComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002CB13C  Caver::WeaponGlowComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F75D8 string=0x00000000001F75DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponGlowComponent::ValueForBindedProperty(Caver::WeaponGlowComponent *this, int a2)
{
  return _ZN5Caver19WeaponGlowComponent22ValueForBindedPropertyEi(this, a2);
}

