/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000293A8C
 * Mangled: _ZN5Caver29BatMonsterControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::BatMonsterControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000293D9C  Caver::BatMonsterControllerComponent::Interface(void)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000293A8C string=0x0000000000293A90 "eC"
 *   insn=0x0000000000293A94 string=0x0000000000293A98 ")"
 *   insn=0x0000000000293A98 string=0x0000000000293A9C "?"
 *   insn=0x0000000000293AA0 string=0x0000000000293AA4 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BatMonsterControllerComponent::ImplementsInterface(
        Caver::BatMonsterControllerComponent *this,
        __int64 (__fastcall *a2)(Caver::MonsterControllerComponent *__hidden this))
{
  return (a2 == Caver::BatMonsterControllerComponent::Interface)
       | (unsigned int)(a2 == Caver::MonsterControllerComponent::Interface);
}

