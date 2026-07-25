/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250638
 * Mangled: _ZN5Caver27RotatingBackgroundComponent6CreateEv
 * Demangled: Caver::RotatingBackgroundComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002505F8  Caver::DoorControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB200  Caver::RotatingBackgroundComponent::RotatingBackgroundComponent(void)
 *   0x0000000000250678  Caver::CollectableItemComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000250648 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250650 string=0x00000000001FB200 "0'"
 *   insn=0x000000000025066C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::RotatingBackgroundComponent *__fastcall Caver::RotatingBackgroundComponent::Create(
        Caver::RotatingBackgroundComponent *this)
{
  Caver::RotatingBackgroundComponent *v1; // x19

  v1 = (Caver::RotatingBackgroundComponent *)operator new(0x98u);
  Caver::RotatingBackgroundComponent::RotatingBackgroundComponent(v1);
  return v1;
}

