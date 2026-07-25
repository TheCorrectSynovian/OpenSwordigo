/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335438
 * Mangled: _ZNK5Caver5Proto19FireBreathComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::FireBreathComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000033516C  Caver::Proto::FireBreathComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 12
 *   insn=0x0000000000335450 string=0x0000000000335454 "h"
 *   insn=0x0000000000335454 string=0x0000000000335458 ""
 *   insn=0x000000000033546C string=0x0000000000000001 "ELF"
 *   insn=0x0000000000335474 string=0x00000000001F56D0 "P'"
 *   insn=0x0000000000335484 string=0x0000000000000002 "LF"
 *   insn=0x0000000000335490 string=0x0000000000335494 "H"
 *   insn=0x000000000033549C string=0x00000000003354A0 ")"
 *   insn=0x00000000003354A8 string=0x0000000000000003 "F"
 *   insn=0x00000000003354AC string=0x00000000003354B0 ")"
 *   insn=0x00000000003354B4 string=0x00000000003354B8 "("
 *   insn=0x00000000003354C0 string=0x00000000003354C4 "#"
 *   insn=0x00000000003354C4 string=0x00000000001F9950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireBreathComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 32);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 2) == 0 )
      goto LABEL_3;
LABEL_6:
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
             *(_DWORD *)(v4 + 16),
             a2,
             a4);
    if ( (*(_DWORD *)(v4 + 32) & 4) == 0 )
      return this;
    goto LABEL_7;
  }
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
           *(_DWORD *)(this + 12),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 32);
  if ( (v5 & 2) != 0 )
    goto LABEL_6;
LABEL_3:
  if ( (v5 & 4) == 0 )
    return this;
LABEL_7:
  if ( *(_QWORD *)(v4 + 24) )
    v7 = v4;
  else
    v7 = Caver::Proto::FireBreathComponent::default_instance_;
  return google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v7 + 24),
           a2,
           a4);
}

