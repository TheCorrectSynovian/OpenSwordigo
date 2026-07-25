/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD9F0
 * Mangled: ._ZN6google8protobuf2io17CodedOutputStreamC2EPNS1_20ZeroCopyOutputStreamE
 * Demangled: google::protobuf::io::CodedOutputStream::CodedOutputStream(google::protobuf::io::ZeroCopyOutputStream *)
 *
 * Callers: 2
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *   0x00000000004E2050  sub_4E2050
 *
 * Callees: 1
 *   0x00000000004E4658  google::protobuf::io::CodedOutputStream::CodedOutputStream(google::protobuf::io::ZeroCopyOutputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD9F8 string=0x00000000001FD9FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedOutputStream::CodedOutputStream(
        google::protobuf::io::CodedOutputStream *this,
        google::protobuf::io::ZeroCopyOutputStream *a2)
{
  return _ZN6google8protobuf2io17CodedOutputStreamC2EPNS1_20ZeroCopyOutputStreamE(this, a2);
}

