/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0D88
 * Mangled: _ZN5Caver5Proto10FloatColorD0Ev
 * Demangled: Caver::Proto::FloatColor::~FloatColor()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002D0DD0  Caver::Proto::FloatColor::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002D0D94 string=0x00000000002D0D98 ""
 *   insn=0x00000000002D0D9C string=0x00000000002D0DA0 "A"
 *   insn=0x00000000002D0DA0 string=0x00000000002D0DA4 "h"
 *   insn=0x00000000002D0DA8 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D0DB4 string=0x00000000002D0DB8 ">"
 *   insn=0x00000000002D0DB8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D0DC0 string=0x00000000002D0DC4 ";"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::FloatColor::~FloatColor(Caver::Proto::FloatColor *this)
{
  *(_QWORD *)this = off_6C5CD8;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

