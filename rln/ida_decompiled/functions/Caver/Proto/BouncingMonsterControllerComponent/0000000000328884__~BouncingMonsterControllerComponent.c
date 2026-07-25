/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328884
 * Mangled: _ZN5Caver5Proto34BouncingMonsterControllerComponentD0Ev
 * Demangled: Caver::Proto::BouncingMonsterControllerComponent::~BouncingMonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000003288CC  Caver::Proto::BouncingMonsterControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000328890 string=0x0000000000328894 ""
 *   insn=0x0000000000328898 string=0x000000000032889C "A"
 *   insn=0x000000000032889C string=0x00000000003288A0 "h"
 *   insn=0x00000000003288A0 string=0x00000000003288A4 "W;"
 *   insn=0x00000000003288A4 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003288B4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003288BC string=0x00000000003288C0 "|:"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BouncingMonsterControllerComponent::~BouncingMonsterControllerComponent(
        Caver::Proto::BouncingMonsterControllerComponent *this)
{
  *(_QWORD *)this = off_6C8FA0;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

