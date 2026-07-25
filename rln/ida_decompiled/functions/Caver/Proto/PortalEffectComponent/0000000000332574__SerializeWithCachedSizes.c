/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000332574
 * Mangled: _ZNK5Caver5Proto21PortalEffectComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::PortalEffectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000003321B4  Caver::Proto::PortalEffectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 2
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 15
 *   insn=0x0000000000332590 string=0x0000000000332594 "("
 *   insn=0x00000000003325AC string=0x0000000000000001 "ELF"
 *   insn=0x00000000003325B0 string=0x00000000003325B4 "G"
 *   insn=0x00000000003325B4 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000003325C4 string=0x0000000000000002 "LF"
 *   insn=0x00000000003325C8 string=0x00000000003325CC "A"
 *   insn=0x00000000003325D0 string=0x00000000003325D4 "("
 *   insn=0x00000000003325DC string=0x00000000003325E0 ")"
 *   insn=0x00000000003325E4 string=0x0000000000000003 "F"
 *   insn=0x00000000003325EC string=0x00000000003325F0 ")"
 *   insn=0x00000000003325F0 string=0x00000000003325F4 "("
 *   insn=0x00000000003325FC string=0x00000000001F9950 "0'"
 *   insn=0x000000000033260C string=0x0000000000332610 ")"
 *   insn=0x000000000033261C string=0x0000000000332620 ")"
 *   insn=0x0000000000332624 string=0x0000000000332628 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalEffectComponent::SerializeWithCachedSizes(
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
      goto LABEL_8;
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
    if ( (v5 & 8) == 0 )
      return this;
    goto LABEL_12;
  }
LABEL_8:
  if ( *(_QWORD *)(v4 + 24) )
    v7 = v4;
  else
    v7 = Caver::Proto::PortalEffectComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(_QWORD *)(v7 + 24),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 40) & 8) != 0 )
  {
LABEL_12:
    if ( *(_QWORD *)(v4 + 32) )
      v8 = v4;
    else
      v8 = Caver::Proto::PortalEffectComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(_QWORD *)(v8 + 32),
             a2,
             a4);
  }
  return this;
}

