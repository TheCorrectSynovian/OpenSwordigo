/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000297364
 * Mangled: _ZN5Caver33GenericMonsterControllerComponent7PrepareEv
 * Demangled: Caver::GenericMonsterControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FA310  Caver::SceneObject::GetComponentsWithInterface<Caver::AttackComponent>(std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>> *)
 *   0x00000000001FF140  Caver::MonsterControllerComponent::Prepare(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000297370 string=0x0000000000297374 "s"
 *   insn=0x0000000000297374 string=0x0000000000297378 "`"
 *   insn=0x0000000000297378 string=0x000000000029737C "a"
 *   insn=0x0000000000297380 string=0x0000000000297384 "h"
 *   insn=0x0000000000297380 string=0x00000000001FA310 "0'"
 *   insn=0x0000000000297384 string=0x0000000000297388 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GenericMonsterControllerComponent::Prepare(Caver::GenericMonsterControllerComponent *this)
{
  __int64 result; // x0

  Caver::MonsterControllerComponent::Prepare(this);
  result = Caver::SceneObject::GetComponentsWithInterface<Caver::AttackComponent>();
  *((_DWORD *)this + 69) = *((_DWORD *)this + 50);
  return result;
}

