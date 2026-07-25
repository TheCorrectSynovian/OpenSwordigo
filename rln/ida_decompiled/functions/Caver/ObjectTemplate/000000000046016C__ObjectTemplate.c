/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046016C
 * Mangled: _ZN5Caver14ObjectTemplateC2Ev
 * Demangled: Caver::ObjectTemplate::ObjectTemplate(void)
 *
 * Callers: 1
 *   0x00000000001FB8C0  Caver::ObjectTemplate::ObjectTemplate(void)
 *
 * Callees: 1
 *   0x00000000001FBDB0  Caver::SceneObject::SceneObject(void)
 *
 * Referenced strings: 9
 *   insn=0x0000000000460178 string=0x000000000046017C "o"
 *   insn=0x000000000046017C string=0x0000000000460180 "("
 *   insn=0x000000000046017C string=0x00000000001FBDB0 "0'"
 *   insn=0x0000000000460180 string=0x0000000000460184 ""
 *   insn=0x000000000046018C string=0x0000000000460190 "i2"
 *   insn=0x0000000000460190 string=0x0000000000460194 "\nA"
 *   insn=0x0000000000460194 string=0x0000000000460198 ""
 *   insn=0x0000000000460198 string=0x000000000046019C "j"
 *   insn=0x000000000046019C string=0x00000000004601A0 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectTemplate::ObjectTemplate(Caver::ObjectTemplate *this)
{
  __int64 result; // x0

  result = Caver::SceneObject::SceneObject(this);
  *((_QWORD *)this + 37) = 0;
  *((_DWORD *)this + 76) = 1065353216;
  *(_QWORD *)this = off_6D4850;
  *((_QWORD *)this + 2) = &off_6D48B0;
  return result;
}

