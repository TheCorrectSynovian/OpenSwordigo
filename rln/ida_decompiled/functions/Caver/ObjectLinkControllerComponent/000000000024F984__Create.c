/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F984
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent6CreateEv
 * Demangled: Caver::ObjectLinkControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F944  Caver::ShadowComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F42B0  Caver::ObjectLinkControllerComponent::ObjectLinkControllerComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000024F9C4  Caver::TransformComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000024F994 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F998 string=0x000000000024F99C "E"
 *   insn=0x000000000024F99C string=0x00000000001F42B0 "P'"
 *   insn=0x000000000024F9B4 string=0x000000000024F9B8 ">"
 *   insn=0x000000000024F9B8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ObjectLinkControllerComponent *__fastcall Caver::ObjectLinkControllerComponent::Create(
        Caver::ObjectLinkControllerComponent *this)
{
  Caver::ObjectLinkControllerComponent *v1; // x19

  v1 = (Caver::ObjectLinkControllerComponent *)operator new(0x128u);
  Caver::ObjectLinkControllerComponent::ObjectLinkControllerComponent(v1);
  return v1;
}

