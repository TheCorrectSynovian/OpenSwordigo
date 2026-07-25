/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F904
 * Mangled: _ZN5Caver19PropertiesComponent6CreateEv
 * Demangled: Caver::PropertiesComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F8C4  Caver::ModelTransformControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F4F40  Caver::PropertiesComponent::PropertiesComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000024F944  Caver::ShadowComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000024F910 string=0x000000000024F914 "3"
 *   insn=0x000000000024F914 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F91C string=0x00000000001F4F40 "P'"
 *   insn=0x000000000024F934 string=0x000000000024F938 "^"
 *   insn=0x000000000024F938 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::PropertiesComponent *__fastcall Caver::PropertiesComponent::Create(Caver::PropertiesComponent *this)
{
  Caver::PropertiesComponent *v1; // x19

  v1 = (Caver::PropertiesComponent *)operator new(0xD0u);
  Caver::PropertiesComponent::PropertiesComponent(v1);
  return v1;
}

