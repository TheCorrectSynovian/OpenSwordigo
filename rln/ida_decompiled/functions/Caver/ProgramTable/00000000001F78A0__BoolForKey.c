/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F78A0
 * Mangled: ._ZN5Caver12ProgramTable10BoolForKeyERKSs
 * Demangled: Caver::ProgramTable::BoolForKey(std::string const&)
 *
 * Callers: 1
 *   0x000000000034D22C  Caver::GameSceneController::ManaCostForSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callees: 1
 *   0x00000000004C2124  Caver::ProgramTable::BoolForKey(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F78A8 string=0x00000000001F78AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProgramTable::BoolForKey()
{
  return _ZN5Caver12ProgramTable10BoolForKeyERKSs();
}

