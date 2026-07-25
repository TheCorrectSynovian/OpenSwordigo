/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000293A24
 * Mangled: _ZNK5Caver29BatMonsterControllerComponent5CloneEv
 * Demangled: Caver::BatMonsterControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002938EC  Caver::BatMonsterControllerComponent::~BatMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F4DC0  Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000293A84  Caver::BatMonsterControllerComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000293A38 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000293A40 string=0x00000000001F4DC0 "P'"
 *   insn=0x0000000000293A48 string=0x0000000000293A4C "u"
 *   insn=0x0000000000293A4C string=0x0000000000293A50 "h"
 *   insn=0x0000000000293A4C string=0x00000000001F4020 "P'"
 *   insn=0x0000000000293A5C string=0x0000000000293A60 "h"
 *   insn=0x0000000000293A78 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::BatMonsterControllerComponent *__fastcall Caver::BatMonsterControllerComponent::Clone(
        Caver::BatMonsterControllerComponent *this)
{
  Caver::BatMonsterControllerComponent *v2; // x20
  Caver::BatMonsterControllerComponent *result; // x0

  v2 = (Caver::BatMonsterControllerComponent *)operator new(0x108u);
  Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(v2);
  Caver::MonsterControllerComponent::InitWithComponent();
  result = v2;
  *((_DWORD *)v2 + 54) = *((_DWORD *)this + 54);
  *((_DWORD *)v2 + 60) = *((_DWORD *)this + 60);
  return result;
}

