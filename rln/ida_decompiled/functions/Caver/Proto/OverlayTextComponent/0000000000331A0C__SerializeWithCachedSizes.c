/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000331A0C
 * Mangled: _ZNK5Caver5Proto20OverlayTextComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::OverlayTextComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000331640  Caver::Proto::OverlayTextComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 2
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 12
 *   insn=0x0000000000331A48 string=0x0000000000331A4C "A"
 *   insn=0x0000000000331A4C string=0x00000000001F7750 "0'"
 *   insn=0x0000000000331A5C string=0x0000000000331A60 ")"
 *   insn=0x0000000000331A64 string=0x0000000000000002 "LF"
 *   insn=0x0000000000331A6C string=0x0000000000331A70 ")"
 *   insn=0x0000000000331A70 string=0x0000000000331A74 "("
 *   insn=0x0000000000331A7C string=0x00000000001F9950 "0'"
 *   insn=0x0000000000331A80 string=0x0000000000331A84 "h"
 *   insn=0x0000000000331A90 string=0x0000000000331A94 "/"
 *   insn=0x0000000000331AA4 string=0x0000000000331AA8 ")"
 *   insn=0x0000000000331AB4 string=0x0000000000331AB8 ")"
 *   insn=0x0000000000331ABC string=0x0000000000331AC0 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OverlayTextComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x20
  int v5; // w8
  __int64 v7; // x8
  __int64 v8; // x8

  v4 = this;
  v5 = *(_DWORD *)(this + 48);
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
    v5 = *(_DWORD *)(v4 + 48);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
LABEL_11:
      this = google::protobuf::internal::WireFormatLite::WriteString(3, *(_QWORD *)(v4 + 32), a2);
      if ( (*(_DWORD *)(v4 + 48) & 8) == 0 )
        return this;
      goto LABEL_12;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v4 + 24) )
    v7 = v4;
  else
    v7 = Caver::Proto::OverlayTextComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_QWORD *)(v7 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 48);
  if ( (v5 & 4) != 0 )
    goto LABEL_11;
LABEL_4:
  if ( (v5 & 8) == 0 )
    return this;
LABEL_12:
  if ( *(_QWORD *)(v4 + 40) )
    v8 = v4;
  else
    v8 = Caver::Proto::OverlayTextComponent::default_instance_;
  return google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_QWORD *)(v8 + 40),
           a2,
           a4);
}

