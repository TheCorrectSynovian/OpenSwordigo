/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201B40
 * Mangled: ._ZN5Caver19GameSceneController16ManaCostForSkillERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::GameSceneController::ManaCostForSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 2
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *   0x000000000034D44C  Caver::GameSceneController::CanCastSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callees: 1
 *   0x000000000034D22C  Caver::GameSceneController::ManaCostForSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201B48 string=0x0000000000201B4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameSceneController::ManaCostForSkill()
{
  return _ZN5Caver19GameSceneController16ManaCostForSkillERKN5boost10shared_ptrINS_5SkillEEE();
}

