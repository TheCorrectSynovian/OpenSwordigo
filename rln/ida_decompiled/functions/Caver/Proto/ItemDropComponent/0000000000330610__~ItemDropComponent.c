/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330610
 * Mangled: _ZN5Caver5Proto17ItemDropComponentD0Ev
 * Demangled: Caver::Proto::ItemDropComponent::~ItemDropComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201160  Caver::Proto::ItemDropComponent::~ItemDropComponent()
 *   0x0000000000330648  Caver::Proto::ItemDropComponent::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x000000000033062C string=0x0000000000330630 " "
 *   insn=0x0000000000330630 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ItemDropComponent::~ItemDropComponent(Caver::Proto::ItemDropComponent *this)
{
  Caver::Proto::ItemDropComponent::~ItemDropComponent(this);
  operator delete(this);
}

