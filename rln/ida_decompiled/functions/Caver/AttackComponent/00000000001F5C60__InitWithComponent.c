/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5C60
 * Mangled: ._ZN5Caver15AttackComponent17InitWithComponentEPKS0_
 * Demangled: Caver::AttackComponent::InitWithComponent(Caver::AttackComponent const*)
 *
 * Callers: 1
 *   0x0000000000292DEC  Caver::AttackComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000290618  Caver::SpellComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5C68 string=0x00000000001F5C6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::AttackComponent::InitWithComponent()
{
  JUMPOUT(0x290C10);
}

