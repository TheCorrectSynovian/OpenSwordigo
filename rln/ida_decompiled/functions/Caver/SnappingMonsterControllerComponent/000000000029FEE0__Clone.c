/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029FEE0
 * Mangled: _ZNK5Caver34SnappingMonsterControllerComponent5CloneEv
 * Demangled: Caver::SnappingMonsterControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000029FC64  Caver::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F72F0  Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *   0x0000000000201660  Caver::SnappingMonsterControllerComponent::InitWithComponent(Caver::SnappingMonsterControllerComponent const*)
 *   0x000000000029FF30  Caver::SnappingMonsterControllerComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000029FEF4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000029FEFC string=0x00000000001F72F0 "0'"
 *   insn=0x000000000029FF24 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000029FF28 string=0x000000000029FF2C "f"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SnappingMonsterControllerComponent *__fastcall Caver::SnappingMonsterControllerComponent::Clone(
        Caver::SnappingMonsterControllerComponent *this)
{
  Caver::SnappingMonsterControllerComponent *v2; // x19

  v2 = (Caver::SnappingMonsterControllerComponent *)operator new(0x150u);
  Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(v2);
  Caver::SnappingMonsterControllerComponent::InitWithComponent(v2, this);
  return v2;
}

