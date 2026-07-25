/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302D2C
 * Mangled: _ZNK5Caver5Proto15SpriteComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::SpriteComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7750  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 2
 *   insn=0x0000000000302D30 string=0x0000000000302D34 "I"
 *   insn=0x0000000000302D48 string=0x00000000001F7750 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpriteComponent::SerializeWithCachedSizes(
        __int64 this,
        google::protobuf::io::CodedOutputStream *a2)
{
  if ( (*(_BYTE *)(this + 24) & 1) != 0 )
    return google::protobuf::internal::WireFormatLite::WriteString(1, *(_QWORD *)(this + 16), a2);
  return this;
}

