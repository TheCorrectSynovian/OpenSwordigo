/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5490
 * Mangled: ._ZN5Caver21EntityActionComponent17InitWithComponentEPKS0_
 * Demangled: Caver::EntityActionComponent::InitWithComponent(Caver::EntityActionComponent const*)
 *
 * Callers: 1
 *   0x0000000000267908  Caver::EntityActionComponent::~EntityActionComponent()
 *
 * Callees: 1
 *   0x0000000000266F14  Caver::EntityActionComponent::InitWithComponent(Caver::EntityActionComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5498 string=0x00000000001F549C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityActionComponent::InitWithComponent(
        Caver::EntityActionComponent *this,
        const Caver::EntityActionComponent *a2)
{
  return _ZN5Caver21EntityActionComponent17InitWithComponentEPKS0_(this, a2);
}

