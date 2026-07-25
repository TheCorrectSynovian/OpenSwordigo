/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DEBBC
 * Mangled: _ZNK5Caver5Proto7MapZone24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::MapZone::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 7
 *   insn=0x00000000002DEBE8 string=0x00000000001F7750 "0'"
 *   insn=0x00000000002DEC08 string=0x00000000002DEC0C "k"
 *   insn=0x00000000002DEC18 string=0x0000000000000003 "F"
 *   insn=0x00000000002DEC20 string=0x00000000002DEC24 "Kk"
 *   insn=0x00000000002DEC24 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002DEC30 string=0x00000000002DEC34 ""
 *   insn=0x00000000002DEC4C string=0x00000000001F56D0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapZone::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x21
  int v8; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 104);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 104);
  }
  if ( (v5 & 2) != 0 )
    this = google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v4 + 24), a2);
  if ( *(int *)(v4 + 40) >= 1 )
  {
    v7 = 0;
    do
      this = google::protobuf::internal::WireFormatLite::WriteMessage(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v7++),
               a2,
               a4);
    while ( v7 < *(int *)(v4 + 40) );
  }
  v8 = *(_DWORD *)(v4 + 104);
  if ( (v8 & 8) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(_DWORD *)(v4 + 88),
             a2,
             a4);
    v8 = *(_DWORD *)(v4 + 104);
  }
  if ( (v8 & 0x10) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteString(5, *(_QWORD *)(v4 + 96), a2);
  return this;
}

