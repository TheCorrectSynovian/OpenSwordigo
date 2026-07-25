/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A0F10
 * Mangled: _ZN5Caver32StaticMonsterControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::StaticMonsterControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x00000000002A0F80  Caver::StaticMonsterControllerComponent::className(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002A0F10 string=0x00000000002A0F14 ""
 *   insn=0x00000000002A0F14 string=0x00000000002A0F18 ")""
 *   insn=0x00000000002A0F14 string=0x00000000002A0FD8 " ""
 *   insn=0x00000000002A0F18 string=0x00000000002A0F1C ")"
 *   insn=0x00000000002A0F1C string=0x00000000002A0F20 "?"
 *   insn=0x00000000002A0F24 string=0x00000000002A0F28 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StaticMonsterControllerComponent::ImplementsInterface(
        Caver::StaticMonsterControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MonsterControllerComponent *this))(Caver::MonsterControllerComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::StaticMonsterControllerComponent::Interface)
       | (unsigned int)(a2 == Caver::MonsterControllerComponent::Interface);
}

