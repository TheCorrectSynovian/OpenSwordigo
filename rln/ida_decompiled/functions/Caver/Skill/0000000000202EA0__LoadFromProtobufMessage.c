/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202EA0
 * Mangled: ._ZN5Caver5Skill23LoadFromProtobufMessageERKNS_5Proto5SkillE
 * Demangled: Caver::Skill::LoadFromProtobufMessage(Caver::Proto::Skill const&)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003C3CA4  Caver::Skill::LoadFromProtobufMessage(Caver::Proto::Skill const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202EA8 string=0x0000000000202EAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Skill::LoadFromProtobufMessage(Caver::Skill *this, const Caver::Proto::Skill *a2)
{
  return _ZN5Caver5Skill23LoadFromProtobufMessageERKNS_5Proto5SkillE(this, a2);
}

