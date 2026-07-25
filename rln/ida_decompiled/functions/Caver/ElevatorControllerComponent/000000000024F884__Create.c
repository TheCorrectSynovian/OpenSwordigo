/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F884
 * Mangled: _ZN5Caver27ElevatorControllerComponent6CreateEv
 * Demangled: Caver::ElevatorControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F844  Caver::BushControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC510  Caver::ElevatorControllerComponent::ElevatorControllerComponent(void)
 *   0x000000000024F8C4  Caver::ModelTransformControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000024F890 string=0x000000000024F894 "S"
 *   insn=0x000000000024F894 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F89C string=0x00000000001FC510 "0'"
 *   insn=0x000000000024F8B4 string=0x000000000024F8B8 "~"
 *   insn=0x000000000024F8B8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ElevatorControllerComponent *__fastcall Caver::ElevatorControllerComponent::Create(
        Caver::ElevatorControllerComponent *this)
{
  Caver::ElevatorControllerComponent *v1; // x19

  v1 = (Caver::ElevatorControllerComponent *)operator new(0xD0u);
  Caver::ElevatorControllerComponent::ElevatorControllerComponent(v1);
  return v1;
}

