/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E59AC
 * Mangled: _ZN6google8protobuf2io18StringOutputStreamD2Ev
 * Demangled: google::protobuf::io::StringOutputStream::~StringOutputStream()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4BB0  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream()
 *
 * Referenced strings: 1
 *   insn=0x00000000004E59AC string=0x00000000001F4BB0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::io::StringOutputStream::~StringOutputStream(
        google::protobuf::io::StringOutputStream *this)
{
  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream(this);
}

