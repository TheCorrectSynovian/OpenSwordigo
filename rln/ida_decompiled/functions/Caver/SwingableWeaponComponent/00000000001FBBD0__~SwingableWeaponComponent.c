/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBBD0
 * Mangled: ._ZN5Caver24SwingableWeaponComponentD2Ev
 * Demangled: Caver::SwingableWeaponComponent::~SwingableWeaponComponent()
 *
 * Callers: 1
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBBD8 string=0x00000000001FBBDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SwingableWeaponComponent::~SwingableWeaponComponent(Caver::SwingableWeaponComponent *this)
{
  JUMPOUT(0x2C6F34);
}

