/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031651C
 * Mangled: _ZN5Caver5Proto23DoorControllerComponentD0Ev
 * Demangled: Caver::Proto::DoorControllerComponent::~DoorControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000316564  Caver::Proto::DoorControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000316528 string=0x000000000031652C ""
 *   insn=0x0000000000316530 string=0x0000000000316534 "A"
 *   insn=0x0000000000316534 string=0x0000000000316538 "h"
 *   insn=0x0000000000316538 string=0x000000000031653C "1"
 *   insn=0x000000000031653C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000316548 string=0x000000000031654C "Y"
 *   insn=0x000000000031654C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000316554 string=0x0000000000316558 "V"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DoorControllerComponent::~DoorControllerComponent(
        Caver::Proto::DoorControllerComponent *this)
{
  *(_QWORD *)this = off_6C8190;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

