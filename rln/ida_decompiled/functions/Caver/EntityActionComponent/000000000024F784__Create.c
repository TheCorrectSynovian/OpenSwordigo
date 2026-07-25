/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F784
 * Mangled: _ZN5Caver21EntityActionComponent6CreateEv
 * Demangled: Caver::EntityActionComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F744  Caver::EntityControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F3570  Caver::EntityActionComponent::EntityActionComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000024F7C4  Caver::CharControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000024F794 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F798 string=0x000000000024F79C "u"
 *   insn=0x000000000024F79C string=0x00000000001F3570 "P'"
 *   insn=0x000000000024F7B8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024F7BC string=0x000000000024F7C0 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::EntityActionComponent *__fastcall Caver::EntityActionComponent::Create(Caver::EntityActionComponent *this)
{
  Caver::EntityActionComponent *v1; // x19

  v1 = (Caver::EntityActionComponent *)operator new(0xB0u);
  Caver::EntityActionComponent::EntityActionComponent(v1);
  return v1;
}

