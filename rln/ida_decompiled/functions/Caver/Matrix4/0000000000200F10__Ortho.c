/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200F10
 * Mangled: ._ZN5Caver7Matrix45OrthoEffffff
 * Demangled: Caver::Matrix4::Ortho(float,float,float,float,float,float)
 *
 * Callers: 5
 *   0x00000000004576A0  Caver::Camera::SetOrthoProjection(float,float,float,float)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000478CE8  Java_com_touchfoo_swordigo_Native_drawApplication
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *   0x00000000004A1014  Caver::GUIView::SetBounds(Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x00000000004AF708  Caver::Matrix4::Ortho(float,float,float,float,float,float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200F18 string=0x0000000000200F1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Matrix4::Ortho(
        Caver::Matrix4 *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  return _ZN5Caver7Matrix45OrthoEffffff(this, a2, a3, a4, a5, a6, a7);
}

