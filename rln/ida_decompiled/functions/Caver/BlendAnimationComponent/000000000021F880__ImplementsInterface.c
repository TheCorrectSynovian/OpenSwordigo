/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021F880
 * Mangled: _ZN5Caver23BlendAnimationComponent19ImplementsInterfaceEl
 * Demangled: Caver::BlendAnimationComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000021D490  Caver::AnimationComponent::Interface(void)
 *   0x000000000021F9CC  Caver::BlendAnimationComponent::Interface(void)
 *
 * Referenced strings: 7
 *   insn=0x000000000021F880 string=0x000000000021F884 "AG"
 *   insn=0x000000000021F884 string=0x000000000021F888 ")&"
 *   insn=0x000000000021F884 string=0x000000000021F9CC " &"
 *   insn=0x000000000021F888 string=0x000000000021F88C "))F"
 *   insn=0x000000000021F88C string=0x000000000021F890 "?"
 *   insn=0x000000000021F88C string=0x000000000021D490 " &"
 *   insn=0x000000000021F894 string=0x000000000021F898 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BlendAnimationComponent::ImplementsInterface(
        Caver::BlendAnimationComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::AnimationComponent *this))(Caver::AnimationComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::BlendAnimationComponent::Interface)
       | (unsigned int)(a2 == Caver::AnimationComponent::Interface);
}

