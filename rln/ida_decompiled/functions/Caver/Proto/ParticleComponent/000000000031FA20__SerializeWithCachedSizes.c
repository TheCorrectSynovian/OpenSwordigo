/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031FA20
 * Mangled: _ZNK5Caver5Proto17ParticleComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ParticleComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 4
 *   insn=0x000000000031FA44 string=0x000000000031FA48 "B_"
 *   insn=0x000000000031FA48 string=0x00000000001F7750 "0'"
 *   insn=0x000000000031FA68 string=0x0000000000000002 "LF"
 *   insn=0x000000000031FA70 string=0x000000000031FA74 "s{"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleComponent::SerializeWithCachedSizes(
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
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v4 = *(_DWORD *)(v3 + 28);
  }
  if ( (v4 & 2) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             a2,
             *(float *)(v3 + 24),
             a3);
  return this;
}

