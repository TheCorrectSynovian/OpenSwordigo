/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002984B8
 * Mangled: _ZN5Caver33GenericMonsterControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::GenericMonsterControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x0000000000298528  Caver::GenericMonsterControllerComponent::className(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002984B8 string=0x00000000002984BC ""
 *   insn=0x00000000002984BC string=0x00000000002984C0 "i""
 *   insn=0x00000000002984BC string=0x0000000000298580 "`""
 *   insn=0x00000000002984C0 string=0x00000000002984C4 ")"
 *   insn=0x00000000002984C4 string=0x00000000002984C8 "?"
 *   insn=0x00000000002984CC string=0x00000000002984D0 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GenericMonsterControllerComponent::ImplementsInterface(
        Caver::GenericMonsterControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MonsterControllerComponent *this))(Caver::MonsterControllerComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::GenericMonsterControllerComponent::Interface)
       | (unsigned int)(a2 == Caver::MonsterControllerComponent::Interface);
}

