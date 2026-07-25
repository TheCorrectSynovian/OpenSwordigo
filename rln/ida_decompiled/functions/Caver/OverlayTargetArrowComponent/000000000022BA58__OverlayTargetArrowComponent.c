/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022BA58
 * Mangled: _ZN5Caver27OverlayTargetArrowComponentC2Ev
 * Demangled: Caver::OverlayTargetArrowComponent::OverlayTargetArrowComponent(void)
 *
 * Callers: 1
 *   0x00000000001F6560  Caver::OverlayTargetArrowComponent::OverlayTargetArrowComponent(void)
 *
 * Callees: 1
 *   0x0000000000202B50  Caver::OverlayComponent::OverlayComponent(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000022BA64 string=0x000000000022BA68 ":\"
 *   insn=0x000000000022BA6C string=0x000000000022BA70 "mF"
 *   insn=0x000000000022BA7C string=0x000000000022BA80 "\tA"
 *   insn=0x000000000022BA80 string=0x000000000022BA84 "i"
 *   insn=0x000000000022BA84 string=0x000000000022BA88 "\t"
 *   insn=0x000000000022BA88 string=0x000000000022BA8C ""
 *   insn=0x000000000022BA8C string=0x000000000022BA90 " "
 *   insn=0x000000000022BA9C string=0x000000000022BAA0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::OverlayTargetArrowComponent::OverlayTargetArrowComponent(
        Caver::OverlayTargetArrowComponent *this)
{
  __n128 result; // q0

  Caver::OverlayComponent::OverlayComponent(this);
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 14) = 0;
  *(_QWORD *)this = off_6BA950;
  result.n128_u64[0] = (unsigned __int64)&off_6BAA70;
  result.n128_u64[1] = (unsigned __int64)&off_6BAAB0;
  *((_BYTE *)this + 154) = 0;
  *((_WORD *)this + 76) = 0;
  *((__n128 *)this + 1) = result;
  *((_QWORD *)this + 20) = 0;
  *((_QWORD *)this + 21) = 0;
  return result;
}

