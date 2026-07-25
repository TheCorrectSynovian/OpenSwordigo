/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334580
 * Mangled: _ZNK5Caver5Proto14SkillComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::SkillComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x00000000003342AC  Caver::Proto::SkillComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F56D0  google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 11
 *   insn=0x0000000000334598 string=0x000000000033459C "h"
 *   insn=0x00000000003345B4 string=0x0000000000000001 "ELF"
 *   insn=0x00000000003345B8 string=0x00000000003345BC "E"
 *   insn=0x00000000003345BC string=0x00000000001F56D0 "P'"
 *   insn=0x00000000003345CC string=0x00000000003345D0 ")"
 *   insn=0x00000000003345D4 string=0x0000000000000002 "LF"
 *   insn=0x00000000003345DC string=0x00000000003345E0 ")"
 *   insn=0x00000000003345E0 string=0x00000000003345E4 "("
 *   insn=0x00000000003345EC string=0x00000000001F9950 "0'"
 *   insn=0x0000000000334608 string=0x000000000033460C "Q"
 *   insn=0x000000000033460C string=0x00000000001F7750 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkillComponent::SerializeWithCachedSizes(
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
    this = google::protobuf::internal::WireFormatLite::WriteInt32(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_DWORD *)(this + 12),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 32);
    if ( (v5 & 4) == 0 )
    {
LABEL_3:
      if ( (v5 & 2) == 0 )
        return this;
      return google::protobuf::internal::WireFormatLite::WriteString(3, *(_QWORD *)(v4 + 16), a2);
    }
  }
  else if ( (v5 & 4) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v4 + 24) )
    v7 = v4;
  else
    v7 = Caver::Proto::SkillComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_QWORD *)(v7 + 24),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 32) & 2) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteString(3, *(_QWORD *)(v4 + 16), a2);
  return this;
}

