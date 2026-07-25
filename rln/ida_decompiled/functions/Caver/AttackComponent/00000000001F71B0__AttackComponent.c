/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F71B0
 * Mangled: ._ZN5Caver15AttackComponentC2Ev
 * Demangled: Caver::AttackComponent::AttackComponent(void)
 *
 * Callers: 1
 *   0x000000000024FF38  Caver::AttackComponent::Create(void)
 *
 * Callees: 1
 *   0x0000000000290618  Caver::SpellComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F71B8 string=0x00000000001F71BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AttackComponent::AttackComponent(Caver::AttackComponent *this)
{
  JUMPOUT(0x290670);
}

