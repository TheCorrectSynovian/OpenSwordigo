/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326E1C
 * Mangled: _ZN5Caver5Proto32SkellyMonsterControllerComponentD0Ev
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000326E64  Caver::Proto::SkellyMonsterControllerComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000326E28 string=0x0000000000326E2C "=F"
 *   insn=0x0000000000326E30 string=0x0000000000326E34 "A"
 *   insn=0x0000000000326E34 string=0x0000000000326E38 "h"
 *   insn=0x0000000000326E3C string=0x00000000001F7600 "0'"
 *   insn=0x0000000000326E4C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent(
        Caver::Proto::SkellyMonsterControllerComponent *this)
{
  *(_QWORD *)this = off_6C8DC0;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

