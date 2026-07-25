/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C8ED8
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent7PrepareEv
 * Demangled: Caver::SwingableWeaponControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002016B0  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002C8ED8 string=0x00000000002C8EDC ""
 *   insn=0x00000000002C8EDC string=0x00000000002C8EE0 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SwingableWeaponControllerComponent *__fastcall Caver::SwingableWeaponControllerComponent::Prepare(
        Caver::SwingableWeaponControllerComponent *this)
{
  if ( *(_QWORD *)(*((_QWORD *)this + 18) - 24LL) )
    return (Caver::SwingableWeaponControllerComponent *)Caver::SwingableWeaponControllerComponent::CreateWeapon(this);
  return this;
}

