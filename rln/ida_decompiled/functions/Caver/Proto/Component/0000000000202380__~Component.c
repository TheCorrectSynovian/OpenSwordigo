/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202380
 * Mangled: ._ZN5Caver5Proto9ComponentD2Ev_0
 * Demangled: Caver::Proto::Component::~Component()
 *
 * Callers: 2
 *   0x00000000002B6C48  Caver::GroundMeshComponent::InitWithComponent(Caver::GroundMeshComponent const*)
 *   0x00000000002B8C60  Caver::GroundMeshComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002FB0E0  Caver::Proto::Component::Component(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202388 string=0x000000000020238C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Component::~Component(Caver::Proto::Component *this)
{
  JUMPOUT(0x2FB320);
}

