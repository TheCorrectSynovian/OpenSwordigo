/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200920
 * Mangled: ._ZN5Caver5Proto3Map9MergeFromERKS1_
 * Demangled: Caver::Proto::Map::MergeFrom(Caver::Proto::Map const&)
 *
 * Callers: 3
 *   0x00000000002DEFAC  Caver::Proto::Map::Map(Caver::Proto::Map const&)
 *   0x00000000002DF610  Caver::Proto::Map::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002DF614  Caver::Proto::Map::CopyFrom(Caver::Proto::Map const&)
 *
 * Callees: 1
 *   0x00000000002DEFAC  Caver::Proto::Map::Map(Caver::Proto::Map const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200928 string=0x000000000020092C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Map::MergeFrom(Caver::Proto::Map *this, const Caver::Proto::Map *a2)
{
  JUMPOUT(0x2DF068);
}

