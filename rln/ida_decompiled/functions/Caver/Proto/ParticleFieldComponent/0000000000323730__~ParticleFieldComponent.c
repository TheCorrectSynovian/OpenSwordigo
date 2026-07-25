/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323730
 * Mangled: _ZN5Caver5Proto22ParticleFieldComponentD0Ev
 * Demangled: Caver::Proto::ParticleFieldComponent::~ParticleFieldComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x0000000000323778  Caver::Proto::ParticleFieldComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000323738 string=0x000000000032373C ""
 *   insn=0x000000000032373C string=0x0000000000323740 ""
 *   insn=0x0000000000323744 string=0x0000000000323748 "A"
 *   insn=0x0000000000323748 string=0x000000000032374C "h"
 *   insn=0x0000000000323750 string=0x00000000001F7600 "0'"
 *   insn=0x0000000000323760 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000323770 string=0x0000000000323774 "Tx\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleFieldComponent::~ParticleFieldComponent(
        Caver::Proto::ParticleFieldComponent *this)
{
  *(_QWORD *)this = off_6C8A78;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

