/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4A10
 * Mangled: ._ZN5Caver34SwingableWeaponControllerComponent10StartSwingEiff
 * Demangled: Caver::SwingableWeaponControllerComponent::StartSwing(int,float,float)
 *
 * Callers: 2
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *   0x000000000026DC24  sub_26DC24
 *
 * Callees: 1
 *   0x00000000002C909C  Caver::SwingableWeaponControllerComponent::StartSwing(int,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4A18 string=0x00000000001F4A1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponControllerComponent::StartSwing(
        Caver::SwingableWeaponControllerComponent *this,
        int a2,
        float a3,
        float a4)
{
  return _ZN5Caver34SwingableWeaponControllerComponent10StartSwingEiff(this, a2, a3, a4);
}

