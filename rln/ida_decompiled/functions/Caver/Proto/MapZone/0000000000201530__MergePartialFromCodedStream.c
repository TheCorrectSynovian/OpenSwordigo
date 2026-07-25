/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201530
 * Mangled: ._ZN5Caver5Proto7MapZone27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::MapZone::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000002DF2C8  Caver::Proto::Map::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002DE804  Caver::Proto::MapZone::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201538 string=0x000000000020153C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MapZone::MergePartialFromCodedStream(
        Caver::Proto::MapZone *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto7MapZone27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

