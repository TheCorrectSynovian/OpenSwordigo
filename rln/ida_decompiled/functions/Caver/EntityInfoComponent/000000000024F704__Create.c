/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F704
 * Mangled: _ZN5Caver19EntityInfoComponent6CreateEv
 * Demangled: Caver::EntityInfoComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F6C4  Caver::EntityComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8460  Caver::EntityInfoComponent::EntityInfoComponent(void)
 *   0x000000000024F744  Caver::EntityControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000024F714 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F718 string=0x000000000024F71C "Q"
 *   insn=0x000000000024F71C string=0x00000000001F8460 "0'"
 *   insn=0x000000000024F738 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024F73C string=0x000000000024F740 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::EntityInfoComponent *__fastcall Caver::EntityInfoComponent::Create(Caver::EntityInfoComponent *this)
{
  Caver::EntityInfoComponent *v1; // x19

  v1 = (Caver::EntityInfoComponent *)operator new(0x98u);
  Caver::EntityInfoComponent::EntityInfoComponent(v1);
  return v1;
}

