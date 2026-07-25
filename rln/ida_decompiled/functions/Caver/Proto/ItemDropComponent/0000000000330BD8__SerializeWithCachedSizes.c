/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330BD8
 * Mangled: _ZNK5Caver5Proto17ItemDropComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ItemDropComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 6
 *   insn=0x0000000000330C04 string=0x00000000001F7750 "0'"
 *   insn=0x0000000000330C24 string=0x0000000000330C28 "k"
 *   insn=0x0000000000330C34 string=0x0000000000000003 "F"
 *   insn=0x0000000000330C3C string=0x0000000000330C40 "D#"
 *   insn=0x0000000000330C40 string=0x00000000001F9950 "0'"
 *   insn=0x0000000000330C4C string=0x0000000000330C50 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ItemDropComponent::SerializeWithCachedSizes(
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
  v5 = *(_DWORD *)(this + 92);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 92);
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
  v8 = *(_DWORD *)(v4 + 92);
  if ( (v8 & 8) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(unsigned __int8 *)(v4 + 88),
             a2,
             a4);
    v8 = *(_DWORD *)(v4 + 92);
  }
  if ( (v8 & 0x10) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(unsigned __int8 *)(v4 + 89),
             a2,
             a4);
  return this;
}

