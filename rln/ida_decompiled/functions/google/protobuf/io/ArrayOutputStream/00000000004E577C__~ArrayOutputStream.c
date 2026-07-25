/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E577C
 * Mangled: _ZN6google8protobuf2io17ArrayOutputStreamD0Ev
 * Demangled: google::protobuf::io::ArrayOutputStream::~ArrayOutputStream()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4BB0  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000004E57B4  google::protobuf::io::ArrayOutputStream::Next(void **,int *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000004E5788 string=0x00000000004E578C "\t="
 *   insn=0x00000000004E578C string=0x00000000001F4BB0 "P'"
 *   insn=0x00000000004E579C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004E57AC string=0x00000000004E57B0 "Ep"
 *   insn=0x00000000004E57B0 string=0x00000000004E57B4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::ArrayOutputStream::~ArrayOutputStream(
        google::protobuf::io::ArrayOutputStream *this)
{
  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream(this);
  operator delete(this);
}

