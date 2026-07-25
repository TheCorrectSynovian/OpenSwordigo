/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201660
 * Mangled: ._ZN5Caver34SnappingMonsterControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::SnappingMonsterControllerComponent::InitWithComponent(Caver::SnappingMonsterControllerComponent const*)
 *
 * Callers: 1
 *   0x000000000029FEE0  Caver::SnappingMonsterControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000029EB20  Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201668 string=0x000000000020166C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SnappingMonsterControllerComponent::InitWithComponent(
        Caver::SnappingMonsterControllerComponent *this,
        const Caver::SnappingMonsterControllerComponent *a2)
{
  JUMPOUT(0x29F0EC);
}

