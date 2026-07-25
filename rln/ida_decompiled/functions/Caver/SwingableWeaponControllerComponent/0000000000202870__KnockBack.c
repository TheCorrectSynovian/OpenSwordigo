/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202870
 * Mangled: ._ZN5Caver34SwingableWeaponControllerComponent9KnockBackEv
 * Demangled: Caver::SwingableWeaponControllerComponent::KnockBack(void)
 *
 * Callers: 1
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x00000000002C90C4  Caver::SwingableWeaponControllerComponent::KnockBack(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202874 string=0x00000000002C90C4 "\n"
 *   insn=0x0000000000202878 string=0x000000000020287C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponControllerComponent::KnockBack(
        Caver::SwingableWeaponControllerComponent *this)
{
  return _ZN5Caver34SwingableWeaponControllerComponent9KnockBackEv(this);
}

