/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023CBE8
 * Mangled: _ZN5Caver15SpriteComponent19ImplementsInterfaceEl
 * Demangled: Caver::SpriteComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000023CC4C  Caver::SpriteComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000023CBE8 string=0x000000000023CBEC ""
 *   insn=0x000000000023CBEC string=0x000000000023CBF0 "?"
 *   insn=0x000000000023CBEC string=0x000000000023CCA4 "@%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::SpriteComponent::ImplementsInterface(
        Caver::SpriteComponent *this,
        _QWORD (*a2)(Caver::SpriteComponent *__hidden this))
{
  return a2 == Caver::SpriteComponent::Interface;
}

