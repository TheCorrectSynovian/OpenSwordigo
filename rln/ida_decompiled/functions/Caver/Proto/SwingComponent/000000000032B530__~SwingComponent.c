/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032B530
 * Mangled: _ZN5Caver5Proto14SwingComponentD0Ev
 * Demangled: Caver::Proto::SwingComponent::~SwingComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000032B578  Caver::Proto::SwingComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x000000000032B53C string=0x000000000032B540 "UA"
 *   insn=0x000000000032B544 string=0x000000000032B548 "A"
 *   insn=0x000000000032B548 string=0x000000000032B54C "h"
 *   insn=0x000000000032B54C string=0x000000000032B550 ",0"
 *   insn=0x000000000032B550 string=0x00000000001F7600 "0'"
 *   insn=0x000000000032B55C string=0x000000000032B560 "T/"
 *   insn=0x000000000032B560 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000032B568 string=0x000000000032B56C "Q/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SwingComponent::~SwingComponent(Caver::Proto::SwingComponent *this)
{
  *(_QWORD *)this = off_6C91F8;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

