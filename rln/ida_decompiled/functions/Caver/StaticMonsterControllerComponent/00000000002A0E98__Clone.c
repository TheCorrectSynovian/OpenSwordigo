/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A0E98
 * Mangled: _ZNK5Caver32StaticMonsterControllerComponent5CloneEv
 * Demangled: Caver::StaticMonsterControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002A0CD0  Caver::StaticMonsterControllerComponent::~StaticMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCDB0  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *   0x00000000002A0F08  Caver::StaticMonsterControllerComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000002A0EAC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002A0EB4 string=0x00000000001FCDB0 "0'"
 *   insn=0x00000000002A0EBC string=0x00000000002A0EC0 "XL"
 *   insn=0x00000000002A0EC0 string=0x00000000002A0EC4 "h"
 *   insn=0x00000000002A0EC0 string=0x00000000001F4020 "P'"
 *   insn=0x00000000002A0ED0 string=0x00000000002A0ED4 "h"
 *   insn=0x00000000002A0ED8 string=0x00000000002A0EDC "h"
 *   insn=0x00000000002A0EE0 string=0x00000000002A0EE4 "h\nA"
 *   insn=0x00000000002A0EFC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002A0F00 string=0x00000000002A0F04 "p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::StaticMonsterControllerComponent *__fastcall Caver::StaticMonsterControllerComponent::Clone(
        Caver::StaticMonsterControllerComponent *this)
{
  Caver::StaticMonsterControllerComponent *v2; // x20
  Caver::StaticMonsterControllerComponent *result; // x0

  v2 = (Caver::StaticMonsterControllerComponent *)operator new(0x120u);
  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(v2);
  Caver::MonsterControllerComponent::InitWithComponent();
  result = v2;
  *((_DWORD *)v2 + 54) = *((_DWORD *)this + 54);
  *((_DWORD *)v2 + 70) = *((_DWORD *)this + 70);
  *((_DWORD *)v2 + 60) = *((_DWORD *)this + 60);
  *((_DWORD *)v2 + 66) = *((_DWORD *)this + 66);
  return result;
}

