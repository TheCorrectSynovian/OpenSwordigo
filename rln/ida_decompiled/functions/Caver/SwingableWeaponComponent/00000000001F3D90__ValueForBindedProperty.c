/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3D90
 * Mangled: ._ZN5Caver24SwingableWeaponComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SwingableWeaponComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000002C4E24  `non-virtual thunk to'Caver::SwingableWeaponComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002C4DD8  Caver::SwingableWeaponComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F3D94 string=0x00000000002C4DD8 ")"
 *   insn=0x00000000001F3D98 string=0x00000000001F3D9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponComponent::ValueForBindedProperty(
        Caver::SwingableWeaponComponent *this,
        int a2)
{
  return _ZN5Caver24SwingableWeaponComponent22ValueForBindedPropertyEi(this, a2);
}

