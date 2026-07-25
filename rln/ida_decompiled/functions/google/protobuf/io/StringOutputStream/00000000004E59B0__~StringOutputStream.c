/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E59B0
 * Mangled: _ZN6google8protobuf2io18StringOutputStreamD0Ev
 * Demangled: google::protobuf::io::StringOutputStream::~StringOutputStream()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4BB0  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000004E59E8  google::protobuf::io::StringOutputStream::Next(void **,int *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000004E59BC string=0x00000000004E59C0 "|<"
 *   insn=0x00000000004E59C0 string=0x00000000001F4BB0 "P'"
 *   insn=0x00000000004E59CC string=0x00000000004E59D0 "8F"
 *   insn=0x00000000004E59D0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004E59D8 string=0x00000000004E59DC "5F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::StringOutputStream::~StringOutputStream(
        google::protobuf::io::StringOutputStream *this)
{
  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream(this);
  operator delete(this);
}

