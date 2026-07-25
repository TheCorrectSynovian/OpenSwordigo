/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002023E0
 * Mangled: ._ZN5Caver34SwingableWeaponControllerComponent9StopSwingEv
 * Demangled: Caver::SwingableWeaponControllerComponent::StopSwing(void)
 *
 * Callers: 3
 *   0x000000000025E040  Caver::CharControllerComponent::Hurt(void)
 *   0x000000000025E468  Caver::CharControllerComponent::Die(void)
 *   0x000000000025EEDC  Caver::CharControllerComponent::StopSwing(void)
 *
 * Callees: 1
 *   0x00000000002C90B4  Caver::SwingableWeaponControllerComponent::StopSwing(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002023E8 string=0x00000000002023EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponControllerComponent::StopSwing(
        Caver::SwingableWeaponControllerComponent *this)
{
  return _ZN5Caver34SwingableWeaponControllerComponent9StopSwingEv(this);
}

