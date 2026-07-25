/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7CC0
 * Mangled: ._ZN6google8protobuf2io17CodedOutputStreamD2Ev
 * Demangled: google::protobuf::io::CodedOutputStream::~CodedOutputStream()
 *
 * Callers: 2
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *   0x00000000004E2050  sub_4E2050
 *
 * Callees: 1
 *   0x00000000004E4784  google::protobuf::io::CodedOutputStream::~CodedOutputStream()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7CC8 string=0x00000000001F7CCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::io::CodedOutputStream::~CodedOutputStream(
        google::protobuf::io::CodedOutputStream *this)
{
  _ZN6google8protobuf2io17CodedOutputStreamD2Ev(this);
}

