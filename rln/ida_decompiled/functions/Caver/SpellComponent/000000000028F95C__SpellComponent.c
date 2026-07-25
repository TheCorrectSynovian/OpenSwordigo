/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028F95C
 * Mangled: _ZN5Caver14SpellComponentC2Ev
 * Demangled: Caver::SpellComponent::SpellComponent(void)
 *
 * Callers: 1
 *   0x00000000001F8740  Caver::SpellComponent::SpellComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x000000000028F968 string=0x000000000028F96C ""
 *   insn=0x000000000028F96C string=0x000000000028F970 "J5D"
 *   insn=0x000000000028F978 string=0x000000000028F97C "a"
 *   insn=0x000000000028F97C string=0x000000000028F980 "L!"
 *   insn=0x000000000028F980 string=0x000000000028F984 "KA"
 *   insn=0x000000000028F988 string=0x000000000028F98C "J!"
 *   insn=0x000000000028F98C string=0x000000000028F990 ""
 *   insn=0x000000000028F990 string=0x000000000028F994 " "
 *   insn=0x000000000028F994 string=0x000000000028F998 "A"
 *   insn=0x000000000028F998 string=0x000000000028F99C ""
 *   insn=0x000000000028F9B0 string=0x000000000028F9B4 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::SpellComponent::SpellComponent(Caver::SpellComponent *this)
{
  long double result; // q0
  __int128 v2; // q1

  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)&result = 0u;
  *(_QWORD *)&v2 = &off_6C1358;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_OWORD *)((char *)this + 72) = 0u;
  *((_QWORD *)&v2 + 1) = &off_6C1398;
  *(_QWORD *)this = off_6C1220;
  *(_OWORD *)((char *)this + 104) = 0u;
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = &byte_6FD2F8;
  *((_BYTE *)this + 184) = 0;
  *(_OWORD *)((char *)this + 168) = 0u;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_OWORD *)this + 1) = v2;
  *((_OWORD *)this + 2) = 0u;
  *(_OWORD *)((char *)this + 152) = 0u;
  return result;
}

