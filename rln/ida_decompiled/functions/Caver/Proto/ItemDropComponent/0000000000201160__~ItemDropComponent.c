/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201160
 * Mangled: ._ZN5Caver5Proto17ItemDropComponentD2Ev
 * Demangled: Caver::Proto::ItemDropComponent::~ItemDropComponent()
 *
 * Callers: 1
 *   0x0000000000330610  Caver::Proto::ItemDropComponent::~ItemDropComponent()
 *
 * Callees: 1
 *   0x0000000000330140  Caver::Proto::ItemDropComponent::ItemDropComponent(Caver::Proto::ItemDropComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201168 string=0x000000000020116C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ItemDropComponent::~ItemDropComponent(Caver::Proto::ItemDropComponent *this)
{
  JUMPOUT(0x3303C4);
}

