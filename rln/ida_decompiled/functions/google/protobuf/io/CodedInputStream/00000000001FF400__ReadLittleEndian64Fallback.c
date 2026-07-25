/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF400
 * Mangled: ._ZN6google8protobuf2io16CodedInputStream26ReadLittleEndian64FallbackEPm
 * Demangled: google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(ulong *)
 *
 * Callers: 4
 *   0x00000000002CDEC4  Caver::Proto::DateTime::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000002EA650  Caver::Proto::PlayerProfile::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x00000000004E2900  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Callees: 1
 *   0x00000000004E3E84  google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(ulong *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF408 string=0x00000000001FF40C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
        google::protobuf::io::CodedInputStream *this,
        unsigned __int64 *a2)
{
  return _ZN6google8protobuf2io16CodedInputStream26ReadLittleEndian64FallbackEPm(this, a2);
}

