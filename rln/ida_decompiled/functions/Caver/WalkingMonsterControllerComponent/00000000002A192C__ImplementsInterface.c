/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A192C
 * Mangled: _ZN5Caver33WalkingMonsterControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::WalkingMonsterControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x00000000002A199C  Caver::WalkingMonsterControllerComponent::className(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002A192C string=0x00000000002A1930 "}F"
 *   insn=0x00000000002A1930 string=0x00000000002A1934 ")""
 *   insn=0x00000000002A1930 string=0x00000000002A19F4 " ""
 *   insn=0x00000000002A1934 string=0x00000000002A1938 ")"
 *   insn=0x00000000002A1938 string=0x00000000002A193C "?"
 *   insn=0x00000000002A1940 string=0x00000000002A1944 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WalkingMonsterControllerComponent::ImplementsInterface(
        Caver::WalkingMonsterControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MonsterControllerComponent *this))(Caver::MonsterControllerComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::WalkingMonsterControllerComponent::Interface)
       | (unsigned int)(a2 == Caver::MonsterControllerComponent::Interface);
}

