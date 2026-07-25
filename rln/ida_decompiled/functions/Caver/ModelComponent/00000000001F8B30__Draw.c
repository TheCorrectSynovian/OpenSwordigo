/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8B30
 * Mangled: ._ZNK5Caver14ModelComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4Eb
 * Demangled: Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *
 * Callers: 1
 *   0x00000000004665D4  Caver::Scene::DrawModels(Caver::RenderingContext *,Caver::Matrix4 const&,bool,bool)
 *
 * Callees: 1
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8B38 string=0x00000000001F8B3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelComponent::Draw(
        Caver::ModelComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3,
        bool a4)
{
  return _ZNK5Caver14ModelComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4Eb(this, a2, a3, a4);
}

