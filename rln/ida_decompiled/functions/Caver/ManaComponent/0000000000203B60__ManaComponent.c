/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203B60
 * Mangled: ._ZN5Caver13ManaComponentC2Ev
 * Demangled: Caver::ManaComponent::ManaComponent(void)
 *
 * Callers: 1
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *
 * Callees: 1
 *   0x000000000027AB7C  Caver::ManaComponent::ManaComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203B68 string=0x0000000000203B6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ManaComponent::ManaComponent(Caver::ManaComponent *this)
{
  return _ZN5Caver13ManaComponentC2Ev(this);
}

