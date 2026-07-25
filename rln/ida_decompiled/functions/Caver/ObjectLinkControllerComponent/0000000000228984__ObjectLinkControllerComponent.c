/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000228984
 * Mangled: _ZN5Caver29ObjectLinkControllerComponentC2Ev
 * Demangled: Caver::ObjectLinkControllerComponent::ObjectLinkControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000001F42B0  Caver::ObjectLinkControllerComponent::ObjectLinkControllerComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x0000000000228990 string=0x0000000000228994 ""
 *   insn=0x0000000000228994 string=0x0000000000228998 "J"
 *   insn=0x00000000002289A0 string=0x00000000002289A4 "a"
 *   insn=0x00000000002289A4 string=0x00000000002289A8 "KA"
 *   insn=0x00000000002289AC string=0x00000000002289B0 ""
 *   insn=0x00000000002289B0 string=0x00000000002289B4 " "
 *   insn=0x00000000002289B4 string=0x00000000002289B8 ""
 *   insn=0x00000000002289B8 string=0x00000000002289BC "K"
 *   insn=0x00000000002289BC string=0x00000000002289C0 "a"
 *   insn=0x00000000002289C0 string=0x00000000002289C4 "J"
 *   insn=0x00000000002289C4 string=0x00000000002289C8 "$"
 *   insn=0x00000000002289C8 string=0x00000000002289CC "A"
 *   insn=0x00000000002289E8 string=0x00000000002289EC "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::ObjectLinkControllerComponent::ObjectLinkControllerComponent(
        Caver::ObjectLinkControllerComponent *this)
{
  long double result; // q0
  __int128 v2; // q1

  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)&result = 0u;
  *((_OWORD *)this + 2) = 0u;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_OWORD *)((char *)this + 72) = 0u;
  *(_QWORD *)this = off_6BA5C0;
  *(_QWORD *)&v2 = &off_6BA6D8;
  *((_QWORD *)&v2 + 1) = &off_6BA718;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = &byte_6FD2F8;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = &byte_6FD2F8;
  *((_QWORD *)this + 15) = 0;
  *((_BYTE *)this + 128) = 0;
  *((_BYTE *)this + 232) = 0;
  *((_QWORD *)this + 36) = 0;
  *(_OWORD *)((char *)this + 152) = 0u;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_OWORD *)this + 1) = v2;
  *(_QWORD *)((char *)this + 265) = 0;
  *(_OWORD *)((char *)this + 252) = 0u;
  *(_OWORD *)((char *)this + 236) = 0u;
  return result;
}

