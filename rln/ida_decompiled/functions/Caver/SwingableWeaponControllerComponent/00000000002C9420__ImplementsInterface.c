/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C9420
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::SwingableWeaponControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000261410  Caver::SwingableWeaponControllerComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002C9420 string=0x00000000002C9424 "QD"
 *   insn=0x00000000002C9424 string=0x00000000002C9428 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::SwingableWeaponControllerComponent::ImplementsInterface(
        Caver::SwingableWeaponControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::SwingableWeaponControllerComponent *this))(Caver::SwingableWeaponControllerComponent *__hidden this))
{
  return a2 == Caver::SwingableWeaponControllerComponent::Interface;
}

