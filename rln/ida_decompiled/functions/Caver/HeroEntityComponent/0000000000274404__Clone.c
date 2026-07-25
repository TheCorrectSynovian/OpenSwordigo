/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000274404
 * Mangled: _ZNK5Caver19HeroEntityComponent5CloneEv
 * Demangled: Caver::HeroEntityComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002743CC  Caver::HeroEntityComponent::~HeroEntityComponent()
 *
 * Callees: 6
 *   0x00000000001F50C0  Caver::HeroEntityComponent::HeroEntityComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201400  Caver::HeroEntityComponent::InitWithComponent(Caver::HeroEntityComponent const*)
 *   0x0000000000274454  Caver::HeroEntityComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000274414 string=0x0000000000274418 "r"
 *   insn=0x0000000000274418 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000027441C string=0x0000000000274420 "("
 *   insn=0x0000000000274420 string=0x00000000001F50C0 "P'"
 *   insn=0x0000000000274448 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::HeroEntityComponent *__fastcall Caver::HeroEntityComponent::Clone(Caver::HeroEntityComponent *this)
{
  Caver::HeroEntityComponent *v2; // x19

  v2 = (Caver::HeroEntityComponent *)operator new(0x1D0u);
  Caver::HeroEntityComponent::HeroEntityComponent(v2);
  Caver::HeroEntityComponent::InitWithComponent(v2, this);
  return v2;
}

