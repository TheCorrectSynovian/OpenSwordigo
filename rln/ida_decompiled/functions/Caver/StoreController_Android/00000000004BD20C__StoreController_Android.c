/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BD20C
 * Mangled: _ZN5Caver23StoreController_AndroidC2Ev
 * Demangled: Caver::StoreController_Android::StoreController_Android(void)
 *
 * Callers: 1
 *   0x00000000001F6460  Caver::StoreController_Android::StoreController_Android(void)
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x00000000004BD20C string=0x00000000004BD210 "I"
 *   insn=0x00000000004BD210 string=0x00000000004BD214 ""
 *   insn=0x00000000004BD214 string=0x00000000004BD218 ")IG"
 *   insn=0x00000000004BD220 string=0x00000000004BD224 "a"
 *   insn=0x00000000004BD224 string=0x00000000004BD228 ")A"
 *   insn=0x00000000004BD228 string=0x00000000004BD22C "\t "
 *   insn=0x00000000004BD234 string=0x00000000004BD238 ""
 *   insn=0x00000000004BD238 string=0x00000000004BD23C "|"
 *   insn=0x00000000004BD248 string=0x00000000004BD24C ""
 *   insn=0x00000000004BD25C string=0x00000000004BD260 "D"
 *   insn=0x00000000004BD260 string=0x00000000004BD264 "|\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::StoreController_Android::StoreController_Android(Caver::StoreController_Android *this)
{
  long double result; // q0

  *(_OWORD *)&result = 0u;
  *((_OWORD *)this + 2) = 0u;
  *(_QWORD *)this = off_6D7B60;
  *((_QWORD *)this + 1) = &byte_6FD2F8;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 5) = (char *)this + 24;
  *((_QWORD *)this + 6) = (char *)this + 24;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 5) = 0u;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *(_OWORD *)((char *)this + 120) = 0u;
  *(_OWORD *)((char *)this + 136) = 0u;
  *((_QWORD *)this + 17) = (char *)this + 120;
  *((_QWORD *)this + 18) = (char *)this + 120;
  *((_QWORD *)this + 19) = 0;
  *((_BYTE *)this + 160) = 0;
  return result;
}

