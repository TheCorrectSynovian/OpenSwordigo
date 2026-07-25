/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D08A8
 * Mangled: _ZNK5Caver5Proto7Polygon24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Polygon::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 6
 *   insn=0x00000000002D08C4 string=0x00000000002D08C8 "k"
 *   insn=0x00000000002D08D4 string=0x0000000000000001 "ELF"
 *   insn=0x00000000002D08E0 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002D08EC string=0x00000000002D08F0 ""
 *   insn=0x00000000002D0900 string=0x0000000000000002 "LF"
 *   insn=0x00000000002D0934 string=0x0000000000000003 "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Polygon::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  __int64 v6; // x21
  int v7; // w8

  v4 = this;
  if ( *(int *)(this + 24) >= 1 )
  {
    v6 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
               *(_QWORD *)(*(_QWORD *)(v4 + 16) + 8 * v6++),
               a2,
               a4);
    while ( v6 < *(int *)(v4 + 24) );
  }
  v7 = *(_DWORD *)(v4 + 76);
  if ( (v7 & 2) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(unsigned __int8 *)(v4 + 72),
             a2,
             a4);
    v7 = *(_DWORD *)(v4 + 76);
  }
  if ( (v7 & 4) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
             *(unsigned __int8 *)(v4 + 73),
             a2,
             a4);
  return this;
}

