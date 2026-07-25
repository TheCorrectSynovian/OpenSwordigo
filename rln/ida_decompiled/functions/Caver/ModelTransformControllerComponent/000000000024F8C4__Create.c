/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F8C4
 * Mangled: _ZN5Caver33ModelTransformControllerComponent6CreateEv
 * Demangled: Caver::ModelTransformControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F884  Caver::ElevatorControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCC00  Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(void)
 *   0x000000000024F904  Caver::PropertiesComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000024F8D0 string=0x000000000024F8D4 "C"
 *   insn=0x000000000024F8D4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F8DC string=0x00000000001FCC00 "0'"
 *   insn=0x000000000024F8F4 string=0x000000000024F8F8 "n"
 *   insn=0x000000000024F8F8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ModelTransformControllerComponent *__fastcall Caver::ModelTransformControllerComponent::Create(
        Caver::ModelTransformControllerComponent *this)
{
  Caver::ModelTransformControllerComponent *v1; // x19

  v1 = (Caver::ModelTransformControllerComponent *)operator new(0xB0u);
  Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(v1);
  return v1;
}

