/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000258AB4
 * Mangled: _ZN5Caver27CharAnimControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::CharAnimControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000021D49C  Caver::AnimationControllerComponent::Interface(void)
 *   0x0000000000258C4C  Caver::CharAnimControllerComponent::Interface(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000258AB4 string=0x0000000000258AB8 "!D"
 *   insn=0x0000000000258AB8 string=0x0000000000258ABC "i$"
 *   insn=0x0000000000258AB8 string=0x0000000000258C4C "`$"
 *   insn=0x0000000000258ABC string=0x0000000000258AC0 ")"
 *   insn=0x0000000000258AC0 string=0x0000000000258AC4 "?"
 *   insn=0x0000000000258AC0 string=0x000000000021D49C " &"
 *   insn=0x0000000000258AC8 string=0x0000000000258ACC "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharAnimControllerComponent::ImplementsInterface(
        Caver::CharAnimControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::AnimationControllerComponent *this))(Caver::AnimationControllerComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::CharAnimControllerComponent::Interface)
       | (unsigned int)(a2 == Caver::AnimationControllerComponent::Interface);
}

