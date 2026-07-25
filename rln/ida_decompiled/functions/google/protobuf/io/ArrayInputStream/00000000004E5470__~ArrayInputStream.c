/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5470
 * Mangled: _ZN6google8protobuf2io16ArrayInputStreamD0Ev
 * Demangled: google::protobuf::io::ArrayInputStream::~ArrayInputStream()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201E10  google::protobuf::io::ZeroCopyInputStream::~ZeroCopyInputStream()
 *   0x00000000004E54A8  google::protobuf::io::ArrayInputStream::Next(void const**,int *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000004E547C string=0x00000000004E5480 "dr"
 *   insn=0x00000000004E5490 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004E54A0 string=0x00000000004E54A4 "q"
 *   insn=0x00000000004E54A4 string=0x00000000004E54A8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::ArrayInputStream::~ArrayInputStream(google::protobuf::io::ArrayInputStream *this)
{
  google::protobuf::io::ZeroCopyInputStream::~ZeroCopyInputStream(this);
  operator delete(this);
}

