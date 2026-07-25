/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF538
 * Mangled: _ZNK5Caver5Proto3Map24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Map::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 7
 *   insn=0x00000000002DF548 string=0x00000000002DF54C "h"
 *   insn=0x00000000002DF554 string=0x00000000002DF558 "k"
 *   insn=0x00000000002DF55C string=0x00000000002DF560 "h\n@"
 *   insn=0x00000000002DF564 string=0x0000000000000002 "LF"
 *   insn=0x00000000002DF570 string=0x00000000002DF574 "h"
 *   insn=0x00000000002DF570 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002DF57C string=0x00000000002DF580 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Map::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x19
  __int64 v6; // x21

  v4 = this;
  if ( *(int *)(this + 24) >= 1 )
  {
    v6 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
               *(_QWORD *)(*(_QWORD *)(v4 + 16) + 8 * v6++),
               a2,
               a4);
    while ( v6 < *(int *)(v4 + 24) );
  }
  return this;
}

