/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033612C
 * Mangled: _ZNK5Caver5Proto18MagicBombComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::MagicBombComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x0000000000335F74  Caver::Proto::MagicBombComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 9
 *   insn=0x0000000000336130 string=0x0000000000336134 "I"
 *   insn=0x000000000033613C string=0x0000000000336140 "\t@"
 *   insn=0x0000000000336140 string=0x0000000000336144 "J"
 *   insn=0x0000000000336148 string=0x000000000033614C "?"
 *   insn=0x000000000033614C string=0x0000000000336150 "J"
 *   insn=0x0000000000336150 string=0x0000000000336154 "I"
 *   insn=0x0000000000336154 string=0x0000000000336158 "!\t@"
 *   insn=0x000000000033615C string=0x0000000000000001 "ELF"
 *   insn=0x0000000000336160 string=0x00000000001F9950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBombComponent::SerializeWithCachedSizes(
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
      v4 = Caver::Proto::MagicBombComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v4 + 16),
             a2,
             a4);
  }
  return this;
}

