/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A7A8
 * Mangled: _ZNK5Caver5Proto21EntityActionComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::EntityActionComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000031A5F0  Caver::Proto::EntityActionComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 11
 *   insn=0x000000000031A7AC string=0x000000000031A7B0 "I"
 *   insn=0x000000000031A7B0 string=0x000000000031A7B8 "J"
 *   insn=0x000000000031A7B8 string=0x000000000031A7BC "\t@"
 *   insn=0x000000000031A7BC string=0x000000000031A7C0 "J"
 *   insn=0x000000000031A7C4 string=0x000000000031A7C8 "?"
 *   insn=0x000000000031A7C8 string=0x000000000031A7CC "J"
 *   insn=0x000000000031A7CC string=0x000000000031A7D0 "I"
 *   insn=0x000000000031A7D0 string=0x000000000031A7D4 "!\t@"
 *   insn=0x000000000031A7D8 string=0x000000000031A7DC "]|"
 *   insn=0x000000000031A7D8 string=0x0000000000000001 "ELF"
 *   insn=0x000000000031A7DC string=0x00000000001F9950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityActionComponent::SerializeWithCachedSizes(
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
      v4 = Caver::Proto::EntityActionComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v4 + 16),
             a2,
             a4);
  }
  return this;
}

