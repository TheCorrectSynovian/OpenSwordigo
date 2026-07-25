/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002505F8
 * Mangled: _ZN5Caver23DoorControllerComponent6CreateEv
 * Demangled: Caver::DoorControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002505B8  Caver::PressureTriggerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC300  Caver::DoorControllerComponent::DoorControllerComponent(void)
 *   0x0000000000250638  Caver::RotatingBackgroundComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000250608 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025060C string=0x0000000000250610 "<"
 *   insn=0x0000000000250610 string=0x00000000001FC300 "0'"
 *   insn=0x0000000000250628 string=0x000000000025062C "!"
 *   insn=0x000000000025062C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::DoorControllerComponent *__fastcall Caver::DoorControllerComponent::Create(Caver::DoorControllerComponent *this)
{
  Caver::DoorControllerComponent *v1; // x19

  v1 = (Caver::DoorControllerComponent *)operator new(0xD8u);
  Caver::DoorControllerComponent::DoorControllerComponent(v1);
  return v1;
}

