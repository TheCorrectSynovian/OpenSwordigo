/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE3C0
 * Mangled: ._ZNK5Caver5Proto9Rectangle8ByteSizeEv
 * Demangled: Caver::Proto::Rectangle::ByteSize(void)
 *
 * Callers: 4
 *   0x00000000002FEE60  Caver::Proto::SceneObject::ByteSize(void)
 *   0x00000000003023A4  Caver::Proto::Scene::ByteSize(void)
 *   0x000000000030837C  Caver::Proto::GroundMeshComponent::ByteSize(void)
 *   0x000000000030B404  Caver::Proto::ShapeComponent::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002CF114  Caver::Proto::Rectangle::ByteSize(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FE3C4 string=0x00000000002CF114 "p@9"
 *   insn=0x00000000001FE3C8 string=0x00000000001FE3CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Rectangle::ByteSize(Caver::Proto::Rectangle *this)
{
  return _ZNK5Caver5Proto9Rectangle8ByteSizeEv(this);
}

