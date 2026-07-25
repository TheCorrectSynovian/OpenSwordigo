/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003194A0
 * Mangled: _ZNK5Caver5Proto24BreakableObjectComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::BreakableObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000319134  Caver::Proto::BreakableObjectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 4
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 13
 *   insn=0x00000000003194BC string=0x00000000003194C0 "("
 *   insn=0x00000000003194C4 string=0x000000000031951C "i"
 *   insn=0x00000000003194D8 string=0x0000000000000001 "ELF"
 *   insn=0x00000000003194F0 string=0x0000000000000002 "LF"
 *   insn=0x00000000003194F4 string=0x00000000003194F8 "vp"
 *   insn=0x00000000003194F8 string=0x00000000001F56D0 "P'"
 *   insn=0x00000000003194FC string=0x0000000000319500 "("
 *   insn=0x0000000000319508 string=0x0000000000000003 "F"
 *   insn=0x0000000000319510 string=0x00000000001F7400 "0'"
 *   insn=0x0000000000319520 string=0x0000000000319524 ")"
 *   insn=0x0000000000319530 string=0x0000000000319534 ")"
 *   insn=0x0000000000319538 string=0x000000000031953C "("
 *   insn=0x0000000000319548 string=0x00000000001F9950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BreakableObjectComponent::SerializeWithCachedSizes(
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
  if ( (v5 & 1) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(unsigned __int8 *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 32);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
LABEL_8:
      this = google::protobuf::internal::WireFormatLite::WriteEnum(
               (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
               *(_DWORD *)(v4 + 20),
               a2,
               a4);
      if ( (*(_DWORD *)(v4 + 32) & 8) == 0 )
        return this;
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
  v5 = *(_DWORD *)(v4 + 32);
  if ( (v5 & 4) != 0 )
    goto LABEL_8;
LABEL_4:
  if ( (v5 & 8) == 0 )
    return this;
LABEL_9:
  if ( *(_QWORD *)(v4 + 24) )
    v7 = v4;
  else
    v7 = Caver::Proto::BreakableObjectComponent::default_instance_;
  return google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)&byte_4,
           *(_QWORD *)(v7 + 24),
           a2,
           a4);
}

