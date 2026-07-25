/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002404B8
 * Mangled: _ZN5Caver18TransformComponentD0Ev
 * Demangled: Caver::TransformComponent::~TransformComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000002404F0  Caver::TransformComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002404C8 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002404D4 string=0x00000000002404D8 "v"
 *   insn=0x00000000002404D8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002404E0 string=0x00000000002404E4 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TransformComponent::~TransformComponent(Caver::TransformComponent *this)
{
  Caver::Component::~Component(this);
  operator delete(this);
}

