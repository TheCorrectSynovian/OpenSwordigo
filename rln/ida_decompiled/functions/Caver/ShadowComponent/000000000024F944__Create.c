/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F944
 * Mangled: _ZN5Caver15ShadowComponent6CreateEv
 * Demangled: Caver::ShadowComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F904  Caver::PropertiesComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F82C0  Caver::ShadowComponent::ShadowComponent(void)
 *   0x000000000024F984  Caver::ObjectLinkControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000024F950 string=0x000000000024F954 "#"
 *   insn=0x000000000024F954 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F958 string=0x000000000024F95C "Y"
 *   insn=0x000000000024F95C string=0x00000000001F82C0 "0'"
 *   insn=0x000000000024F974 string=0x000000000024F978 "N"
 *   insn=0x000000000024F978 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ShadowComponent *__fastcall Caver::ShadowComponent::Create(Caver::ShadowComponent *this)
{
  Caver::ShadowComponent *v1; // x19

  v1 = (Caver::ShadowComponent *)operator new(0xE0u);
  Caver::ShadowComponent::ShadowComponent(v1);
  return v1;
}

