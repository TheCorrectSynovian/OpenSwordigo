/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A34AC
 * Mangled: _ZN5Caver13GlowComponentC2Ev
 * Demangled: Caver::GlowComponent::GlowComponent(void)
 *
 * Callers: 1
 *   0x00000000001FCFB0  Caver::GlowComponent::GlowComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x00000000002A34B4 string=0x00000000002A34B8 """
 *   insn=0x00000000002A34B8 string=0x00000000002A34BC ""
 *   insn=0x00000000002A34BC string=0x00000000002A34C0 "\n""
 *   insn=0x00000000002A34C0 string=0x00000000002A34C4 "J"
 *   insn=0x00000000002A34C8 string=0x00000000002A34CC "a"
 *   insn=0x00000000002A34CC string=0x00000000002A34D0 ""
 *   insn=0x00000000002A34D0 string=0x00000000002A34D4 "H"
 *   insn=0x00000000002A34D8 string=0x00000000002A34DC "H"
 *   insn=0x00000000002A34E0 string=0x00000000002A34E4 "KA"
 *   insn=0x00000000002A34E4 string=0x00000000002A34E8 "?"
 *   insn=0x00000000002A34F4 string=0x00000000002A34F8 ""
 *   insn=0x00000000002A34FC string=0x00000000002A3500 "\t|"
 *   insn=0x00000000002A3500 string=0x00000000002A3504 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::GlowComponent::GlowComponent(Caver::GlowComponent *this)
{
  __int128 v1; // q0
  long double result; // q0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_QWORD *)&v1 = &off_6C2FE8;
  *((_QWORD *)&v1 + 1) = &off_6C3028;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 1) = v1;
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)this = off_6C2EC0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_BYTE *)this + 112) = 1;
  *(long double *)((char *)this + 116) = result;
  return result;
}

