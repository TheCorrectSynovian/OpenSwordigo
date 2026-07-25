/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1080
 * Mangled: _ZNK5Caver5Proto10FloatColor24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::FloatColor::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 5
 *   insn=0x00000000002D109C string=0x00000000002D10A0 "("
 *   insn=0x00000000002D10B8 string=0x0000000000000001 "ELF"
 *   insn=0x00000000002D10D0 string=0x0000000000000002 "LF"
 *   insn=0x00000000002D10DC string=0x00000000002D10E0 "("
 *   insn=0x00000000002D10E8 string=0x0000000000000003 "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FloatColor::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3)
{
  __int64 v3; // x20
  int v4; // w8

  v3 = this;
  v4 = *(_DWORD *)(this + 28);
  if ( (v4 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             a2,
             *(float *)(this + 12),
             a3);
    v4 = *(_DWORD *)(v3 + 28);
    if ( (v4 & 2) == 0 )
    {
LABEL_3:
      if ( (v4 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_8;
    }
  }
  else if ( (v4 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           a2,
           *(float *)(v3 + 16),
           a3);
  v4 = *(_DWORD *)(v3 + 28);
  if ( (v4 & 4) == 0 )
  {
LABEL_4:
    if ( (v4 & 8) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             a2,
             *(float *)(v3 + 24),
             a3);
  }
LABEL_8:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           a2,
           *(float *)(v3 + 20),
           a3);
  if ( (*(_DWORD *)(v3 + 28) & 8) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             a2,
             *(float *)(v3 + 24),
             a3);
  return this;
}

