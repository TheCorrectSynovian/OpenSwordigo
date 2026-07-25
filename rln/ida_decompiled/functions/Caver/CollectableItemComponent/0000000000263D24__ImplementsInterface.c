/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000263D24
 * Mangled: _ZN5Caver24CollectableItemComponent19ImplementsInterfaceEl
 * Demangled: Caver::CollectableItemComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000263D6C  Caver::CollectableItemComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000263D24 string=0x0000000000263D28 ""
 *   insn=0x0000000000263D28 string=0x0000000000263D2C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::CollectableItemComponent::ImplementsInterface(
        Caver::CollectableItemComponent *this,
        _QWORD (*a2)(Caver::CollectableItemComponent *__hidden this))
{
  return a2 == Caver::CollectableItemComponent::Interface;
}

