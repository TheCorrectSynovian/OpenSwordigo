/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201D50
 * Mangled: ._ZN5Caver19GameSceneController12CanCastSkillERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::GameSceneController::CanCastSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 1
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *
 * Callees: 1
 *   0x000000000034D44C  Caver::GameSceneController::CanCastSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201D58 string=0x0000000000201D5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameSceneController::CanCastSkill()
{
  return _ZN5Caver19GameSceneController12CanCastSkillERKN5boost10shared_ptrINS_5SkillEEE();
}

