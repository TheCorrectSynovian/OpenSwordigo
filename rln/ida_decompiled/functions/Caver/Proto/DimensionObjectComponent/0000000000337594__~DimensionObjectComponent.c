/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337594
 * Mangled: _ZN5Caver5Proto24DimensionObjectComponentD0Ev
 * Demangled: Caver::Proto::DimensionObjectComponent::~DimensionObjectComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000003375DC  Caver::Proto::DimensionObjectComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x000000000033759C string=0x00000000003375A0 "h"
 *   insn=0x00000000003375A0 string=0x00000000003375A4 "iC"
 *   insn=0x00000000003375A8 string=0x00000000003375AC "A"
 *   insn=0x00000000003375AC string=0x00000000003375B0 "h"
 *   insn=0x00000000003375B4 string=0x00000000001F7600 "0'"
 *   insn=0x00000000003375C0 string=0x00000000003375C4 ";"
 *   insn=0x00000000003375C4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003375CC string=0x00000000003375D0 "8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DimensionObjectComponent::~DimensionObjectComponent(
        Caver::Proto::DimensionObjectComponent *this)
{
  *(_QWORD *)this = off_6C9B58;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

