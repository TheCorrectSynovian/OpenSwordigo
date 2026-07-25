/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025EEDC
 * Mangled: _ZN5Caver23CharControllerComponent9StopSwingEv
 * Demangled: Caver::CharControllerComponent::StopSwing(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000002023E0  Caver::SwingableWeaponControllerComponent::StopSwing(void)
 *
 * Referenced strings: 10
 *   insn=0x000000000025EEE8 string=0x000000000025EEEC "`"
 *   insn=0x000000000025EEF0 string=0x000000000025EEF4 "`"
 *   insn=0x000000000025EEF0 string=0x000000000025EF08 "6"
 *   insn=0x000000000025EEFC string=0x000000000025EF00 "`"
 *   insn=0x000000000025EEFC string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025EF00 string=0x000000000025EF04 "@"
 *   insn=0x000000000025EF04 string=0x000000000025EF0C "`"
 *   insn=0x000000000025EF10 string=0x000000000025EF14 "`b"
 *   insn=0x000000000025EF1C string=0x000000000025EF20 "`"
 *   insn=0x000000000025EF2C string=0x000000000025EF30 ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SwingableWeaponControllerComponent *__fastcall Caver::CharControllerComponent::StopSwing(
        Caver::CharControllerComponent *this)
{
  Caver::SwingableWeaponControllerComponent *v2; // x0
  Caver::SwingableWeaponControllerComponent *result; // x0

  v2 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)this + 56);
  if ( v2
    || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 432), this),
        (v2 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)this + 56)) != 0) )
  {
    Caver::SwingableWeaponControllerComponent::StopSwing(v2);
  }
  result = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)this + 53);
  if ( result )
    return (Caver::SwingableWeaponControllerComponent *)Caver::SwingableWeaponControllerComponent::StopSwing(result);
  Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 408), this);
  result = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)this + 53);
  if ( result )
    return (Caver::SwingableWeaponControllerComponent *)Caver::SwingableWeaponControllerComponent::StopSwing(result);
  return result;
}

