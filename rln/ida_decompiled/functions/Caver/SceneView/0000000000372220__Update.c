/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000372220
 * Mangled: _ZN5Caver9SceneView6UpdateEf
 * Demangled: Caver::SceneView::Update(float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F6480  Caver::CameraController::Update(float)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *
 * Referenced strings: 6
 *   insn=0x0000000000372230 string=0x0000000000372234 "`"
 *   insn=0x0000000000372234 string=0x0000000000372238 ""
 *   insn=0x000000000037223C string=0x0000000000372240 "`z@"
 *   insn=0x000000000037223C string=0x00000000001F6480 "0'"
 *   insn=0x0000000000372244 string=0x0000000000372248 ""
 *   insn=0x0000000000372248 string=0x000000000037224C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneView::Update(Caver::SceneView *this, long double a2)
{
  Caver::CameraController::Update((Caver::SceneView *)((char *)this + 256), *(float *)&a2);
  (*(void (__fastcall **)(_QWORD, long double))(**((_QWORD **)this + 30) + 24LL))(*((_QWORD *)this + 30), a2);
  return Caver::GUIView::Update(this, *(float *)&a2);
}

