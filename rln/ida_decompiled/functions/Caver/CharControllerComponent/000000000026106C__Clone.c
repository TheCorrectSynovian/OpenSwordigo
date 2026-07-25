/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026106C
 * Mangled: _ZNK5Caver23CharControllerComponent5CloneEv
 * Demangled: Caver::CharControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000260710  Caver::CharControllerComponent::~CharControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5DB0  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000026116C  Caver::CharControllerComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x000000000026107C string=0x0000000000261080 "XQ"
 *   insn=0x0000000000261080 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000261084 string=0x0000000000261088 "JS"
 *   insn=0x0000000000261088 string=0x00000000001F5DB0 "P'"
 *   insn=0x0000000000261090 string=0x0000000000261094 "`"
 *   insn=0x0000000000261094 string=0x0000000000261098 "h""
 *   insn=0x00000000002610A8 string=0x00000000002610AC "hz"
 *   insn=0x00000000002610B0 string=0x00000000002610B4 "h"
 *   insn=0x00000000002610B8 string=0x00000000002610BC "h"
 *   insn=0x00000000002610C0 string=0x00000000002610C4 "h"
 *   insn=0x00000000002610C8 string=0x00000000002610CC "h"
 *   insn=0x00000000002610D0 string=0x00000000002610D4 "h"
 *   insn=0x00000000002610D8 string=0x00000000002610DC "h\n"
 *   insn=0x00000000002610E0 string=0x00000000002610E4 "h""
 *   insn=0x00000000002610E8 string=0x00000000002610EC "h:"
 *   insn=0x00000000002610F0 string=0x00000000002610F4 "hR"
 *   insn=0x00000000002610F8 string=0x00000000002610FC "hj"
 *   insn=0x0000000000261100 string=0x0000000000261104 "h"
 *   insn=0x0000000000261108 string=0x000000000026110C "h"
 *   insn=0x0000000000261110 string=0x0000000000261114 "h"
 *   insn=0x0000000000261118 string=0x000000000026111C "h"
 *   insn=0x0000000000261120 string=0x0000000000261124 "h"
 *   insn=0x0000000000261128 string=0x000000000026112C "h"
 *   insn=0x0000000000261130 string=0x0000000000261134 "h\n"
 *   insn=0x0000000000261138 string=0x000000000026113C "hn"
 *   insn=0x0000000000261144 string=0x0000000000261148 "h"
 *   insn=0x000000000026115C string=0x0000000000261160 "TX"
 *   insn=0x0000000000261160 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::CharControllerComponent::Clone(Caver::CharControllerComponent *this)
{
  __int64 v2; // x19
  long double result; // q0

  v2 = operator new(0x308u);
  Caver::CharControllerComponent::CharControllerComponent((Caver::CharControllerComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  *(_DWORD *)(v2 + 120) = *((_DWORD *)this + 30);
  *(_DWORD *)(v2 + 144) = *((_DWORD *)this + 36);
  *(_DWORD *)(v2 + 168) = *((_DWORD *)this + 42);
  *(_DWORD *)(v2 + 192) = *((_DWORD *)this + 48);
  *(_DWORD *)(v2 + 216) = *((_DWORD *)this + 54);
  *(_DWORD *)(v2 + 240) = *((_DWORD *)this + 60);
  *(_DWORD *)(v2 + 264) = *((_DWORD *)this + 66);
  *(_DWORD *)(v2 + 288) = *((_DWORD *)this + 72);
  *(_DWORD *)(v2 + 312) = *((_DWORD *)this + 78);
  *(_DWORD *)(v2 + 336) = *((_DWORD *)this + 84);
  *(_DWORD *)(v2 + 360) = *((_DWORD *)this + 90);
  *(_DWORD *)(v2 + 384) = *((_DWORD *)this + 96);
  *(_DWORD *)(v2 + 416) = *((_DWORD *)this + 104);
  *(_DWORD *)(v2 + 440) = *((_DWORD *)this + 110);
  *(_DWORD *)(v2 + 536) = *((_DWORD *)this + 134);
  *(_DWORD *)(v2 + 472) = *((_DWORD *)this + 118);
  *(_DWORD *)(v2 + 496) = *((_DWORD *)this + 124);
  *(_DWORD *)(v2 + 520) = *((_DWORD *)this + 130);
  *(_DWORD *)(v2 + 620) = *((_DWORD *)this + 155);
  result = *(long double *)((char *)this + 632);
  *(long double *)(v2 + 632) = result;
  return result;
}

