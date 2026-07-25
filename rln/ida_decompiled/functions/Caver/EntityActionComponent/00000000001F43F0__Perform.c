/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F43F0
 * Mangled: ._ZN5Caver21EntityActionComponent7PerformEv
 * Demangled: Caver::EntityActionComponent::Perform(void)
 *
 * Callers: 2
 *   0x000000000026CD38  Caver::EntityControllerComponent::PerformAction(boost::intrusive_ptr<Caver::EntityActionComponent> const&)
 *   0x000000000026D47C  sub_26D47C
 *
 * Callees: 1
 *   0x0000000000267774  Caver::EntityActionComponent::Perform(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F43F8 string=0x00000000001F43FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityActionComponent::Perform(Caver::EntityActionComponent *this)
{
  return _ZN5Caver21EntityActionComponent7PerformEv(this);
}

