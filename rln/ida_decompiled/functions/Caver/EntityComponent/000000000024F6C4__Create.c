/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F6C4
 * Mangled: _ZN5Caver15EntityComponent6CreateEv
 * Demangled: Caver::EntityComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F684  Caver::WaterMeshComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FACA0  Caver::EntityComponent::EntityComponent(void)
 *   0x000000000024F704  Caver::EntityInfoComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000024F6D4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F6D8 string=0x000000000024F6DC "q"
 *   insn=0x000000000024F6DC string=0x00000000001FACA0 "0'"
 *   insn=0x000000000024F6F8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024F6FC string=0x000000000024F700 "q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::EntityComponent *__fastcall Caver::EntityComponent::Create(Caver::EntityComponent *this)
{
  Caver::EntityComponent *v1; // x19

  v1 = (Caver::EntityComponent *)operator new(0x130u);
  Caver::EntityComponent::EntityComponent(v1);
  return v1;
}

