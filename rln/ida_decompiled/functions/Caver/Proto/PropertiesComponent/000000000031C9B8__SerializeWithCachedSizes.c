/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C9B8
 * Mangled: _ZNK5Caver5Proto19PropertiesComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::PropertiesComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000031C800  Caver::Proto::PropertiesComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 10
 *   insn=0x000000000031C9BC string=0x000000000031C9C0 "I"
 *   insn=0x000000000031C9C0 string=0x000000000031C9C8 "J"
 *   insn=0x000000000031C9C8 string=0x000000000031C9CC "\t@"
 *   insn=0x000000000031C9CC string=0x000000000031C9D0 "J"
 *   insn=0x000000000031C9D4 string=0x000000000031C9D8 "?"
 *   insn=0x000000000031C9D8 string=0x000000000031C9DC "J"
 *   insn=0x000000000031C9DC string=0x000000000031C9E0 "I"
 *   insn=0x000000000031C9E0 string=0x000000000031C9E4 "!\t@"
 *   insn=0x000000000031C9E8 string=0x0000000000000001 "ELF"
 *   insn=0x000000000031C9EC string=0x00000000001F9950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PropertiesComponent::SerializeWithCachedSizes(
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
      v4 = Caver::Proto::PropertiesComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v4 + 16),
             a2,
             a4);
  }
  return this;
}

