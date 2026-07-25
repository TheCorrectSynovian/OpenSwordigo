/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5270
 * Mangled: ._ZN5Caver5Proto8DateTime27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::DateTime::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000002EA650  Caver::Proto::PlayerProfile::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002CDEC4  Caver::Proto::DateTime::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5278 string=0x00000000001F527C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::DateTime::MergePartialFromCodedStream(
        Caver::Proto::DateTime *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto8DateTime27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

