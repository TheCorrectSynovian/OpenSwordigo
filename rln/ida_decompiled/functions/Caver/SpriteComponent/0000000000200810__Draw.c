/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200810
 * Mangled: ._ZNK5Caver15SpriteComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::SpriteComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000023C854  Caver::SpriteComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200818 string=0x000000000020081C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpriteComponent::Draw(
        Caver::SpriteComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3)
{
  return _ZNK5Caver15SpriteComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4E(this, a2, a3);
}

