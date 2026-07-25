/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBDC0
 * Mangled: ._ZN5Caver16RenderingContext19SetProjectionMatrixERKNS_7Matrix4E
 * Demangled: Caver::RenderingContext::SetProjectionMatrix(Caver::Matrix4 const&)
 *
 * Callers: 3
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000478CE8  Java_com_touchfoo_swordigo_Native_drawApplication
 *   0x00000000004A11C0  Caver::GUIView::SetOrthoProjection(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000048B184  Caver::RenderingContext::SetProjectionMatrix(Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBDC8 string=0x00000000001FBDCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetProjectionMatrix(
        Caver::RenderingContext *this,
        const Caver::Matrix4 *a2)
{
  return _ZN5Caver16RenderingContext19SetProjectionMatrixERKNS_7Matrix4E(this, a2);
}

