/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202280
 * Mangled: ._ZN5Caver19WeaponGlowComponentC2Ev_0
 * Demangled: Caver::WeaponGlowComponent::WeaponGlowComponent(void)
 *
 * Callers: 1
 *   0x00000000002CBFF8  Caver::WeaponGlowComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002CA560  Caver::SwingComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202288 string=0x000000000020228C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::WeaponGlowComponent::WeaponGlowComponent(Caver::WeaponGlowComponent *this)
{
  JUMPOUT(0x2CA5B8);
}

