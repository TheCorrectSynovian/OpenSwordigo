/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000305998
 * Mangled: _ZNK5Caver5Proto33ModelTransformControllerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ModelTransformControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000003055AC  Caver::Proto::ModelTransformControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 22
 *   insn=0x00000000003059AC string=0x00000000003059B0 ""
 *   insn=0x00000000003059B4 string=0x00000000003059B8 ""
 *   insn=0x00000000003059B4 string=0x00000000003059E8 "\t"
 *   insn=0x00000000003059B8 string=0x00000000003059BC "h"
 *   insn=0x00000000003059B8 string=0x0000000000305A18 "\t"
 *   insn=0x00000000003059BC string=0x00000000003059C0 ""
 *   insn=0x00000000003059D4 string=0x0000000000000001 "ELF"
 *   insn=0x00000000003059D8 string=0x00000000003059DC "="
 *   insn=0x00000000003059DC string=0x00000000001F56D0 "P'"
 *   insn=0x00000000003059EC string=0x00000000003059F0 ")1A"
 *   insn=0x00000000003059F4 string=0x0000000000000002 "LF"
 *   insn=0x00000000003059FC string=0x0000000000305A00 ")"
 *   insn=0x0000000000305A00 string=0x0000000000305A04 "("
 *   insn=0x0000000000305A0C string=0x00000000001F9950 "0'"
 *   insn=0x0000000000305A10 string=0x0000000000305A14 "H"
 *   insn=0x0000000000305A1C string=0x0000000000305A20 ")1A"
 *   insn=0x0000000000305A24 string=0x0000000000000003 "F"
 *   insn=0x0000000000305A2C string=0x0000000000305A30 ")"
 *   insn=0x0000000000305A30 string=0x0000000000305A34 "("
 *   insn=0x0000000000305A50 string=0x0000000000305A54 "{"
 *   insn=0x0000000000305A58 string=0x0000000000305A5C "H"
 *   insn=0x0000000000305A70 string=0x0000000000305A74 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelTransformControllerComponent::SerializeWithCachedSizes(
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
  v5 = *(_DWORD *)(this + 40);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 40);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v4 + 16) )
    v7 = v4;
  else
    v7 = Caver::Proto::ModelTransformControllerComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_QWORD *)(v7 + 16),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 40);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_16;
  }
LABEL_12:
  if ( *(_QWORD *)(v4 + 24) )
    v8 = v4;
  else
    v8 = Caver::Proto::ModelTransformControllerComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v8 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 40);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x10) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             a2,
             *(float *)(v4 + 36),
             a3);
  }
LABEL_16:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           a2,
           *(float *)(v4 + 32),
           a3);
  if ( (*(_DWORD *)(v4 + 40) & 0x10) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             a2,
             *(float *)(v4 + 36),
             a3);
  return this;
}

