/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002618BC
 * Mangled: _ZN5Caver24CollectableItemComponentC2Ev
 * Demangled: Caver::CollectableItemComponent::CollectableItemComponent(void)
 *
 * Callers: 1
 *   0x00000000001F6010  Caver::CollectableItemComponent::CollectableItemComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002618C0 string=0x00000000002618C4 "($"
 *   insn=0x00000000002618C4 string=0x00000000002618C8 "*$"
 *   insn=0x00000000002618C8 string=0x00000000002618CC ""
 *   insn=0x00000000002618CC string=0x00000000002618D0 "JY@"
 *   insn=0x00000000002618D8 string=0x00000000002618DC "a"
 *   insn=0x00000000002618DC string=0x00000000002618E0 "KA"
 *   insn=0x00000000002618E0 string=0x00000000002618E4 ""
 *   insn=0x00000000002618E4 string=0x00000000002618E8 " "
 *   insn=0x00000000002618E8 string=0x00000000002618EC ""
 *   insn=0x00000000002618EC string=0x00000000002618F0 "K"
 *   insn=0x00000000002618F8 string=0x00000000002618FC "a"
 *   insn=0x00000000002618FC string=0x0000000000261900 "J"
 *   insn=0x0000000000261900 string=0x0000000000261904 "A"
 *   insn=0x000000000026190C string=0x0000000000261910 "H"
 *   insn=0x0000000000261914 string=0x0000000000261918 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::CollectableItemComponent::CollectableItemComponent(Caver::CollectableItemComponent *this)
{
  long double result; // q0
  __int128 v2; // q1

  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)&result = 0u;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_OWORD *)((char *)this + 72) = 0u;
  *(_QWORD *)this = off_6BE340;
  *(int64x2_t *)((char *)this + 120) = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
  *(_QWORD *)&v2 = &off_6BE458;
  *((_QWORD *)&v2 + 1) = &off_6BE498;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_BYTE *)this + 136) = 0;
  *((_QWORD *)this + 18) = &byte_6FD2F8;
  *(_OWORD *)((char *)this + 168) = 0u;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_OWORD *)this + 1) = v2;
  *((_OWORD *)this + 2) = 0u;
  *(_OWORD *)((char *)this + 152) = 0u;
  return result;
}

