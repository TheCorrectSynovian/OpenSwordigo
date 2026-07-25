/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201120
 * Mangled: ._ZN5Caver5Proto5Skill27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::Skill::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000002E6E98  Caver::Proto::GameData::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002E10C0  Caver::Proto::Skill::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201128 string=0x000000000020112C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Skill::MergePartialFromCodedStream(
        Caver::Proto::Skill *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto5Skill27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

