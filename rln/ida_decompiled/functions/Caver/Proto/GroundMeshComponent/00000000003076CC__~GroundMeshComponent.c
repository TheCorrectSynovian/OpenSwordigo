/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003076CC
 * Mangled: _ZN5Caver5Proto19GroundMeshComponentD0Ev
 * Demangled: Caver::Proto::GroundMeshComponent::~GroundMeshComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4380  Caver::Proto::GroundMeshComponent::~GroundMeshComponent()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000307704  Caver::Proto::GroundMeshComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000003076D8 string=0x00000000003076DC ")"
 *   insn=0x00000000003076DC string=0x00000000001F4380 "P'"
 *   insn=0x00000000003076EC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003076FC string=0x0000000000307700 "q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GroundMeshComponent::~GroundMeshComponent(Caver::Proto::GroundMeshComponent *this)
{
  Caver::Proto::GroundMeshComponent::~GroundMeshComponent(this);
  operator delete(this);
}

