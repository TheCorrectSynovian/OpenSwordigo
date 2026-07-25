/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E673C
 * Mangled: _ZN6google8protobuf2io20ZeroCopyOutputStreamD0Ev
 * Demangled: google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000004E6740  sub_4E6740
 *
 * Referenced strings: 1
 *   insn=0x00000000004E673C string=0x00000000004E6740 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream(
        google::protobuf::io::ZeroCopyOutputStream *this)
{
  __break(1u);
  sub_4E6740(this);
}

