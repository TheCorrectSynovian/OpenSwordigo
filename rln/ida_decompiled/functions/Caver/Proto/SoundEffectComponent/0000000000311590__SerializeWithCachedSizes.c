/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311590
 * Mangled: _ZNK5Caver5Proto20SoundEffectComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::SoundEffectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 7
 *   insn=0x00000000003115A8 string=0x00000000003115AC "h"
 *   insn=0x00000000003115AC string=0x00000000003115B0 ""
 *   insn=0x00000000003115C8 string=0x00000000003115CC "a"
 *   insn=0x00000000003115CC string=0x00000000001F7750 "0'"
 *   insn=0x00000000003115DC string=0x0000000000000002 "LF"
 *   insn=0x00000000003115E8 string=0x00000000003115EC "H"
 *   insn=0x00000000003115F8 string=0x0000000000000003 "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundEffectComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3)
{
  __int64 v3; // x20
  int v4; // w8

  v3 = this;
  v4 = *(_DWORD *)(this + 32);
  if ( (v4 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v4 = *(_DWORD *)(v3 + 32);
    if ( (v4 & 4) == 0 )
    {
LABEL_3:
      if ( (v4 & 2) == 0 )
        return this;
      return google::protobuf::internal::WireFormatLite::WriteFloat(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               a2,
               *(float *)(v3 + 24),
               a3);
    }
  }
  else if ( (v4 & 4) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           a2,
           *(float *)(v3 + 28),
           a3);
  if ( (*(_DWORD *)(v3 + 32) & 2) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
             a2,
             *(float *)(v3 + 24),
             a3);
  return this;
}

