/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000296E38
 * Mangled: _ZNK5Caver34ChargingMonsterControllerComponent5CloneEv
 * Demangled: Caver::ChargingMonsterControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000296B90  Caver::ChargingMonsterControllerComponent::~ChargingMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC820  Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
 *   0x0000000000201230  Caver::ChargingMonsterControllerComponent::InitWithComponent(Caver::ChargingMonsterControllerComponent const*)
 *   0x0000000000296E88  Caver::ChargingMonsterControllerComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000296E4C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000296E50 string=0x0000000000296E54 "s"
 *   insn=0x0000000000296E54 string=0x00000000001FC820 "0'"
 *   insn=0x0000000000296E78 string=0x0000000000296E7C ""
 *   insn=0x0000000000296E7C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ChargingMonsterControllerComponent *__fastcall Caver::ChargingMonsterControllerComponent::Clone(
        Caver::ChargingMonsterControllerComponent *this)
{
  Caver::ChargingMonsterControllerComponent *v1; // x19

  v1 = (Caver::ChargingMonsterControllerComponent *)operator new(0x158u);
  Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(v1);
  Caver::ChargingMonsterControllerComponent::InitWithComponent();
  return v1;
}

