/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021D2F0
 * Mangled: _ZN5Caver28AnimationControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::AnimationControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000021D49C  Caver::AnimationControllerComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000021D2F0 string=0x000000000021D2F4 ""
 *   insn=0x000000000021D2F4 string=0x000000000021D2F8 "?"
 *   insn=0x000000000021D2F4 string=0x000000000021D49C " &"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::AnimationControllerComponent::ImplementsInterface(
        Caver::AnimationControllerComponent *this,
        __int64 (__fastcall *a2)(Caver::AnimationControllerComponent *__hidden this))
{
  return a2 == Caver::AnimationControllerComponent::Interface;
}

