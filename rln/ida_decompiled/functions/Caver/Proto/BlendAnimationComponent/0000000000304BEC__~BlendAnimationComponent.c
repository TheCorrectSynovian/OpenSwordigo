/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000304BEC
 * Mangled: _ZN5Caver5Proto23BlendAnimationComponentD0Ev
 * Demangled: Caver::Proto::BlendAnimationComponent::~BlendAnimationComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000304C34  Caver::Proto::BlendAnimationComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000304BF4 string=0x0000000000304BF8 ""
 *   insn=0x0000000000304BF8 string=0x0000000000304BFC ""
 *   insn=0x0000000000304C00 string=0x0000000000304C04 "A"
 *   insn=0x0000000000304C04 string=0x0000000000304C08 "h"
 *   insn=0x0000000000304C08 string=0x0000000000304C0C "}"
 *   insn=0x0000000000304C0C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000304C1C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000304C2C string=0x0000000000304C30 "%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BlendAnimationComponent::~BlendAnimationComponent(
        Caver::Proto::BlendAnimationComponent *this)
{
  *(_QWORD *)this = off_6C76C8;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

