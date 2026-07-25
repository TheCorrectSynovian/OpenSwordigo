/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000296E90
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::ChargingMonsterControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x0000000000296F00  Caver::ChargingMonsterControllerComponent::className(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000296E90 string=0x0000000000296E94 "uF"
 *   insn=0x0000000000296E94 string=0x0000000000296F58 "`""
 *   insn=0x0000000000296E98 string=0x0000000000296E9C ")"
 *   insn=0x0000000000296E9C string=0x0000000000296EA0 "?"
 *   insn=0x0000000000296EA4 string=0x0000000000296EA8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ChargingMonsterControllerComponent::ImplementsInterface(
        Caver::ChargingMonsterControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MonsterControllerComponent *this))(Caver::MonsterControllerComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::ChargingMonsterControllerComponent::Interface)
       | (unsigned int)(a2 == Caver::MonsterControllerComponent::Interface);
}

