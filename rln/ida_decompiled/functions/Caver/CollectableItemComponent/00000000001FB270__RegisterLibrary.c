/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB270
 * Mangled: ._ZN5Caver24CollectableItemComponent15RegisterLibraryEv
 * Demangled: Caver::CollectableItemComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x0000000000262E78  Caver::CollectableItemComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000262EE4  Caver::CollectableItemComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB278 string=0x00000000001FB27C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollectableItemComponent::RegisterLibrary(Caver::CollectableItemComponent *this)
{
  return _ZN5Caver24CollectableItemComponent15RegisterLibraryEv(this);
}

