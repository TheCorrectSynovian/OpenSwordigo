/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000262B48
 * Mangled: _ZThn16_N5Caver24CollectableItemComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::CollectableItemComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5FE0  Caver::CollectableItemComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000262B48 string=0x0000000000262B4C "%M"
 *   insn=0x0000000000262B4C string=0x00000000001F5FE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::CollectableItemComponent::ValueForBindedProperty(
        Caver::CollectableItemComponent *this,
        int a2)
{
  return Caver::CollectableItemComponent::ValueForBindedProperty(
           (Caver::CollectableItemComponent *)((char *)this - 16),
           a2);
}

