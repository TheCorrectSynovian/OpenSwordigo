/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002034D0
 * Mangled: ._ZNK6google8protobuf11MessageLite29SerializePartialToCodedStreamEPNS0_2io17CodedOutputStreamE
 * Demangled: google::protobuf::MessageLite::SerializePartialToCodedStream(google::protobuf::io::CodedOutputStream *)
 *
 * Callers: 2
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *   0x00000000004E2050  sub_4E2050
 *
 * Callees: 1
 *   0x00000000004E1F44  google::protobuf::MessageLite::SerializePartialToCodedStream(google::protobuf::io::CodedOutputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002034D8 string=0x00000000002034DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::MessageLite::SerializePartialToCodedStream(
        google::protobuf::MessageLite *this,
        google::protobuf::io::CodedOutputStream *a2)
{
  return _ZNK6google8protobuf11MessageLite29SerializePartialToCodedStreamEPNS0_2io17CodedOutputStreamE(this, a2);
}

