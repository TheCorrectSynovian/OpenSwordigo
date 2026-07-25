/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6480
 * Mangled: ._ZN5Caver16CameraController6UpdateEf
 * Demangled: Caver::CameraController::Update(float)
 *
 * Callers: 2
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x0000000000372220  Caver::SceneView::Update(float)
 *
 * Callees: 1
 *   0x000000000045807C  Caver::CameraController::CameraController(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6488 string=0x00000000001F648C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CameraController::Update(Caver::CameraController *this, float a2)
{
  JUMPOUT(0x45828C);
}

