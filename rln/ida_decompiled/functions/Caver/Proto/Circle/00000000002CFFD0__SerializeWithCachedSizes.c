/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CFFD0
 * Mangled: _ZNK5Caver5Proto6Circle24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Circle::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 7
 *   insn=0x00000000002CFFF0 string=0x00000000002CFFF4 ")YC"
 *   insn=0x00000000002CFFF8 string=0x0000000000000001 "ELF"
 *   insn=0x00000000002D0000 string=0x00000000002D0004 ")"
 *   insn=0x00000000002D0004 string=0x00000000002D0008 "("
 *   insn=0x00000000002D000C string=0x00000000002D0010 "P"
 *   insn=0x00000000002D0010 string=0x00000000001F9950 "0'"
 *   insn=0x00000000002D0030 string=0x0000000000000002 "LF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Circle::SerializeWithCachedSizes(
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
      v7 = Caver::Proto::Circle::default_instance_;
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

