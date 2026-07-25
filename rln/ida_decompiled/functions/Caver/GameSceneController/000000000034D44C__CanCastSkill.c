/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034D44C
 * Mangled: _ZN5Caver19GameSceneController12CanCastSkillERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::GameSceneController::CanCastSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 1
 *   0x0000000000201D50  Caver::GameSceneController::CanCastSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callees: 1
 *   0x0000000000201B40  Caver::GameSceneController::ManaCostForSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000034D454 string=0x000000000034D458 "|@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::GameSceneController::CanCastSkill(__int64 a1)
{
  int v1; // w19

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 248) + 116LL);
  return v1 > (int)Caver::GameSceneController::ManaCostForSkill();
}

