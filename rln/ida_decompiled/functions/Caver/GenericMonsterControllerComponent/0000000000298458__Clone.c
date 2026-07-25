/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298458
 * Mangled: _ZNK5Caver33GenericMonsterControllerComponent5CloneEv
 * Demangled: Caver::GenericMonsterControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000298420  Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8250  Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(void)
 *   0x00000000002984B0  Caver::GenericMonsterControllerComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000298468 string=0x000000000029846C "]t"
 *   insn=0x000000000029846C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000298470 string=0x0000000000298474 "w"
 *   insn=0x0000000000298474 string=0x00000000001F8250 "0'"
 *   insn=0x0000000000298480 string=0x0000000000298484 "h"
 *   insn=0x0000000000298480 string=0x00000000001F4020 "P'"
 *   insn=0x00000000002984A4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GenericMonsterControllerComponent *__fastcall Caver::GenericMonsterControllerComponent::Clone(
        Caver::GenericMonsterControllerComponent *this)
{
  Caver::GenericMonsterControllerComponent *v2; // x20
  Caver::GenericMonsterControllerComponent *result; // x0

  v2 = (Caver::GenericMonsterControllerComponent *)operator new(0x120u);
  Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(v2);
  Caver::MonsterControllerComponent::InitWithComponent();
  result = v2;
  *((_DWORD *)v2 + 54) = *((_DWORD *)this + 54);
  return result;
}

