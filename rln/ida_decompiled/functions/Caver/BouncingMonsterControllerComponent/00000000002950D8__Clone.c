/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002950D8
 * Mangled: _ZNK5Caver34BouncingMonsterControllerComponent5CloneEv
 * Demangled: Caver::BouncingMonsterControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000294F4C  Caver::BouncingMonsterControllerComponent::~BouncingMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FFB60  Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(void)
 *   0x0000000000295140  Caver::BouncingMonsterControllerComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000002950E8 string=0x00000000002950EC "="
 *   insn=0x00000000002950EC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000295100 string=0x0000000000295104 "h"
 *   insn=0x0000000000295100 string=0x00000000001F4020 "P'"
 *   insn=0x0000000000295110 string=0x0000000000295114 "h"
 *   insn=0x0000000000295118 string=0x000000000029511C "h"
 *   insn=0x0000000000295130 string=0x0000000000295134 "_"
 *   insn=0x0000000000295134 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BouncingMonsterControllerComponent::Clone(Caver::BouncingMonsterControllerComponent *this)
{
  __int64 v2; // x20
  __int64 result; // x0

  v2 = operator new(0x120u);
  Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent((Caver::BouncingMonsterControllerComponent *)v2);
  Caver::MonsterControllerComponent::InitWithComponent();
  result = v2;
  *(_DWORD *)(v2 + 216) = *((_DWORD *)this + 54);
  *(_DWORD *)(v2 + 240) = *((_DWORD *)this + 60);
  *(_QWORD *)(v2 + 264) = *((_QWORD *)this + 33);
  return result;
}

