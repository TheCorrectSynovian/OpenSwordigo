/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221970
 * Mangled: _ZN5Caver26KeyframeAnimationComponent19ImplementsInterfaceEl
 * Demangled: Caver::KeyframeAnimationComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000021D490  Caver::AnimationComponent::Interface(void)
 *   0x0000000000221A40  Caver::KeyframeAnimationComponent::Interface(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000221970 string=0x0000000000221974 ""
 *   insn=0x0000000000221974 string=0x0000000000221978 "\t&"
 *   insn=0x0000000000221974 string=0x0000000000221A40 " &"
 *   insn=0x0000000000221978 string=0x000000000022197C "))F"
 *   insn=0x000000000022197C string=0x0000000000221980 "?"
 *   insn=0x000000000022197C string=0x000000000021D490 " &"
 *   insn=0x0000000000221984 string=0x0000000000221988 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::KeyframeAnimationComponent::ImplementsInterface(
        Caver::KeyframeAnimationComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::AnimationComponent *this))(Caver::AnimationComponent *__hidden this))
{
  return ((char *)a2 == (char *)Caver::KeyframeAnimationComponent::Interface)
       | (unsigned int)(a2 == Caver::AnimationComponent::Interface);
}

