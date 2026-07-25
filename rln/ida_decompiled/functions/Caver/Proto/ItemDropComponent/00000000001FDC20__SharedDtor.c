/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDC20
 * Mangled: ._ZN5Caver5Proto17ItemDropComponent10SharedDtorEv
 * Demangled: Caver::Proto::ItemDropComponent::SharedDtor(void)
 *
 * Callers: 1
 *   0x0000000000330140  Caver::Proto::ItemDropComponent::ItemDropComponent(Caver::Proto::ItemDropComponent const&)
 *
 * Callees: 1
 *   0x0000000000330140  Caver::Proto::ItemDropComponent::ItemDropComponent(Caver::Proto::ItemDropComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDC28 string=0x00000000001FDC2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ItemDropComponent::SharedDtor(Caver::Proto::ItemDropComponent *this)
{
  JUMPOUT(0x3304CC);
}

