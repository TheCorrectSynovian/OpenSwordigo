/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F77A0
 * Mangled: ._ZN5Caver17ItemDropComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ItemDropComponent::InitWithComponent(Caver::ItemDropComponent const*)
 *
 * Callers: 1
 *   0x000000000027A36C  Caver::ItemDropComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000275AE4  Caver::ItemDropComponent::InitWithComponent(Caver::ItemDropComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F77A8 string=0x00000000001F77AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemDropComponent::InitWithComponent(
        Caver::ItemDropComponent *this,
        const Caver::ItemDropComponent *a2)
{
  return _ZN5Caver17ItemDropComponent17InitWithComponentEPKS0_(this, a2);
}

