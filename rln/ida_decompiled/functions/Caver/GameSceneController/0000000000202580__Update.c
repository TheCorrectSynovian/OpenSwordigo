/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202580
 * Mangled: ._ZN5Caver19GameSceneController6UpdateEf
 * Demangled: Caver::GameSceneController::Update(float)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202588 string=0x000000000020258C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameSceneController::Update(Caver::GameSceneController *this, float a2)
{
  JUMPOUT(0x349D84);
}

