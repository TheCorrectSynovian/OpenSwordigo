/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029B650
 * Mangled: _ZNK5Caver31MonsterDeathControllerComponent5CloneEv
 * Demangled: Caver::MonsterDeathControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000029B528  Caver::MonsterDeathControllerComponent::~MonsterDeathControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F49F0  Caver::MonsterDeathControllerComponent::MonsterDeathControllerComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000029B6B0  Caver::MonsterDeathControllerComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000029B664 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000029B66C string=0x000000000029B670 "h"@"
 *   insn=0x000000000029B66C string=0x00000000001F49F0 "P'"
 *   insn=0x000000000029B670 string=0x000000000029B674 "a"
 *   insn=0x000000000029B67C string=0x000000000029B680 "\n<"
 *   insn=0x000000000029B680 string=0x000000000029B684 "hz@"
 *   insn=0x000000000029B6A4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MonsterDeathControllerComponent *__fastcall Caver::MonsterDeathControllerComponent::Clone(
        Caver::MonsterDeathControllerComponent *this)
{
  Caver::MonsterDeathControllerComponent *v2; // x20
  Caver::MonsterDeathControllerComponent *result; // x0

  v2 = (Caver::MonsterDeathControllerComponent *)operator new(0xC8u);
  Caver::MonsterDeathControllerComponent::MonsterDeathControllerComponent(v2);
  *((_DWORD *)v2 + 8) = *((_DWORD *)this + 8);
  sub_56A6A8((char *)v2 + 56);
  result = v2;
  *((_DWORD *)v2 + 30) = *((_DWORD *)this + 30);
  return result;
}

