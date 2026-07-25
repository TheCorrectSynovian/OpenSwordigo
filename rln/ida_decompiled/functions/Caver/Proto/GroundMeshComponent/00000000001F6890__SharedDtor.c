/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6890
 * Mangled: ._ZN5Caver5Proto19GroundMeshComponent10SharedDtorEv
 * Demangled: Caver::Proto::GroundMeshComponent::SharedDtor(void)
 *
 * Callers: 1
 *   0x0000000000306EB8  Caver::Proto::GroundMeshComponent::GroundMeshComponent(Caver::Proto::GroundMeshComponent const&)
 *
 * Callees: 1
 *   0x0000000000306EB8  Caver::Proto::GroundMeshComponent::GroundMeshComponent(Caver::Proto::GroundMeshComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6898 string=0x00000000001F689C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GroundMeshComponent::SharedDtor(Caver::Proto::GroundMeshComponent *this)
{
  JUMPOUT(0x307544);
}

