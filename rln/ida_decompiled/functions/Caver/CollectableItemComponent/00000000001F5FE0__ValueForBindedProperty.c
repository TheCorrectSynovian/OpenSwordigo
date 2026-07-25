/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5FE0
 * Mangled: ._ZN5Caver24CollectableItemComponent22ValueForBindedPropertyEi
 * Demangled: Caver::CollectableItemComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000262B48  `non-virtual thunk to'Caver::CollectableItemComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000262AE8  Caver::CollectableItemComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F5FE4 string=0x0000000000262AE8 "?"
 *   insn=0x00000000001F5FE8 string=0x00000000001F5FEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollectableItemComponent::ValueForBindedProperty(
        Caver::CollectableItemComponent *this,
        int a2)
{
  return _ZN5Caver24CollectableItemComponent22ValueForBindedPropertyEi(this, a2);
}

