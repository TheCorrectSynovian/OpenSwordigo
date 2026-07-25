/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FC3BC
 * Mangled: _ZNK5Caver5Proto14ObjectTemplate24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ObjectTemplate::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 8
 *   insn=0x00000000002FC3D4 string=0x00000000002FC3D8 "I"
 *   insn=0x00000000002FC3DC string=0x00000000002FC3E0 ")ME"
 *   insn=0x00000000002FC3E4 string=0x0000000000000001 "ELF"
 *   insn=0x00000000002FC3EC string=0x00000000002FC3F0 ")"
 *   insn=0x00000000002FC3F0 string=0x00000000002FC3F4 "("
 *   insn=0x00000000002FC3F8 string=0x00000000002FC3FC "U"
 *   insn=0x00000000002FC3FC string=0x00000000001F9950 "0'"
 *   insn=0x00000000002FC41C string=0x0000000000000002 "LF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectTemplate::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 28);
  if ( (v5 & 1) != 0 )
  {
    if ( *(_QWORD *)(this + 16) )
      v7 = this;
    else
      v7 = Caver::Proto::ObjectTemplate::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v7 + 16),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 28);
  }
  if ( (v5 & 2) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             a2,
             *(float *)(v4 + 24),
             a3);
  return this;
}

