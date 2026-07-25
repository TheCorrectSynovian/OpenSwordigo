/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4860
 * Mangled: ._ZN5Caver5Proto5Skill10SharedDtorEv
 * Demangled: Caver::Proto::Skill::SharedDtor(void)
 *
 * Callers: 2
 *   0x00000000002E0A7C  Caver::Proto::Skill::Skill(Caver::Proto::Skill const&)
 *   0x00000000002E0F10  Caver::Proto::Skill::~Skill()
 *
 * Callees: 1
 *   0x00000000002E0A7C  Caver::Proto::Skill::Skill(Caver::Proto::Skill const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4868 string=0x00000000001F486C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Skill::SharedDtor(Caver::Proto::Skill *this)
{
  JUMPOUT(0x2E0D48);
}

