/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000319A00
 * Mangled: _ZN5Caver5Proto25EntityControllerComponentD0Ev
 * Demangled: Caver::Proto::EntityControllerComponent::~EntityControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000319A48  Caver::Proto::EntityControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000319A08 string=0x0000000000319A0C "h"
 *   insn=0x0000000000319A0C string=0x0000000000319A10 "eG"
 *   insn=0x0000000000319A14 string=0x0000000000319A18 "A"
 *   insn=0x0000000000319A18 string=0x0000000000319A1C "h"
 *   insn=0x0000000000319A20 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000319A2C string=0x0000000000319A30 " v"
 *   insn=0x0000000000319A30 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityControllerComponent::~EntityControllerComponent(
        Caver::Proto::EntityControllerComponent *this)
{
  *(_QWORD *)this = off_6C83E8;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

