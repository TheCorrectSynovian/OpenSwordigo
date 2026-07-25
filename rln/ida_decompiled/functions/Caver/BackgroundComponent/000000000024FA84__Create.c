/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FA84
 * Mangled: _ZN5Caver19BackgroundComponent6CreateEv
 * Demangled: Caver::BackgroundComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FA44  Caver::CharAnimControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5C40  Caver::BackgroundComponent::BackgroundComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000024FAC4  Caver::TextureMappingComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000024FA94 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FA98 string=0x000000000024FA9C "i"
 *   insn=0x000000000024FA9C string=0x00000000001F5C40 "P'"
 *   insn=0x000000000024FAB8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::BackgroundComponent *__fastcall Caver::BackgroundComponent::Create(Caver::BackgroundComponent *this)
{
  Caver::BackgroundComponent *v1; // x19

  v1 = (Caver::BackgroundComponent *)operator new(0x90u);
  Caver::BackgroundComponent::BackgroundComponent(v1);
  return v1;
}

