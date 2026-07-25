/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029D598
 * Mangled: _ZN5Caver34ShootingMonsterControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::ShootingMonsterControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x000000000029D608  Caver::ShootingMonsterControllerComponent::className(void)
 *
 * Referenced strings: 6
 *   insn=0x000000000029D598 string=0x000000000029D59C "UF"
 *   insn=0x000000000029D59C string=0x000000000029D5A0 "I""
 *   insn=0x000000000029D59C string=0x000000000029D660 "@""
 *   insn=0x000000000029D5A0 string=0x000000000029D5A4 ")"
 *   insn=0x000000000029D5A4 string=0x000000000029D5A8 "?"
 *   insn=0x000000000029D5AC string=0x000000000029D5B0 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShootingMonsterControllerComponent::ImplementsInterface(
        Caver::ShootingMonsterControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MonsterControllerComponent *this))(Caver::MonsterControllerComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::ShootingMonsterControllerComponent::Interface)
       | (unsigned int)(a2 == Caver::MonsterControllerComponent::Interface);
}

