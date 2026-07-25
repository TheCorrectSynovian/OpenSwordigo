/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000299BF8
 * Mangled: _ZN5Caver26MonsterControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::MonsterControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000299BF8 string=0x0000000000299BFC ""
 *   insn=0x0000000000299BFC string=0x0000000000299C00 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::MonsterControllerComponent::ImplementsInterface(
        Caver::MonsterControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MonsterControllerComponent *this))(Caver::MonsterControllerComponent *__hidden this))
{
  return a2 == Caver::MonsterControllerComponent::Interface;
}

