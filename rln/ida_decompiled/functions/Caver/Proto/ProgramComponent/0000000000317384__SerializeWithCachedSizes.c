/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000317384
 * Mangled: _ZNK5Caver5Proto16ProgramComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::ProgramComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000317010  Caver::Proto::ProgramComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 3
 *   0x00000000001F7400  google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *   0x0000000000203CB0  google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 13
 *   insn=0x00000000003173A0 string=0x00000000003173D0 "i"
 *   insn=0x00000000003173BC string=0x0000000000000001 "ELF"
 *   insn=0x00000000003173C0 string=0x00000000003173C4 ";"
 *   insn=0x00000000003173D4 string=0x00000000003173D8 ")uC"
 *   insn=0x00000000003173DC string=0x0000000000000002 "LF"
 *   insn=0x00000000003173E4 string=0x00000000003173E8 ")"
 *   insn=0x00000000003173E8 string=0x00000000003173EC "("
 *   insn=0x00000000003173F0 string=0x00000000003173F4 "W"
 *   insn=0x00000000003173F4 string=0x00000000001F9950 "0'"
 *   insn=0x00000000003173F8 string=0x00000000003173FC "h"
 *   insn=0x0000000000317404 string=0x0000000000000003 "F"
 *   insn=0x0000000000317408 string=0x000000000031740C ")"
 *   insn=0x000000000031742C string=0x00000000001F7400 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProgramComponent::SerializeWithCachedSizes(
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
  if ( (v5 & 2) != 0 )
  {
    this = google::protobuf::internal::WireFormatLite::WriteBool(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(unsigned __int8 *)(this + 13),
             a2,
             a4);
    v5 = *(_DWORD *)(v4 + 32);
    if ( (v5 & 8) == 0 )
    {
LABEL_3:
      if ( (v5 & 1) == 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  else if ( (v5 & 8) == 0 )
  {
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v4 + 24) )
    v7 = v4;
  else
    v7 = Caver::Proto::ProgramComponent::default_instance_;
  this = google::protobuf::internal::WireFormatLite::WriteMessage(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 2),
           *(_QWORD *)(v7 + 24),
           a2,
           a4);
  v5 = *(_DWORD *)(v4 + 32);
  if ( (v5 & 1) == 0 )
  {
LABEL_4:
    if ( (v5 & 4) == 0 )
      return this;
    return google::protobuf::internal::WireFormatLite::WriteEnum(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(_DWORD *)(v4 + 16),
             a2,
             a4);
  }
LABEL_11:
  this = google::protobuf::internal::WireFormatLite::WriteBool(
           (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 3),
           *(unsigned __int8 *)(v4 + 12),
           a2,
           a4);
  if ( (*(_DWORD *)(v4 + 32) & 4) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteEnum(
             (google::protobuf::internal::WireFormatLite *)&byte_4,
             *(_DWORD *)(v4 + 16),
             a2,
             a4);
  return this;
}

