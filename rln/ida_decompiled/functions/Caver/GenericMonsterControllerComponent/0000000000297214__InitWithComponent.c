/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000297214
 * Mangled: _ZN5Caver33GenericMonsterControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::GenericMonsterControllerComponent::InitWithComponent(Caver::GenericMonsterControllerComponent const*)
 *
 * Callers: 1
 *   0x0000000000296F64  Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(void)
 *
 * Callees: 1
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *
 * Referenced strings: 3
 *   insn=0x0000000000297224 string=0x0000000000297228 "~s"
 *   insn=0x0000000000297228 string=0x000000000029722C "h"
 *   insn=0x0000000000297228 string=0x00000000001F4020 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GenericMonsterControllerComponent::InitWithComponent(__int64 a1, __int64 a2)
{
  Caver::MonsterControllerComponent::InitWithComponent();
  *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 216);
}

