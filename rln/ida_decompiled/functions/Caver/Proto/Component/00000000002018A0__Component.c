/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002018A0
 * Mangled: ._ZN5Caver5Proto9ComponentC2Ev
 * Demangled: Caver::Proto::Component::Component(void)
 *
 * Callers: 3
 *   0x00000000002B6C48  Caver::GroundMeshComponent::InitWithComponent(Caver::GroundMeshComponent const*)
 *   0x00000000002B8C60  Caver::GroundMeshComponent::Clone(void)
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *
 * Callees: 1
 *   0x00000000002FB04C  Caver::Proto::Component::Component(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002018A8 string=0x00000000002018AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Component::Component(Caver::Proto::Component *this)
{
  return _ZN5Caver5Proto9ComponentC2Ev(this);
}

