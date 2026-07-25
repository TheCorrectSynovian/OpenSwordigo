/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000223DF0
 * Mangled: _ZN5Caver14ModelComponentC2Ev
 * Demangled: Caver::ModelComponent::ModelComponent(void)
 *
 * Callers: 1
 *   0x0000000000202460  Caver::ModelComponent::ModelComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 22
 *   insn=0x0000000000223DF8 string=0x0000000000223DFC "&"
 *   insn=0x0000000000223DFC string=0x0000000000223E00 ""
 *   insn=0x0000000000223E08 string=0x0000000000223E0C "\n&"
 *   insn=0x0000000000223E0C string=0x0000000000223E10 "J"
 *   insn=0x0000000000223E14 string=0x0000000000223E18 "a"
 *   insn=0x0000000000223E1C string=0x0000000000223E20 "KA"
 *   insn=0x0000000000223E20 string=0x0000000000223E24 ""
 *   insn=0x0000000000223E24 string=0x0000000000223E28 "?"
 *   insn=0x0000000000223E28 string=0x0000000000223E2C ""
 *   insn=0x0000000000223E2C string=0x0000000000223E30 "K"
 *   insn=0x0000000000223E34 string=0x0000000000223E38 "`"
 *   insn=0x0000000000223E38 string=0x0000000000223E3C "J"
 *   insn=0x0000000000223E3C string=0x0000000000223E40 "@"
 *   insn=0x0000000000223E40 string=0x0000000000223E44 "\n"
 *   insn=0x0000000000223E44 string=0x0000000000223E48 "p"
 *   insn=0x0000000000223E48 string=0x0000000000223E4C "\t"
 *   insn=0x0000000000223E4C string=0x0000000000223E50 "\t"
 *   insn=0x0000000000223E58 string=0x0000000000223E5C "8"
 *   insn=0x0000000000223E78 string=0x0000000000223E7C "_"
 *   insn=0x0000000000223E7C string=0x0000000000223E80 ""
 *   insn=0x0000000000223E80 string=0x0000000000223E84 "\n"
 *   insn=0x0000000000223E90 string=0x0000000000223E94 "*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::ModelComponent::ModelComponent(Caver::ModelComponent *this)
{
  __n128 result; // q0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  __asm { FMOV            V0.4S, #1.0 }
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_QWORD *)this + 9) = 0;
  *(_QWORD *)this = off_6BA230;
  *((_OWORD *)this + 10) = _Q0;
  result.n128_u64[0] = (unsigned __int64)&off_6BA348;
  result.n128_u64[1] = (unsigned __int64)&off_6BA388;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 14) = &byte_6FD2F8;
  *(_QWORD *)((char *)this + 149) = 0;
  *((_BYTE *)this + 192) = 0;
  *((_BYTE *)this + 280) = 0;
  *((_DWORD *)this + 53) = 0;
  *(_QWORD *)((char *)this + 196) = 0;
  *(_QWORD *)((char *)this + 204) = 0;
  *((__n128 *)this + 1) = result;
  *(_QWORD *)((char *)this + 300) = 0;
  *(_QWORD *)((char *)this + 284) = 0;
  *((_WORD *)this + 154) = 0;
  *(_QWORD *)((char *)this + 292) = 0;
  *(_QWORD *)((char *)this + 310) = -1;
  *((_BYTE *)this + 318) = 0;
  return result;
}

