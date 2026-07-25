/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FAC4
 * Mangled: _ZN5Caver23TextureMappingComponent6CreateEv
 * Demangled: Caver::TextureMappingComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FA84  Caver::BackgroundComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC3A0  Caver::TextureMappingComponent::TextureMappingComponent(void)
 *   0x000000000024FB04  Caver::UtilityShapeComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000024FAD4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FAD8 string=0x000000000024FADC "1"
 *   insn=0x000000000024FADC string=0x00000000001FC3A0 "0'"
 *   insn=0x000000000024FAF8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024FAFC string=0x000000000024FB00 "q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::TextureMappingComponent *__fastcall Caver::TextureMappingComponent::Create(Caver::TextureMappingComponent *this)
{
  Caver::TextureMappingComponent *v1; // x19

  v1 = (Caver::TextureMappingComponent *)operator new(0x90u);
  Caver::TextureMappingComponent::TextureMappingComponent(v1);
  return v1;
}

