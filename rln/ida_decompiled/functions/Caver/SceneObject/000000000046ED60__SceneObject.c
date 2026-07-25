/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046ED60
 * Mangled: _ZN5Caver11SceneObjectC2Ev
 * Demangled: Caver::SceneObject::SceneObject(void)
 *
 * Callers: 2
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FBDB0  Caver::SceneObject::SceneObject(void)
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x000000000046ED64 string=0x000000000046ED68 "QC"
 *   insn=0x000000000046ED6C string=0x000000000046ED70 "\t@"
 *   insn=0x000000000046ED74 string=0x000000000046ED78 "\t0"
 *   insn=0x000000000046ED78 string=0x000000000046ED7C "\t"
 *   insn=0x000000000046ED7C string=0x000000000046ED80 "\tA"
 *   insn=0x000000000046ED84 string=0x000000000046ED88 "\t"
 *   insn=0x000000000046ED8C string=0x000000000046ED90 ")"
 *   insn=0x000000000046ED98 string=0x000000000046ED9C ""
 *   insn=0x000000000046ED9C string=0x000000000046EDA0 ")a"
 *   insn=0x000000000046EDA0 string=0x000000000046EDA4 ""
 *   insn=0x000000000046EDA4 string=0x000000000046EDA8 "0"
 *   insn=0x000000000046EDAC string=0x000000000046EDB0 "\tP"
 *   insn=0x000000000046EDFC string=0x000000000046EE00 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::SceneObject::SceneObject(Caver::SceneObject *this)
{
  double result; // d0

  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 16) = 1065353216;
  *((_WORD *)this + 12) = 1;
  *((_BYTE *)this + 243) = 1;
  *((_BYTE *)this + 68) = 0;
  *(_QWORD *)this = off_6D4CE0;
  __asm { FMOV            V1.2S, #1.0 }
  *((_QWORD *)this + 2) = &off_6D4D40;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 10) = &byte_6FD2F8;
  *((_QWORD *)this + 17) = _D1;
  __asm { FMOV            V1.2S, #-10.0 }
  *((_OWORD *)this + 2) = 0u;
  *((_OWORD *)this + 3) = 0u;
  *(_OWORD *)((char *)this + 120) = 0u;
  *(_OWORD *)((char *)this + 104) = 0u;
  *(_OWORD *)((char *)this + 88) = 0u;
  *(_OWORD *)((char *)this + 164) = 0u;
  *(_OWORD *)((char *)this + 216) = 0u;
  *(_OWORD *)((char *)this + 200) = 0u;
  *(_OWORD *)((char *)this + 184) = 0u;
  __asm { FMOV            V0.2S, #20.0 }
  *((_BYTE *)this + 144) = 0;
  *((_BYTE *)this + 180) = 0;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 242) = 0;
  *((_WORD *)this + 120) = 0;
  *((_DWORD *)this + 59) = 0;
  *((_BYTE *)this + 244) = 0;
  *(_QWORD *)((char *)this + 268) = 0;
  *(_QWORD *)((char *)this + 276) = 0;
  *((_BYTE *)this + 264) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = 0;
  *(_QWORD *)((char *)this + 148) = _D1;
  *(double *)((char *)this + 156) = result;
  *((_QWORD *)this + 32) = this;
  return result;
}

