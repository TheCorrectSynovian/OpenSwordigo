/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328284
 * Mangled: _ZN5Caver5Proto29BatMonsterControllerComponentD0Ev
 * Demangled: Caver::Proto::BatMonsterControllerComponent::~BatMonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000003282CC  Caver::Proto::BatMonsterControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000328290 string=0x0000000000328294 "aB"
 *   insn=0x0000000000328298 string=0x000000000032829C "A"
 *   insn=0x000000000032829C string=0x00000000003282A0 "h"
 *   insn=0x00000000003282A4 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003282B4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BatMonsterControllerComponent::~BatMonsterControllerComponent(
        Caver::Proto::BatMonsterControllerComponent *this)
{
  *(_QWORD *)this = off_6C8F28;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

