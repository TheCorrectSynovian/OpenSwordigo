/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031476C
 * Mangled: _ZN5Caver5Proto15EntityComponentD0Ev
 * Demangled: Caver::Proto::EntityComponent::~EntityComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000003147B4  Caver::Proto::EntityComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000314778 string=0x000000000031477C "UG"
 *   insn=0x0000000000314780 string=0x0000000000314784 "A"
 *   insn=0x0000000000314784 string=0x0000000000314788 "h"
 *   insn=0x000000000031478C string=0x00000000001F7600 "0'"
 *   insn=0x000000000031479C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003147AC string=0x00000000003147B0 "E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityComponent::~EntityComponent(Caver::Proto::EntityComponent *this)
{
  *(_QWORD *)this = off_6C7FB0;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

