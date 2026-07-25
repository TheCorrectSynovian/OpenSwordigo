/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324EFC
 * Mangled: _ZN5Caver5Proto34SnappingMonsterControllerComponentD0Ev
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000324F44  Caver::Proto::SnappingMonsterControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000324F04 string=0x0000000000324F08 ""
 *   insn=0x0000000000324F08 string=0x0000000000324F0C "yB"
 *   insn=0x0000000000324F10 string=0x0000000000324F14 "A"
 *   insn=0x0000000000324F14 string=0x0000000000324F18 "h"
 *   insn=0x0000000000324F1C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000324F2C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000324F3C string=0x0000000000324F40 "ar\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent(
        Caver::Proto::SnappingMonsterControllerComponent *this)
{
  *(_QWORD *)this = off_6C8C58;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

