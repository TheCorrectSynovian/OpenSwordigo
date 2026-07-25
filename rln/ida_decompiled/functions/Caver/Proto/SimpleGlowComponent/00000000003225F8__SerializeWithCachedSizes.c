/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003225F8
 * Mangled: _ZNK5Caver5Proto19SimpleGlowComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::SimpleGlowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000032215C  Caver::Proto::SimpleGlowComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001FE840  google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 23
 *   insn=0x000000000032260C string=0x0000000000322610 "H"
 *   insn=0x0000000000322610 string=0x0000000000322638 "\t"
 *   insn=0x0000000000322614 string=0x0000000000322618 "H"
 *   insn=0x0000000000322620 string=0x0000000000322624 "("
 *   insn=0x0000000000322628 string=0x00000000003226E0 "\t"
 *   insn=0x000000000032263C string=0x0000000000322640 ")"
 *   insn=0x0000000000322644 string=0x0000000000000001 "ELF"
 *   insn=0x000000000032264C string=0x0000000000322650 ")"
 *   insn=0x0000000000322650 string=0x0000000000322654 "("
 *   insn=0x000000000032265C string=0x00000000001F9950 "0'"
 *   insn=0x000000000032266C string=0x0000000000000002 "LF"
 *   insn=0x0000000000322670 string=0x0000000000322674 "sp"
 *   insn=0x0000000000322678 string=0x000000000032267C ""
 *   insn=0x0000000000322684 string=0x0000000000000003 "F"
 *   insn=0x000000000032268C string=0x00000000001F56D0 "P'"
 *   insn=0x0000000000322690 string=0x0000000000322694 "h"
 *   insn=0x00000000003226A0 string=0x00000000003226A4 "gp"
 *   insn=0x00000000003226B8 string=0x00000000003226BC "ap"
 *   insn=0x00000000003226C0 string=0x00000000003226C4 "("
 *   insn=0x00000000003226D0 string=0x00000000003226D4 "[p"
 *   insn=0x00000000003226E4 string=0x00000000003226E8 ")"
 *   insn=0x00000000003226F4 string=0x00000000003226F8 ")"
 *   insn=0x00000000003226FC string=0x0000000000322700 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SimpleGlowComponent::SerializeWithCachedSizes(
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
    if ( *(_QWORD *)(this + 16) )
      v7 = this;
    else
      v7 = Caver::Proto::SimpleGlowComponent::default_instance_;
    this = google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v7 + 16),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 56);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_14;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           a2,
           *(float *)(v4 + 24),
           a3);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_15;
  }
LABEL_14:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_DWORD *)(v4 + 28),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 8) == 0 )
  {
LABEL_5:
    if ( (v5 & 0x20) == 0 )
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
  if ( (v5 & 0x20) == 0 )
  {
LABEL_6:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_7;
LABEL_17:
    this = google::protobuf::internal::WireFormatLite::WriteFloat(
             (google::protobuf::internal::WireFormatLite *)&byte_6,
             a2,
             *(float *)(v4 + 52),
             a3);
    if ( (*(_DWORD *)(v4 + 56) & 0x10) == 0 )
      return this;
    goto LABEL_18;
  }
LABEL_16:
  this = google::protobuf::internal::WireFormatLite::WriteFloat(
           (google::protobuf::internal::WireFormatLite *)&byte_5,
           a2,
           *(float *)(v4 + 48),
           a3);
  v5 = *(_DWORD *)(v4 + 56);
  if ( (v5 & 0x40) != 0 )
    goto LABEL_17;
LABEL_7:
  if ( (v5 & 0x10) == 0 )
    return this;
LABEL_18:
  if ( *(_QWORD *)(v4 + 40) )
    v8 = v4;
  else
    v8 = Caver::Proto::SimpleGlowComponent::default_instance_;
  return google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_7,
           *(_QWORD *)(v8 + 40),
           a2,
           a4);
}

