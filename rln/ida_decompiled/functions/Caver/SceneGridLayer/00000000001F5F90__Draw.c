/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5F90
 * Mangled: ._ZN5Caver14SceneGridLayer4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x000000000046CFEC  Caver::SceneGrid::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000046E364  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5F98 string=0x00000000001F5F9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGridLayer::Draw(
        Caver::SceneGridLayer *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3)
{
  return _ZN5Caver14SceneGridLayer4DrawEPNS_16RenderingContextERKNS_7Matrix4E(this, a2, a3);
}

