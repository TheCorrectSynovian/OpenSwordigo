/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FACE0
 * Mangled: ._ZN6google8protobuf11MessageLite20ParseFromCodedStreamEPNS0_2io16CodedInputStreamE
 * Demangled: google::protobuf::MessageLite::ParseFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *
 * Callees: 1
 *   0x00000000004E07F0  google::protobuf::MessageLite::InitializationErrorString(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FACE8 string=0x00000000001FACEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::MessageLite::ParseFromCodedStream(
        google::protobuf::MessageLite *this,
        google::protobuf::io::CodedInputStream *a2)
{
  JUMPOUT(0x4E0C04);
}

