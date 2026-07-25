/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334724
 * Mangled: _ZN5Caver5Proto14SkillComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::SkillComponent::CopyFrom(Caver::Proto::SkillComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F77E0  Caver::Proto::SkillComponent::MergeFrom(Caver::Proto::SkillComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000334738 string=0x000000000033473C "@"
 *   insn=0x0000000000334744 string=0x0000000000334748 ""
 *   insn=0x000000000033475C string=0x0000000000334760 " "
 *   insn=0x0000000000334760 string=0x00000000001F77E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SkillComponent::CopyFrom(
        Caver::Proto::SkillComponent *this,
        const Caver::Proto::SkillComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SkillComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SkillComponent::MergeFrom(this, a2);
  }
}

