/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7340
 * Mangled: ._ZN5Caver19GameSceneController12BeginCastingERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::GameSceneController::BeginCasting(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 1
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7348 string=0x00000000001F734C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameSceneController::BeginCasting()
{
  JUMPOUT(0x34BF50);
}

