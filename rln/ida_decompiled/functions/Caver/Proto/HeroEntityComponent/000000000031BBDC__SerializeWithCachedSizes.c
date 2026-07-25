/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031BBDC
 * Mangled: _ZNK5Caver5Proto19HeroEntityComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::HeroEntityComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000031BA24  Caver::Proto::HeroEntityComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 11
 *   insn=0x000000000031BBE0 string=0x000000000031BBE4 "I"
 *   insn=0x000000000031BBE4 string=0x000000000031BBEC "J"
 *   insn=0x000000000031BBEC string=0x000000000031BBF0 "\t@"
 *   insn=0x000000000031BBF0 string=0x000000000031BBF4 "J"
 *   insn=0x000000000031BBF8 string=0x000000000031BBFC "?"
 *   insn=0x000000000031BBFC string=0x000000000031BC00 "J"
 *   insn=0x000000000031BC00 string=0x000000000031BC04 "I"
 *   insn=0x000000000031BC04 string=0x000000000031BC08 "!\t@"
 *   insn=0x000000000031BC0C string=0x000000000031BC10 "Pw"
 *   insn=0x000000000031BC0C string=0x0000000000000001 "ELF"
 *   insn=0x000000000031BC10 string=0x00000000001F9950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HeroEntityComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2,
        __int64 a3,
        google::protobuf::io::CodedOutputStream *a4)
{
  __int64 v4; // x9

  if ( (*(_BYTE *)(this + 24) & 1) != 0 )
  {
    if ( *(_QWORD *)(this + 16) )
      v4 = this;
    else
      v4 = Caver::Proto::HeroEntityComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v4 + 16),
             a2,
             a4);
  }
  return this;
}

