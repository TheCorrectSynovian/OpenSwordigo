/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201310
 * Mangled: ._ZN5Caver5Proto5SkillC2Ev
 * Demangled: Caver::Proto::Skill::Skill(void)
 *
 * Callers: 1
 *   0x00000000003B040C  Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *
 * Callees: 1
 *   0x00000000002E09AC  Caver::Proto::Item::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201314 string=0x00000000002E0A04 "( "
 *   insn=0x0000000000201318 string=0x000000000020131C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Skill::Skill(Caver::Proto::Skill *this)
{
  JUMPOUT(0x2E0A04);
}

