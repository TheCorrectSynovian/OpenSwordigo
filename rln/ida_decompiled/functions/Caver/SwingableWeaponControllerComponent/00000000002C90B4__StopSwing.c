/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C90B4
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent9StopSwingEv
 * Demangled: Caver::SwingableWeaponControllerComponent::StopSwing(void)
 *
 * Callers: 1
 *   0x00000000002023E0  Caver::SwingableWeaponControllerComponent::StopSwing(void)
 *
 * Callees: 1
 *   0x00000000001F46C0  Caver::SwingableWeaponComponent::StopSwing(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002C90B4 string=0x00000000002C90B8 "@"
 *   insn=0x00000000002C90BC string=0x00000000001F46C0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SwingableWeaponComponent *__fastcall Caver::SwingableWeaponControllerComponent::StopSwing(
        Caver::SwingableWeaponControllerComponent *this)
{
  Caver::SwingableWeaponComponent *result; // x0

  result = (Caver::SwingableWeaponComponent *)*((_QWORD *)this + 19);
  if ( result )
    return (Caver::SwingableWeaponComponent *)Caver::SwingableWeaponComponent::StopSwing(result);
  return result;
}

