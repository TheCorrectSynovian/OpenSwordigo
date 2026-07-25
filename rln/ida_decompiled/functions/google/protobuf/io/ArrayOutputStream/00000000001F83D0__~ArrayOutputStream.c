/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F83D0
 * Mangled: ._ZN6google8protobuf2io17ArrayOutputStreamD2Ev
 * Demangled: google::protobuf::io::ArrayOutputStream::~ArrayOutputStream()
 *
 * Callers: 1
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *
 * Callees: 1
 *   0x00000000004E5778  google::protobuf::io::ArrayOutputStream::~ArrayOutputStream()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F83D8 string=0x00000000001F83DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::io::ArrayOutputStream::~ArrayOutputStream(
        google::protobuf::io::ArrayOutputStream *this)
{
  _ZN6google8protobuf2io17ArrayOutputStreamD2Ev(this);
}

