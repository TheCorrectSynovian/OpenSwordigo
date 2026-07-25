/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003372E4
 * Mangled: _ZNK5Caver5Proto14SpellComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::SpellComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000033712C  Caver::Proto::SpellComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 10
 *   insn=0x00000000003372E8 string=0x00000000003372EC "I"
 *   insn=0x00000000003372EC string=0x00000000003372F4 "j"
 *   insn=0x00000000003372F4 string=0x00000000003372F8 "\t@"
 *   insn=0x00000000003372F8 string=0x00000000003372FC "J]C"
 *   insn=0x0000000000337300 string=0x0000000000337304 "?"
 *   insn=0x0000000000337304 string=0x0000000000337308 "J"
 *   insn=0x0000000000337308 string=0x000000000033730C "I"
 *   insn=0x000000000033730C string=0x0000000000337310 "!\t@"
 *   insn=0x0000000000337314 string=0x0000000000000001 "ELF"
 *   insn=0x0000000000337318 string=0x00000000001F9950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpellComponent::SerializeWithCachedSizes(
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
      v4 = Caver::Proto::SpellComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v4 + 16),
             a2,
             a4);
  }
  return this;
}

