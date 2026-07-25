/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000267B40
 * Mangled: _ZN5Caver21EntityActionComponent19ImplementsInterfaceEl
 * Demangled: Caver::EntityActionComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000267B88  Caver::EntityActionComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000267B40 string=0x0000000000267B44 ""
 *   insn=0x0000000000267B44 string=0x0000000000267B48 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::EntityActionComponent::ImplementsInterface(
        Caver::EntityActionComponent *this,
        _QWORD (*a2)(Caver::EntityActionComponent *__hidden this))
{
  return a2 == Caver::EntityActionComponent::Interface;
}

