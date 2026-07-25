/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310274
 * Mangled: _ZNK5Caver5Proto14LightComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::LightComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000030FDC4  Caver::Proto::LightComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 22
 *   insn=0x0000000000310288 string=0x000000000031028C "H"
 *   insn=0x000000000031029C string=0x00000000003102A0 "("
 *   insn=0x00000000003102B8 string=0x0000000000000001 "ELF"
 *   insn=0x00000000003102BC string=0x00000000003102C0 "P"
 *   insn=0x00000000003102C0 string=0x00000000001F7400 "0'"
 *   insn=0x00000000003102C4 string=0x00000000003102C8 "h"
 *   insn=0x00000000003102D0 string=0x0000000000000002 "LF"
 *   insn=0x00000000003102D4 string=0x00000000003102D8 "Z"
 *   insn=0x00000000003102E8 string=0x00000000003102EC ")eF"
 *   insn=0x00000000003102F0 string=0x0000000000000003 "F"
 *   insn=0x00000000003102F8 string=0x00000000003102FC ")"
 *   insn=0x00000000003102FC string=0x0000000000310300 "("
 *   insn=0x0000000000310308 string=0x00000000001F9950 "0'"
 *   insn=0x000000000031030C string=0x0000000000310310 "h"
 *   insn=0x000000000031031C string=0x0000000000310320 "H"
 *   insn=0x0000000000310334 string=0x0000000000310338 "B"
 *   insn=0x000000000031033C string=0x0000000000310340 "("
 *   insn=0x0000000000310348 string=0x000000000031034C ")eF"
 *   insn=0x0000000000310358 string=0x000000000031035C ")"
 *   insn=0x000000000031035C string=0x0000000000310360 "("
 *   insn=0x0000000000310364 string=0x0000000000310368 "z"
 *   insn=0x0000000000310384 string=0x0000000000310388 "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LightComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        google::protobuf::io::CodedOutputStream *a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8
  __int64 v8; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 56);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteEnum(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 56);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           a2,
           *(float *)(v4 + 16),
           a3);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_15;
  }
LABEL_11:
  if ( *(_QWORD *)(v4 + 24) )
    v7 = v4;
  else
    v7 = Caver::Proto::LightComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v7 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_16;
  }
LABEL_15:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           a2,
           *(float *)(v4 + 32),
           a3);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_7;
    goto LABEL_17;
  }
LABEL_16:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           a2,
           *(float *)(v4 + 36),
           a3);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 0x40) == 0 )
  {
LABEL_7:
    if ( (v5 & 0x20) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_7,
             a2,
             *(float *)(v4 + 40),
             a3);
  }
LABEL_17:
  if ( *(_QWORD *)(v4 + 48) )
    v8 = v4;
  else
    v8 = Caver::Proto::LightComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_6,
           *(_QWORD *)(v8 + 48),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_7,
             a2,
             *(float *)(v4 + 40),
             a3);
  return this;
}

