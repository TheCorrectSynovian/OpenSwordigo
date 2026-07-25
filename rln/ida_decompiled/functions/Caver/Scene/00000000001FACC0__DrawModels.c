/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FACC0
 * Mangled: ._ZN5Caver5Scene10DrawModelsEPNS_16RenderingContextERKNS_7Matrix4Ebb
 * Demangled: Caver::Scene::DrawModels(Caver::RenderingContext *,Caver::Matrix4 const&,bool,bool)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004665D4  Caver::Scene::DrawModels(Caver::RenderingContext *,Caver::Matrix4 const&,bool,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FACC8 string=0x00000000001FACCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Scene::DrawModels(
        Caver::Scene *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3,
        bool a4,
        bool a5)
{
  return _ZN5Caver5Scene10DrawModelsEPNS_16RenderingContextERKNS_7Matrix4Ebb(this, a2, a3, a4, a5);
}

