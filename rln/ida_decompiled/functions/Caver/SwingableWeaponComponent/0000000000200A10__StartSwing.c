/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200A10
 * Mangled: ._ZN5Caver24SwingableWeaponComponent10StartSwingEiff
 * Demangled: Caver::SwingableWeaponComponent::StartSwing(int,float,float)
 *
 * Callers: 1
 *   0x00000000002C909C  Caver::SwingableWeaponControllerComponent::StartSwing(int,float,float)
 *
 * Callees: 1
 *   0x00000000002C5980  Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200A18 string=0x0000000000200A1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SwingableWeaponComponent::StartSwing(Caver::SwingableWeaponComponent *this, float a2, float a3)
{
  JUMPOUT(0x2C5DBC);
}

