/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025450C
 * Mangled: _ZN5Caver24BreakableObjectComponentC2Ev
 * Demangled: Caver::BreakableObjectComponent::BreakableObjectComponent(void)
 *
 * Callers: 1
 *   0x00000000001F6650  Caver::BreakableObjectComponent::BreakableObjectComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x0000000000254518 string=0x000000000025451C ""
 *   insn=0x000000000025451C string=0x0000000000254520 "JeC"
 *   insn=0x0000000000254528 string=0x000000000025452C "a"
 *   insn=0x000000000025452C string=0x0000000000254530 "L"
 *   insn=0x0000000000254530 string=0x0000000000254534 "KA"
 *   insn=0x0000000000254538 string=0x000000000025453C "J"
 *   insn=0x000000000025453C string=0x0000000000254540 ""
 *   insn=0x0000000000254540 string=0x0000000000254544 " "
 *   insn=0x0000000000254544 string=0x0000000000254548 "A"
 *   insn=0x0000000000254548 string=0x000000000025454C ""
 *   insn=0x000000000025454C string=0x0000000000254550 "\t|"
 *   insn=0x0000000000254558 string=0x000000000025455C "@"
 *   insn=0x0000000000254568 string=0x000000000025456C "\t,"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::BreakableObjectComponent::BreakableObjectComponent(Caver::BreakableObjectComponent *this)
{
  long double result; // q0
  __int128 v2; // q1

  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)&result = 0u;
  *(_QWORD *)&v2 = &off_6BDD48;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_OWORD *)((char *)this + 72) = 0u;
  *((_QWORD *)&v2 + 1) = &off_6BDD88;
  *(_QWORD *)this = off_6BDC30;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_WORD *)this + 56) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = &byte_6FD2F8;
  *((_DWORD *)this + 43) = 0;
  *(_OWORD *)((char *)this + 152) = 0u;
  *(_OWORD *)((char *)this + 136) = 0u;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_OWORD *)this + 1) = v2;
  *((_OWORD *)this + 2) = 0u;
  *((_BYTE *)this + 168) = 0;
  return result;
}

