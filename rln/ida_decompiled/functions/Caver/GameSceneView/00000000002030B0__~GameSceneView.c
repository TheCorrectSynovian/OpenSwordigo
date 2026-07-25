/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002030B0
 * Mangled: ._ZN5Caver13GameSceneViewD2Ev
 * Demangled: Caver::GameSceneView::~GameSceneView()
 *
 * Callers: 1
 *   0x000000000034D7E8  Caver::GameSceneView::GameSceneView(void)
 *
 * Callees: 1
 *   0x000000000034D7E8  Caver::GameSceneView::GameSceneView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002030B8 string=0x00000000002030BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameSceneView::~GameSceneView(Caver::GameSceneView *this)
{
  JUMPOUT(0x34DBD8);
}

