/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029E908
 * Mangled: _ZNK5Caver32SkellyMonsterControllerComponent5CloneEv
 * Demangled: Caver::SkellyMonsterControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000029E71C  Caver::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FFE00  Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(void)
 *   0x000000000029E968  Caver::SkellyMonsterControllerComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x000000000029E918 string=0x000000000029E91C "1["
 *   insn=0x000000000029E91C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000029E920 string=0x000000000029E924 "7"
 *   insn=0x000000000029E930 string=0x000000000029E934 "h"
 *   insn=0x000000000029E930 string=0x00000000001F4020 "P'"
 *   insn=0x000000000029E940 string=0x000000000029E944 "h"
 *   insn=0x000000000029E958 string=0x000000000029E95C "Ub"
 *   insn=0x000000000029E95C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SkellyMonsterControllerComponent *__fastcall Caver::SkellyMonsterControllerComponent::Clone(
        Caver::SkellyMonsterControllerComponent *this)
{
  Caver::SkellyMonsterControllerComponent *v2; // x20
  Caver::SkellyMonsterControllerComponent *result; // x0

  v2 = (Caver::SkellyMonsterControllerComponent *)operator new(0x128u);
  Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(v2);
  Caver::MonsterControllerComponent::InitWithComponent();
  result = v2;
  *((_DWORD *)v2 + 54) = *((_DWORD *)this + 54);
  *((_DWORD *)v2 + 60) = *((_DWORD *)this + 60);
  return result;
}

