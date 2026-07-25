/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322AD4
 * Mangled: _ZN5Caver5Proto23ParticleObjectComponentD0Ev
 * Demangled: Caver::Proto::ParticleObjectComponent::~ParticleObjectComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000322B1C  Caver::Proto::ParticleObjectComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000322ADC string=0x0000000000322AE0 "("
 *   insn=0x0000000000322AE0 string=0x0000000000322AE4 "A@"
 *   insn=0x0000000000322AE8 string=0x0000000000322AEC "A"
 *   insn=0x0000000000322AEC string=0x0000000000322AF0 "h"
 *   insn=0x0000000000322AF4 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000322B04 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000322B14 string=0x0000000000322B18 "k{\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleObjectComponent::~ParticleObjectComponent(
        Caver::Proto::ParticleObjectComponent *this)
{
  *(_QWORD *)this = off_6C8988;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

