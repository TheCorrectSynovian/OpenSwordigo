/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203560
 * Mangled: ._ZN5Caver19GameSceneController10HandleFallEv
 * Demangled: Caver::GameSceneController::HandleFall(void)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x000000000034A76C  Caver::GameSceneController::HandleFall(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203564 string=0x000000000034A76C "t@"
 *   insn=0x0000000000203568 string=0x000000000020356C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameSceneController::HandleFall(Caver::GameSceneController *this)
{
  return _ZN5Caver19GameSceneController10HandleFallEv(this);
}

