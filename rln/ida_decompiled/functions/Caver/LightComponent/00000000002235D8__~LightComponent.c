/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002235D8
 * Mangled: _ZN5Caver14LightComponentD0Ev
 * Demangled: Caver::LightComponent::~LightComponent()
 *
 * Callers: 1
 *   0x00000000002231BC  sub_2231BC
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x0000000000223610  Caver::LightComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002235E8 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002235F4 string=0x00000000002235F8 ".O"
 *   insn=0x00000000002235F8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000223600 string=0x0000000000223604 "+O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LightComponent::~LightComponent(Caver::LightComponent *this)
{
  Caver::Component::~Component(this);
  operator delete(this);
}

