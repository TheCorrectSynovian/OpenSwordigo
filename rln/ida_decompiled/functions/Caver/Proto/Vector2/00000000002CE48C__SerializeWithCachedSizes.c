/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE48C
 * Mangled: _ZNK5Caver5Proto7Vector224SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::Vector2::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 2
 *   insn=0x00000000002CE4AC string=0x0000000000000001 "ELF"
 *   insn=0x00000000002CE4D4 string=0x0000000000000002 "LF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector2::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3)
{
  __int64 v3; // x20
  int v4; // w8

  v3 = this;
  v4 = *(_DWORD *)(this + 20);
  if ( (v4 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             a2,
             *(float *)(this + 12),
             a3);
    v4 = *(_DWORD *)(v3 + 20);
  }
  if ( (v4 & 2) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             a2,
             *(float *)(v3 + 16),
             a3);
  return this;
}

