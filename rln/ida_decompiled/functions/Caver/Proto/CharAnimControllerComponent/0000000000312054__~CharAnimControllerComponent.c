/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000312054
 * Mangled: _ZN5Caver5Proto27CharAnimControllerComponentD0Ev
 * Demangled: Caver::Proto::CharAnimControllerComponent::~CharAnimControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000031209C  Caver::Proto::CharAnimControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000312060 string=0x0000000000312064 ""
 *   insn=0x0000000000312068 string=0x000000000031206C "A"
 *   insn=0x000000000031206C string=0x0000000000312070 "h"
 *   insn=0x0000000000312070 string=0x0000000000312074 "c"
 *   insn=0x0000000000312074 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000312084 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000312094 string=0x0000000000312098 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CharAnimControllerComponent::~CharAnimControllerComponent(
        Caver::Proto::CharAnimControllerComponent *this)
{
  *(_QWORD *)this = off_6C7EC0;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

