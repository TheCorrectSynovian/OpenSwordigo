/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250578
 * Mangled: _ZN5Caver18TouchableComponent6CreateEv
 * Demangled: Caver::TouchableComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250538  Caver::SpawnPointComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8AA0  Caver::TouchableComponent::TouchableComponent(void)
 *   0x00000000002505B8  Caver::PressureTriggerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000250588 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025058C string=0x0000000000250590 "D"
 *   insn=0x0000000000250590 string=0x00000000001F8AA0 "0'"
 *   insn=0x00000000002505A8 string=0x00000000002505AC "A"
 *   insn=0x00000000002505AC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::TouchableComponent *__fastcall Caver::TouchableComponent::Create(Caver::TouchableComponent *this)
{
  Caver::TouchableComponent *v1; // x19

  v1 = (Caver::TouchableComponent *)operator new(0xA8u);
  Caver::TouchableComponent::TouchableComponent(v1);
  return v1;
}

