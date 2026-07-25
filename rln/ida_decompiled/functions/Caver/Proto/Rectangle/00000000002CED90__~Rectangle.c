/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CED90
 * Mangled: _ZN5Caver5Proto9RectangleD0Ev
 * Demangled: Caver::Proto::Rectangle::~Rectangle()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002CEDD8  Caver::Proto::Rectangle::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002CED9C string=0x00000000002CEDA0 ""
 *   insn=0x00000000002CEDA4 string=0x00000000002CEDA8 "A"
 *   insn=0x00000000002CEDA8 string=0x00000000002CEDAC "h"
 *   insn=0x00000000002CEDB0 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002CEDBC string=0x00000000002CEDC0 "<"
 *   insn=0x00000000002CEDC0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002CEDC8 string=0x00000000002CEDCC "9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Rectangle::~Rectangle(Caver::Proto::Rectangle *this)
{
  *(_QWORD *)this = off_6C5AF8;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

