/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002831FC
 * Mangled: _ZN5Caver22HookshotTrailComponentC2Ev
 * Demangled: Caver::HookshotTrailComponent::HookshotTrailComponent(void)
 *
 * Callers: 1
 *   0x00000000001F5630  Caver::HookshotTrailComponent::HookshotTrailComponent(void)
 *
 * Callees: 1
 *   0x00000000001FCFB0  Caver::GlowComponent::GlowComponent(void)
 *
 * Referenced strings: 11
 *   insn=0x0000000000283208 string=0x000000000028320C "i"
 *   insn=0x000000000028320C string=0x0000000000283210 "(#"
 *   insn=0x000000000028320C string=0x00000000001FCFB0 "0'"
 *   insn=0x0000000000283210 string=0x0000000000283214 ""
 *   insn=0x0000000000283220 string=0x0000000000283224 "\n"
 *   insn=0x0000000000283224 string=0x0000000000283228 "\tA"
 *   insn=0x0000000000283228 string=0x000000000028322C ""
 *   insn=0x000000000028322C string=0x0000000000283230 "A"
 *   insn=0x0000000000283234 string=0x0000000000283238 "i"
 *   insn=0x0000000000283238 string=0x000000000028323C "a"
 *   insn=0x000000000028323C string=0x0000000000283240 "`B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::HookshotTrailComponent::HookshotTrailComponent(Caver::HookshotTrailComponent *this)
{
  long double result; // q0
  __int128 v7; // q1

  Caver::GlowComponent::GlowComponent(this);
  __asm { FMOV            V0.4S, #1.0 }
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 19) = 0;
  *(_QWORD *)&v7 = &off_6C03E8;
  *((_QWORD *)&v7 + 1) = &off_6C0428;
  *(_QWORD *)this = off_6C02C0;
  *((_OWORD *)this + 1) = v7;
  *(long double *)((char *)this + 180) = result;
  return result;
}

