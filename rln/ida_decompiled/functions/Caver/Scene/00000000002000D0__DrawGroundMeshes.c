/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002000D0
 * Mangled: ._ZN5Caver5Scene16DrawGroundMeshesEPNS_16RenderingContextERKNS_7Matrix4Eb
 * Demangled: Caver::Scene::DrawGroundMeshes(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000466454  Caver::Scene::DrawGroundMeshes(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000002000D8 string=0x00000000002000DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Scene::DrawGroundMeshes(
        Caver::Scene *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3,
        bool a4)
{
  return _ZN5Caver5Scene16DrawGroundMeshesEPNS_16RenderingContextERKNS_7Matrix4Eb(this, a2, a3, a4);
}

