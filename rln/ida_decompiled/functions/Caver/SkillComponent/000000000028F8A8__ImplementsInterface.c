/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028F8A8
 * Mangled: _ZN5Caver14SkillComponent19ImplementsInterfaceEl
 * Demangled: Caver::SkillComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000028F8F8  Caver::SkillComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000028F8A8 string=0x000000000028F8AC "qG"
 *   insn=0x000000000028F8AC string=0x000000000028F8B0 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::SkillComponent::ImplementsInterface(
        Caver::SkillComponent *this,
        _QWORD (*a2)(Caver::SkillComponent *__hidden this))
{
  return a2 == Caver::SkillComponent::Interface;
}

