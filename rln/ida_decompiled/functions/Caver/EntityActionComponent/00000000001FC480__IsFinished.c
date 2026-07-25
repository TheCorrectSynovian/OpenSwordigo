/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC480
 * Mangled: ._ZN5Caver21EntityActionComponent10IsFinishedEv
 * Demangled: Caver::EntityActionComponent::IsFinished(void)
 *
 * Callers: 1
 *   0x000000000026C0F0  Caver::EntityControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000267774  Caver::EntityActionComponent::Perform(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FC484 string=0x00000000002678F8 "L@"
 *   insn=0x00000000001FC488 string=0x00000000001FC48C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::EntityActionComponent::IsFinished(Caver::EntityActionComponent *this)
{
  JUMPOUT(0x2678F8);
}

