/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003293B4
 * Mangled: _ZN5Caver5Proto33GenericMonsterControllerComponentD0Ev
 * Demangled: Caver::Proto::GenericMonsterControllerComponent::~GenericMonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000003293FC  Caver::Proto::GenericMonsterControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000003293C0 string=0x00000000003293C4 ""
 *   insn=0x00000000003293C8 string=0x00000000003293CC "A"
 *   insn=0x00000000003293CC string=0x00000000003293D0 "h"
 *   insn=0x00000000003293D4 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003293E4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003293F4 string=0x00000000003293F8 "3a\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GenericMonsterControllerComponent::~GenericMonsterControllerComponent(
        Caver::Proto::GenericMonsterControllerComponent *this)
{
  *(_QWORD *)this = off_6C9090;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

