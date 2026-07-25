/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029E970
 * Mangled: _ZN5Caver32SkellyMonsterControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::SkellyMonsterControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x000000000029EB08  Caver::SkellyMonsterControllerComponent::Interface(void)
 *
 * Referenced strings: 6
 *   insn=0x000000000029E970 string=0x000000000029E974 ""
 *   insn=0x000000000029E974 string=0x000000000029E978 "I""
 *   insn=0x000000000029E974 string=0x000000000029EB08 " ""
 *   insn=0x000000000029E978 string=0x000000000029E97C ")"
 *   insn=0x000000000029E97C string=0x000000000029E980 "?"
 *   insn=0x000000000029E984 string=0x000000000029E988 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkellyMonsterControllerComponent::ImplementsInterface(
        Caver::SkellyMonsterControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MonsterControllerComponent *this))(Caver::MonsterControllerComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::SkellyMonsterControllerComponent::Interface)
       | (unsigned int)(a2 == Caver::MonsterControllerComponent::Interface);
}

