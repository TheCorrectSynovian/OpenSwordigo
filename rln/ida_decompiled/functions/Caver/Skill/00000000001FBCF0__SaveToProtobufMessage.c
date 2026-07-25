/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBCF0
 * Mangled: ._ZNK5Caver5Skill21SaveToProtobufMessageEPNS_5Proto5SkillE
 * Demangled: Caver::Skill::SaveToProtobufMessage(Caver::Proto::Skill *)
 *
 * Callers: 1
 *   0x00000000003B040C  Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *
 * Callees: 1
 *   0x00000000003C3CF4  Caver::Skill::SaveToProtobufMessage(Caver::Proto::Skill *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBCF8 string=0x00000000001FBCFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Skill::SaveToProtobufMessage(Caver::Skill *this, Caver::Proto::Skill *a2)
{
  return _ZNK5Caver5Skill21SaveToProtobufMessageEPNS_5Proto5SkillE(this, a2);
}

