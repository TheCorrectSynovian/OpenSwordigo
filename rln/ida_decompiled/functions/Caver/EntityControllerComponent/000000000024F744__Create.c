/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F744
 * Mangled: _ZN5Caver25EntityControllerComponent6CreateEv
 * Demangled: Caver::EntityControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F704  Caver::EntityInfoComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5FD0  Caver::EntityControllerComponent::EntityControllerComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000024F784  Caver::EntityActionComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000024F754 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F75C string=0x00000000001F5FD0 "P'"
 *   insn=0x000000000024F778 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024F77C string=0x000000000024F780 "Q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::EntityControllerComponent *__fastcall Caver::EntityControllerComponent::Create(
        Caver::EntityControllerComponent *this)
{
  Caver::EntityControllerComponent *v1; // x19

  v1 = (Caver::EntityControllerComponent *)operator new(0x150u);
  Caver::EntityControllerComponent::EntityControllerComponent(v1);
  return v1;
}

