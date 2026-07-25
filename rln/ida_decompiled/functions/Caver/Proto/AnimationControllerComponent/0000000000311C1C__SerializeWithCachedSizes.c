/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311C1C
 * Mangled: _ZNK5Caver5Proto28AnimationControllerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::AnimationControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 8
 *   insn=0x0000000000311C34 string=0x0000000000311C38 "h"
 *   insn=0x0000000000311C38 string=0x0000000000311C3C ""
 *   insn=0x0000000000311C50 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000311C58 string=0x00000000001F56D0 "P'"
 *   insn=0x0000000000311C68 string=0x0000000000000002 "LF"
 *   insn=0x0000000000311C74 string=0x0000000000311C78 "H"
 *   insn=0x0000000000311C84 string=0x0000000000000003 "F"
 *   insn=0x0000000000311C8C string=0x0000000000311C90 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AnimationControllerComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 24);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 24);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        return this;
      return google::protobuf::internal::WireFormatLite::WriteBool(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               *(unsigned __int8 *)(v4 + 20),
               a2,
               a4);
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_DWORD *)(v4 + 16),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
             *(unsigned __int8 *)(v4 + 20),
             a2,
             a4);
  return this;
}

