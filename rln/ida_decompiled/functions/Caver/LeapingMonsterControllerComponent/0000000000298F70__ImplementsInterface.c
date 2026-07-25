/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298F70
 * Mangled: _ZN5Caver33LeapingMonsterControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::LeapingMonsterControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x0000000000299108  Caver::LeapingMonsterControllerComponent::Interface(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000298F70 string=0x0000000000298F74 ""
 *   insn=0x0000000000298F74 string=0x0000000000298F78 "i""
 *   insn=0x0000000000298F74 string=0x0000000000299108 "`""
 *   insn=0x0000000000298F78 string=0x0000000000298F7C ")"
 *   insn=0x0000000000298F7C string=0x0000000000298F80 "?"
 *   insn=0x0000000000298F84 string=0x0000000000298F88 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LeapingMonsterControllerComponent::ImplementsInterface(
        Caver::LeapingMonsterControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MonsterControllerComponent *this))(Caver::MonsterControllerComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::LeapingMonsterControllerComponent::Interface)
       | (unsigned int)(a2 == Caver::MonsterControllerComponent::Interface);
}

