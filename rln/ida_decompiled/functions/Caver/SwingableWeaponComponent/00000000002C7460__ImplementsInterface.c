/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C7460
 * Mangled: _ZN5Caver24SwingableWeaponComponent19ImplementsInterfaceEl
 * Demangled: Caver::SwingableWeaponComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000029EB14  Caver::SwingableWeaponComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002C7460 string=0x00000000002C7464 ""
 *   insn=0x00000000002C7464 string=0x00000000002C7468 "?"
 *   insn=0x00000000002C7464 string=0x000000000029EB14 "@""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::SwingableWeaponComponent::ImplementsInterface(
        Caver::SwingableWeaponComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::SwingableWeaponComponent *this))(Caver::SwingableWeaponComponent *__hidden this))
{
  return a2 == Caver::SwingableWeaponComponent::Interface;
}

