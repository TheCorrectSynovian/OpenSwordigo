/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CB1F8
 * Mangled: _ZThn16_N5Caver19WeaponGlowComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::WeaponGlowComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F75D0  Caver::WeaponGlowComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002CB1FC string=0x00000000001F75D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::WeaponGlowComponent::ValueForBindedProperty(
        Caver::WeaponGlowComponent *this,
        int a2)
{
  return Caver::WeaponGlowComponent::ValueForBindedProperty((Caver::WeaponGlowComponent *)((char *)this - 16), a2);
}

