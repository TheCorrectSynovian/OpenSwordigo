/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C4E24
 * Mangled: _ZThn16_N5Caver24SwingableWeaponComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::SwingableWeaponComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3D90  Caver::SwingableWeaponComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002C4E28 string=0x00000000001F3D90 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SwingableWeaponComponent::ValueForBindedProperty(
        Caver::SwingableWeaponComponent *this,
        int a2)
{
  return Caver::SwingableWeaponComponent::ValueForBindedProperty(
           (Caver::SwingableWeaponComponent *)((char *)this - 16),
           a2);
}

