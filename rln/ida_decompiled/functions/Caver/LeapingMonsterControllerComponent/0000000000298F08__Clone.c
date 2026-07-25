/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298F08
 * Mangled: _ZNK5Caver33LeapingMonsterControllerComponent5CloneEv
 * Demangled: Caver::LeapingMonsterControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000298DD0  Caver::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FE370  Caver::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent(void)
 *   0x0000000000298F68  Caver::LeapingMonsterControllerComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000298F1C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000298F2C string=0x0000000000298F30 "<l"
 *   insn=0x0000000000298F30 string=0x0000000000298F34 "h"
 *   insn=0x0000000000298F30 string=0x00000000001F4020 "P'"
 *   insn=0x0000000000298F40 string=0x0000000000298F44 "h"
 *   insn=0x0000000000298F5C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000298F60 string=0x0000000000298F64 "X"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::LeapingMonsterControllerComponent *__fastcall Caver::LeapingMonsterControllerComponent::Clone(
        Caver::LeapingMonsterControllerComponent *this)
{
  Caver::LeapingMonsterControllerComponent *v2; // x20
  Caver::LeapingMonsterControllerComponent *result; // x0

  v2 = (Caver::LeapingMonsterControllerComponent *)operator new(0x118u);
  Caver::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent(v2);
  Caver::MonsterControllerComponent::InitWithComponent();
  result = v2;
  *((_DWORD *)v2 + 54) = *((_DWORD *)this + 54);
  *((_DWORD *)v2 + 60) = *((_DWORD *)this + 60);
  return result;
}

