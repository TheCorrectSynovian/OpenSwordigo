/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBC70
 * Mangled: ._ZN5Caver13GameSceneViewC2Ev
 * Demangled: Caver::GameSceneView::GameSceneView(void)
 *
 * Callers: 1
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *
 * Callees: 1
 *   0x000000000034D7E8  Caver::GameSceneView::GameSceneView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBC78 string=0x00000000001FBC7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameSceneView::GameSceneView(Caver::GameSceneView *this)
{
  return _ZN5Caver13GameSceneViewC2Ev(this);
}

