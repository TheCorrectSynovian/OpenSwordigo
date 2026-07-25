/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B6680
 * Mangled: _ZN5Caver27RotatingBackgroundComponentC2Ev
 * Demangled: Caver::RotatingBackgroundComponent::RotatingBackgroundComponent(void)
 *
 * Callers: 1
 *   0x00000000001FB200  Caver::RotatingBackgroundComponent::RotatingBackgroundComponent(void)
 *
 * Callees: 1
 *   0x00000000001FF840  Caver::BackgroundComponent::BackgroundComponent(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000002B668C string=0x00000000002B6690 "l$"
 *   insn=0x00000000002B6694 string=0x00000000002B6698 ""
 *   insn=0x00000000002B669C string=0x00000000002B66A0 "\n"
 *   insn=0x00000000002B66A0 string=0x00000000002B66A4 "\tA"
 *   insn=0x00000000002B66A4 string=0x00000000002B66A8 ""
 *   insn=0x00000000002B66A8 string=0x00000000002B66AC "@"
 *   insn=0x00000000002B66B0 string=0x00000000002B66B4 "i"
 *   insn=0x00000000002B66B4 string=0x00000000002B66B8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::RotatingBackgroundComponent::RotatingBackgroundComponent(
        Caver::RotatingBackgroundComponent *this)
{
  __n128 result; // q0

  Caver::BackgroundComponent::BackgroundComponent(this);
  *((_DWORD *)this + 36) = 0;
  result.n128_u64[0] = (unsigned __int64)&off_6C48D0;
  result.n128_u64[1] = (unsigned __int64)&off_6C4910;
  *(_QWORD *)this = off_6C47B0;
  *((__n128 *)this + 1) = result;
  return result;
}

