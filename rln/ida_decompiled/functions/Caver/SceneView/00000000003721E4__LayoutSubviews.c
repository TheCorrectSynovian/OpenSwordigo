/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003721E4
 * Mangled: _ZN5Caver9SceneView14LayoutSubviewsEv
 * Demangled: Caver::SceneView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5DC0  Caver::Camera::SetAspectRatio(float)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000003721F0 string=0x00000000003721F4 "h"
 *   insn=0x00000000003721F4 string=0x00000000003721F8 "`B"
 *   insn=0x00000000003721FC string=0x0000000000372200 "`"
 *   insn=0x0000000000372200 string=0x0000000000372204 "`"
 *   insn=0x000000000037220C string=0x00000000001F5DC0 "P'"
 *   insn=0x000000000037221C string=0x00000000001F94B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneView::LayoutSubviews(Caver::SceneView *this)
{
  *(_OWORD *)*((_QWORD *)this + 43) = *(_OWORD *)((char *)this + 132);
  Caver::Camera::SetAspectRatio(*((Caver::Camera **)this + 43), *((float *)this + 35) / *((float *)this + 36));
  return Caver::GUIView::LayoutSubviews(this);
}

