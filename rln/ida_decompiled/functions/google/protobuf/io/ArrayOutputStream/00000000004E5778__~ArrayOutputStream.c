/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5778
 * Mangled: _ZN6google8protobuf2io17ArrayOutputStreamD2Ev
 * Demangled: google::protobuf::io::ArrayOutputStream::~ArrayOutputStream()
 *
 * Callers: 1
 *   0x00000000001F83D0  google::protobuf::io::ArrayOutputStream::~ArrayOutputStream()
 *
 * Callees: 1
 *   0x00000000001F4BB0  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream()
 *
 * Referenced strings: 1
 *   insn=0x00000000004E5778 string=0x00000000001F4BB0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::io::ArrayOutputStream::~ArrayOutputStream(
        google::protobuf::io::ArrayOutputStream *this)
{
  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream(this);
}

