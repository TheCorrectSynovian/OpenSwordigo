/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032CAF8
 * Mangled: _ZNK5Caver5Proto20WeaponTrailComponent24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
 * Demangled: Caver::Proto::WeaponTrailComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 1
 *   0x000000000032C940  Caver::Proto::WeaponTrailComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000001F9950  google::protobuf::internal::WireFormatLite::WriteMessage(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 9
 *   insn=0x000000000032CAFC string=0x000000000032CB00 "I"
 *   insn=0x000000000032CB08 string=0x000000000032CB0C "\t@"
 *   insn=0x000000000032CB0C string=0x000000000032CB10 "J"
 *   insn=0x000000000032CB14 string=0x000000000032CB18 "?"
 *   insn=0x000000000032CB18 string=0x000000000032CB1C "J"
 *   insn=0x000000000032CB1C string=0x000000000032CB20 "I"
 *   insn=0x000000000032CB20 string=0x000000000032CB24 "!\t@"
 *   insn=0x000000000032CB28 string=0x0000000000000001 "ELF"
 *   insn=0x000000000032CB2C string=0x00000000001F9950 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponTrailComponent::SerializeWithCachedSizes(
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
      v4 = Caver::Proto::WeaponTrailComponent::default_instance_;
    return google::protobuf::internal::WireFormatLite::WriteMessage(
             (google::protobuf::internal::WireFormatLite *)((char *)&dword_0 + 1),
             *(_QWORD *)(v4 + 16),
             a2,
             a4);
  }
  return this;
}

