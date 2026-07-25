/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2B38
 * Mangled: _ZN6google8protobuf8internal12FieldSkipper9SkipFieldEPNS0_2io16CodedInputStreamEj
 * Demangled: google::protobuf::internal::FieldSkipper::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *
 * Referenced strings: 2
 *   insn=0x00000000004E2B3C string=0x00000000004E2B40 "dk"
 *   insn=0x00000000004E2B40 string=0x00000000001FD8D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::FieldSkipper::SkipField(
        google::protobuf::internal::FieldSkipper *this,
        google::protobuf::io::CodedInputStream *a2,
        google::protobuf::io::CodedInputStream *a3)
{
  return google::protobuf::internal::WireFormatLite::SkipField(
           a2,
           (google::protobuf::io::CodedInputStream *)(unsigned int)a3,
           (unsigned int)a3);
}

