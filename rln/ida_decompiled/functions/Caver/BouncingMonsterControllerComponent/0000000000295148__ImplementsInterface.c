/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000295148
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::BouncingMonsterControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x00000000002951B8  Caver::BouncingMonsterControllerComponent::className(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000295148 string=0x000000000029514C "5B"
 *   insn=0x0000000000295150 string=0x0000000000295154 ")"
 *   insn=0x0000000000295154 string=0x0000000000295158 "?"
 *   insn=0x000000000029515C string=0x0000000000295160 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BouncingMonsterControllerComponent::ImplementsInterface(
        Caver::BouncingMonsterControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MonsterControllerComponent *this))(Caver::MonsterControllerComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::BouncingMonsterControllerComponent::Interface)
       | (unsigned int)(a2 == Caver::MonsterControllerComponent::Interface);
}

