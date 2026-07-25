/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF6D0
 * Mangled: ._ZN5Caver18GameViewController20RegisterSceneLibraryEPNS_5SceneE
 * Demangled: Caver::GameViewController::RegisterSceneLibrary(Caver::Scene *)
 *
 * Callers: 1
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *
 * Callees: 1
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF6D8 string=0x00000000001FF6DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameViewController::RegisterSceneLibrary(Caver::GameViewController *this, Caver::Scene *a2)
{
  JUMPOUT(0x354008);
}

