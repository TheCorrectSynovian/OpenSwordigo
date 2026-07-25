/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000304788
 * Mangled: _ZNK5Caver5Proto26KeyframeAnimationComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::KeyframeAnimationComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 10
 *   insn=0x000000000030479C string=0x00000000003047A0 ""
 *   insn=0x00000000003047A4 string=0x00000000003047A8 "H"
 *   insn=0x00000000003047C4 string=0x0000000000000001 "ELF"
 *   insn=0x00000000003047CC string=0x00000000001F56D0 "P'"
 *   insn=0x00000000003047E4 string=0x00000000001F7750 "0'"
 *   insn=0x00000000003047E8 string=0x00000000003047EC ""
 *   insn=0x00000000003047F4 string=0x0000000000000003 "F"
 *   insn=0x00000000003047F8 string=0x00000000003047FC "-"
 *   insn=0x0000000000304800 string=0x0000000000304804 "h"
 *   insn=0x0000000000304810 string=0x0000000000304814 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::KeyframeAnimationComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8

  v4 = this;
  v5 = *(_DWORD *)(this + 32);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 32);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteString(2, *(_QWORD *)(v4 + 16), a2);
  v5 = *(_DWORD *)(v4 + 32);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_5;
    goto LABEL_10;
  }
LABEL_9:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(unsigned __int8 *)(v4 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 32);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_5:
    if ( (v5 & 8) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(unsigned __int8 *)(v4 + 25),
             a2,
             a4);
  }
LABEL_10:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           a2,
           *(float *)(v4 + 28),
           a3);
  if ( (*(_DWORD *)(v4 + 32) & 8) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(unsigned __int8 *)(v4 + 25),
             a2,
             a4);
  return this;
}

