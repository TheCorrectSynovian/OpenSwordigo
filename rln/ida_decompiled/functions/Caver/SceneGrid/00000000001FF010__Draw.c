/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF010
 * Mangled: ._ZN5Caver9SceneGrid4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::SceneGrid::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000046CFEC  Caver::SceneGrid::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF018 string=0x00000000001FF01C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGrid::Draw(
        Caver::SceneGrid *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3)
{
  return _ZN5Caver9SceneGrid4DrawEPNS_16RenderingContextERKNS_7Matrix4E(this, a2, a3);
}

