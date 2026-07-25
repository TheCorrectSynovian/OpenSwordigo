/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203580
 * Mangled: ._ZN6google8protobuf2io16CodedInputStream20ReadVarint64FallbackEPm
 * Demangled: google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
 *
 * Callers: 6
 *   0x00000000004DD72C  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x00000000004E2900  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x00000000004E3F80  google::protobuf::io::CodedInputStream::ReadVarint32Slow(uint *)
 *   0x00000000004E41C8  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000004E4310  google::protobuf::io::CodedInputStream::ReadTagSlow(void)
 *   0x00000000004E43F0  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *
 * Callees: 1
 *   0x00000000004E3FE4  google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203588 string=0x000000000020358C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedInputStream::ReadVarint64Fallback(
        google::protobuf::io::CodedInputStream *this,
        unsigned __int64 *a2)
{
  return _ZN6google8protobuf2io16CodedInputStream20ReadVarint64FallbackEPm(this, a2);
}

