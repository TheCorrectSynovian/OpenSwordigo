/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029FF38
 * Mangled: _ZN5Caver34SnappingMonsterControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::SnappingMonsterControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x00000000002A00D0  Caver::SnappingMonsterControllerComponent::Interface(void)
 *
 * Referenced strings: 6
 *   insn=0x000000000029FF38 string=0x000000000029FF3C ""
 *   insn=0x000000000029FF3C string=0x000000000029FF40 ")""
 *   insn=0x000000000029FF3C string=0x00000000002A00D0 " ""
 *   insn=0x000000000029FF40 string=0x000000000029FF44 ")"
 *   insn=0x000000000029FF44 string=0x000000000029FF48 "?"
 *   insn=0x000000000029FF4C string=0x000000000029FF50 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SnappingMonsterControllerComponent::ImplementsInterface(
        Caver::SnappingMonsterControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MonsterControllerComponent *this))(Caver::MonsterControllerComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::SnappingMonsterControllerComponent::Interface)
       | (unsigned int)(a2 == Caver::MonsterControllerComponent::Interface);
}

