/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316074
 * Mangled: _ZNK5Caver5Proto24PressureTriggerComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::PressureTriggerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000315CD0  Caver::Proto::PressureTriggerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 16
 *   insn=0x0000000000316090 string=0x00000000003160C0 "i"
 *   insn=0x0000000000316094 string=0x0000000000316098 "H"
 *   insn=0x0000000000316094 string=0x00000000003160F0 "i"
 *   insn=0x00000000003160AC string=0x0000000000000001 "ELF"
 *   insn=0x00000000003160C4 string=0x00000000003160C8 ")"
 *   insn=0x00000000003160CC string=0x0000000000000002 "LF"
 *   insn=0x00000000003160D4 string=0x00000000003160D8 ")"
 *   insn=0x00000000003160D8 string=0x00000000003160DC "("
 *   insn=0x00000000003160E0 string=0x00000000003160E4 ""
 *   insn=0x00000000003160E4 string=0x00000000001F9950 "0'"
 *   insn=0x00000000003160E8 string=0x00000000003160EC "h"
 *   insn=0x00000000003160F4 string=0x00000000003160F8 ")"
 *   insn=0x00000000003160FC string=0x0000000000000003 "F"
 *   insn=0x0000000000316104 string=0x0000000000316108 ")"
 *   insn=0x0000000000316108 string=0x000000000031610C "("
 *   insn=0x0000000000316118 string=0x000000000031611C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PressureTriggerComponent::SerializeWithCachedSizes(
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
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             a2,
             *(float *)(this + 12),
             a3);
    v5 = *(_DWORD *)(v4 + 40);
    if ( (v5 & 4) == 0 )
    {
LABEL_3:
      if ( (v5 & 8) == 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  else if ( (v5 & 4) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v4 + 24) )
    v7 = v4;
  else
    v7 = Caver::Proto::PressureTriggerComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_QWORD *)(v7 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 40);
  if ( (v5 & 8) == 0 )
  {
LABEL_4:
    if ( (v5 & 2) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(unsigned __int8 *)(v4 + 16),
             a2,
             a4);
  }
LABEL_11:
  if ( *(_QWORD *)(v4 + 32) )
    v8 = v4;
  else
    v8 = Caver::Proto::PressureTriggerComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v8 + 32),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 40) & 2) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(unsigned __int8 *)(v4 + 16),
             a2,
             a4);
  return this;
}

