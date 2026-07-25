/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003341C4
 * Mangled: _ZN5Caver5Proto14SkillComponentD0Ev
 * Demangled: Caver::Proto::SkillComponent::~SkillComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F3A80  Caver::Proto::SkillComponent::~SkillComponent()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000003341FC  Caver::Proto::SkillComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000003341D0 string=0x00000000003341D4 "+"
 *   insn=0x00000000003341D4 string=0x00000000001F3A80 "P'"
 *   insn=0x00000000003341E0 string=0x00000000003341E4 "3"
 *   insn=0x00000000003341E4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003341EC string=0x00000000003341F0 "0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SkillComponent::~SkillComponent(Caver::Proto::SkillComponent *this)
{
  Caver::Proto::SkillComponent::~SkillComponent(this);
  operator delete(this);
}

