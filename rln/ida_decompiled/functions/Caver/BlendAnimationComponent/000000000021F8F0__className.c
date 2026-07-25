/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021F8F0
 * Mangled: _ZNK5Caver23BlendAnimationComponent9classNameEv
 * Demangled: Caver::BlendAnimationComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F3480  Caver::BlendAnimationComponent::setAnimation2(Caver::AnimationComponent *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7F70  Caver::BlendAnimationComponent::setAnimation1(Caver::AnimationComponent *)
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x000000000021F8FC string=0x000000000021F900 "S"
 *   insn=0x000000000021F900 string=0x000000000021F904 "i"
 *   insn=0x000000000021F908 string=0x000000000021F90C "!"
 *   insn=0x000000000021F90C string=0x0000000000583DA5 "BlendAnimation"
 *   insn=0x000000000021F91C string=0x000000000021F920 "h"
 *   insn=0x000000000021F92C string=0x000000000021F940 "dZ"
 *   insn=0x000000000021F940 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021F954 string=0x000000000021F958 "h"
 *   insn=0x000000000021F95C string=0x000000000021F960 "`>@"
 *   insn=0x000000000021F95C string=0x000000000021F970 "`"
 *   insn=0x000000000021F970 string=0x000000000021F974 "`"
 *   insn=0x000000000021F974 string=0x000000000021F978 "hF@"
 *   insn=0x000000000021F97C string=0x000000000021F980 "i"
 *   insn=0x000000000021F984 string=0x000000000021F988 "hN@"
 *   insn=0x000000000021F984 string=0x000000000021F994 "a"
 *   insn=0x000000000021F98C string=0x000000000021F990 ""
 *   insn=0x000000000021F990 string=0x000000000021F9B0 "`"
 *   insn=0x000000000021F998 string=0x00000000001F8520 "0'"
 *   insn=0x000000000021F9A0 string=0x000000000021F9A4 "sa"
 *   insn=0x000000000021F9A4 string=0x000000000021F9A8 "hN@"
 *   insn=0x000000000021F9A4 string=0x00000000001F7F70 "0'"
 *   insn=0x000000000021F9B0 string=0x000000000021F9B4 "a"
 *   insn=0x000000000021F9C4 string=0x00000000001F3480 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::BlendAnimationComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "BlendAnimation");
}

