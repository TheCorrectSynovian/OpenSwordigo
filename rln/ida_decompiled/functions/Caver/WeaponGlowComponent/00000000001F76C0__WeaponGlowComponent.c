/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F76C0
 * Mangled: ._ZN5Caver19WeaponGlowComponentC2Ev
 * Demangled: Caver::WeaponGlowComponent::WeaponGlowComponent(void)
 *
 * Callers: 1
 *   0x000000000024FD78  Caver::WeaponGlowComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002CA560  Caver::SwingComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F76C8 string=0x00000000001F76CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::WeaponGlowComponent::WeaponGlowComponent(Caver::WeaponGlowComponent *this)
{
  JUMPOUT(0x2CA5B8);
}

