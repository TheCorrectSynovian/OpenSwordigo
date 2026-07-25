/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002024A0
 * Mangled: ._ZN5Caver11WeaponTrailC2Ev
 * Demangled: Caver::WeaponTrail::WeaponTrail(void)
 *
 * Callers: 1
 *   0x00000000002CC828  Caver::WeaponTrailComponent::WeaponTrailComponent(void)
 *
 * Callees: 1
 *   0x00000000002CC0F0  Caver::WeaponGlowComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002024A8 string=0x00000000002024AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::WeaponTrail::WeaponTrail(Caver::WeaponTrail *this)
{
  JUMPOUT(0x2CC148);
}

