/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE258
 * Mangled: _ZN5Caver5Proto7Vector2D0Ev
 * Demangled: Caver::Proto::Vector2::~Vector2()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002CE2A0  Caver::Proto::Vector2::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002CE264 string=0x00000000002CE268 ""
 *   insn=0x00000000002CE26C string=0x00000000002CE270 "A"
 *   insn=0x00000000002CE270 string=0x00000000002CE274 "h"
 *   insn=0x00000000002CE278 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002CE284 string=0x00000000002CE288 "\n"
 *   insn=0x00000000002CE288 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002CE290 string=0x00000000002CE294 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Vector2::~Vector2(Caver::Proto::Vector2 *this)
{
  *(_QWORD *)this = off_6C5A08;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

