/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAFB0
 * Mangled: ._ZN5Caver5Proto8GameData9MergeFromERKS1_
 * Demangled: Caver::Proto::GameData::MergeFrom(Caver::Proto::GameData const&)
 *
 * Callers: 3
 *   0x00000000002E65A4  Caver::Proto::GameData::GameData(Caver::Proto::GameData const&)
 *   0x00000000002E7AA4  Caver::Proto::GameData::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002E7E54  Caver::Proto::GameData::CopyFrom(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000002E65A4  Caver::Proto::GameData::GameData(Caver::Proto::GameData const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAFB8 string=0x00000000001FAFBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GameData::MergeFrom(Caver::Proto::GameData *this, const Caver::Proto::GameData *a2)
{
  JUMPOUT(0x2E6808);
}

