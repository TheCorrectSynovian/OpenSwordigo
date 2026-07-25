/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000292DEC
 * Mangled: _ZNK5Caver15AttackComponent5CloneEv
 * Demangled: Caver::AttackComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000292B5C  Caver::AttackComponent::~AttackComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5C60  Caver::AttackComponent::InitWithComponent(Caver::AttackComponent const*)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002017C0  Caver::AttackComponent::AttackComponent(void)
 *   0x0000000000292E3C  Caver::AttackComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000292E00 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000292E04 string=0x0000000000292E08 "n"
 *   insn=0x0000000000292E14 string=0x00000000001F5C60 "P'"
 *   insn=0x0000000000292E2C string=0x0000000000292E30 " "
 *   insn=0x0000000000292E30 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::AttackComponent *__fastcall Caver::AttackComponent::Clone(Caver::AttackComponent *this)
{
  Caver::AttackComponent *v1; // x19

  v1 = (Caver::AttackComponent *)operator new(0x138u);
  Caver::AttackComponent::AttackComponent(v1);
  Caver::AttackComponent::InitWithComponent();
  return v1;
}

