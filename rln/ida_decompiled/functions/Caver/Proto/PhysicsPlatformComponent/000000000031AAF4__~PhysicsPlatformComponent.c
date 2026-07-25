/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031AAF4
 * Mangled: _ZN5Caver5Proto24PhysicsPlatformComponentD0Ev
 * Demangled: Caver::Proto::PhysicsPlatformComponent::~PhysicsPlatformComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000031AB3C  Caver::Proto::PhysicsPlatformComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000031AAFC string=0x000000000031AB00 "H"
 *   insn=0x000000000031AB00 string=0x000000000031AB04 ""
 *   insn=0x000000000031AB08 string=0x000000000031AB0C "A"
 *   insn=0x000000000031AB0C string=0x000000000031AB10 "h"
 *   insn=0x000000000031AB14 string=0x00000000001F7600 "0'"
 *   insn=0x000000000031AB24 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031AB34 string=0x000000000031AB38 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PhysicsPlatformComponent::~PhysicsPlatformComponent(
        Caver::Proto::PhysicsPlatformComponent *this)
{
  *(_QWORD *)this = off_6C84D8;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

