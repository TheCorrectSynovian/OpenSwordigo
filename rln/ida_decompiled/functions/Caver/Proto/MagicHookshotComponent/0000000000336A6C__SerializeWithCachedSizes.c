/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000336A6C
 * Mangled: _ZNK5Caver5Proto22MagicHookshotComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::MagicHookshotComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000003366A0  Caver::Proto::MagicHookshotComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 15
 *   insn=0x0000000000336A80 string=0x0000000000336A84 ""
 *   insn=0x0000000000336A88 string=0x0000000000336A8C "H"
 *   insn=0x0000000000336A90 string=0x0000000000336A94 "H"
 *   insn=0x0000000000336AA8 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000336AAC string=0x0000000000336AB0 ""
 *   insn=0x0000000000336AB0 string=0x00000000001F56D0 "P'"
 *   insn=0x0000000000336AC0 string=0x0000000000000002 "LF"
 *   insn=0x0000000000336ACC string=0x0000000000336AD0 ""
 *   insn=0x0000000000336AD8 string=0x0000000000000003 "F"
 *   insn=0x0000000000336AE4 string=0x0000000000336AE8 "h"
 *   insn=0x0000000000336AF0 string=0x0000000000336AF4 ")"
 *   insn=0x0000000000336B00 string=0x0000000000336B04 ")"
 *   insn=0x0000000000336B04 string=0x0000000000336B08 "("
 *   insn=0x0000000000336B10 string=0x00000000001F9950 "0'"
 *   insn=0x0000000000336B14 string=0x0000000000336B18 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicHookshotComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8

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
      goto LABEL_9;
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
  v5 = *(_DWORD *)(v4 + 40);
  if ( (v5 & 4) == 0 )
  {
LABEL_4:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_5;
    goto LABEL_10;
  }
LABEL_9:
  this = google::protobuf::internal::WireFormatLite::WriteInt32(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_DWORD *)(v4 + 20),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 40);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_5:
    if ( (v5 & 8) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(_DWORD *)(v4 + 24),
             a2,
             a4);
  }
LABEL_10:
  if ( *(_QWORD *)(v4 + 32) )
    v7 = v4;
  else
    v7 = Caver::Proto::MagicHookshotComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_QWORD *)(v7 + 32),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 40) & 8) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)&byte_5,
             *(_DWORD *)(v4 + 24),
             a2,
             a4);
  return this;
}

