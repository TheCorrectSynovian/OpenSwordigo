/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B6EF4
 * Mangled: _ZN5Caver19GroundMeshComponentD0Ev
 * Demangled: Caver::GroundMeshComponent::~GroundMeshComponent()
 *
 * Callers: 1
 *   0x00000000002B6C48  Caver::GroundMeshComponent::InitWithComponent(Caver::GroundMeshComponent const*)
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCB30  Caver::GroundMeshComponent::~GroundMeshComponent()
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002B6F00 string=0x00000000002B6F04 ""
 *   insn=0x00000000002B6F04 string=0x00000000001FCB30 "0'"
 *   insn=0x00000000002B6F14 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B6F24 string=0x00000000002B6F28 "g*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundMeshComponent::~GroundMeshComponent(Caver::GroundMeshComponent *this)
{
  Caver::GroundMeshComponent::~GroundMeshComponent(this);
  operator delete(this);
}

