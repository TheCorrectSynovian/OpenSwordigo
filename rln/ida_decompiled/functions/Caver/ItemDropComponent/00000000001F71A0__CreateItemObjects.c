/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F71A0
 * Mangled: ._ZN5Caver17ItemDropComponent17CreateItemObjectsEv
 * Demangled: Caver::ItemDropComponent::CreateItemObjects(void)
 *
 * Callers: 2
 *   0x000000000027845C  Caver::ItemDropComponent::Trigger(void)
 *   0x0000000000279D28  sub_279D28
 *
 * Callees: 1
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F71A8 string=0x00000000001F71AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemDropComponent::CreateItemObjects(Caver::ItemDropComponent *this)
{
  return _ZN5Caver17ItemDropComponent17CreateItemObjectsEv(this);
}

