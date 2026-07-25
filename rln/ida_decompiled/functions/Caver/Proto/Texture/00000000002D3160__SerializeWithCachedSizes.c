/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D3160
 * Mangled: _ZNK5Caver5Proto7Texture24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Texture::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 11
 *   insn=0x00000000002D3188 string=0x00000000002D318C "q"
 *   insn=0x00000000002D318C string=0x00000000001F7750 "0'"
 *   insn=0x00000000002D319C string=0x0000000000000002 "LF"
 *   insn=0x00000000002D31A4 string=0x00000000001F7400 "0'"
 *   insn=0x00000000002D31AC string=0x00000000002D31B0 "k"
 *   insn=0x00000000002D31BC string=0x0000000000000003 "F"
 *   insn=0x00000000002D31C8 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002D31D4 string=0x00000000002D31D8 ""
 *   insn=0x00000000002D3210 string=0x00000000002D3214 ")"
 *   insn=0x00000000002D3220 string=0x00000000002D3224 ")"
 *   insn=0x00000000002D3228 string=0x00000000002D322C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x21
  int v8; // w8
  __int64 v9; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 104);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 104);
  }
  if ( (v5 & 2) != 0 )
    this = google::protobuf::internal::WireFormatLite::WriteEnum(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(_DWORD *)(v4 + 24),
             a2,
             a4);
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
    this = google::protobuf::internal::WireFormatLite::WriteEnum(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(_DWORD *)(v4 + 88),
             a2,
             a4);
    v8 = *(_DWORD *)(v4 + 104);
  }
  if ( (v8 & 0x10) != 0 )
  {
    if ( *(_QWORD *)(v4 + 96) )
      v9 = v4;
    else
      v9 = Caver::Proto::Texture::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(_QWORD *)(v9 + 96),
             a2,
             a4);
  }
  return this;
}

