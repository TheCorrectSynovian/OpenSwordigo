/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C130
 * Mangled: _ZN5Caver36ProjectileMonsterControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::ProjectileMonsterControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x000000000029C1A0  Caver::ProjectileMonsterControllerComponent::className(void)
 *
 * Referenced strings: 6
 *   insn=0x000000000029C130 string=0x000000000029C134 ""
 *   insn=0x000000000029C134 string=0x000000000029C138 "I""
 *   insn=0x000000000029C134 string=0x000000000029C1F8 "@""
 *   insn=0x000000000029C138 string=0x000000000029C13C ")"
 *   insn=0x000000000029C13C string=0x000000000029C140 "?"
 *   insn=0x000000000029C144 string=0x000000000029C148 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProjectileMonsterControllerComponent::ImplementsInterface(
        Caver::ProjectileMonsterControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MonsterControllerComponent *this))(Caver::MonsterControllerComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::ProjectileMonsterControllerComponent::Interface)
       | (unsigned int)(a2 == Caver::MonsterControllerComponent::Interface);
}

