/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031CB5C
 * Mangled: _ZN5Caver5Proto15ParticleEmitterC2Ev
 * Demangled: Caver::Proto::ParticleEmitter::ParticleEmitter(void)
 *
 * Callers: 1
 *   0x00000000001FF0B0  Caver::Proto::ParticleEmitter::ParticleEmitter(void)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000031CB5C string=0x000000000031CB60 "=A"
 *   insn=0x000000000031CB60 string=0x000000000031CB64 "j"
 *   insn=0x000000000031CB64 string=0x000000000031CB68 "@9B"
 *   insn=0x000000000031CB68 string=0x000000000031CB6C "\t"
 *   insn=0x000000000031CB6C string=0x000000000031CB70 "A"
 *   insn=0x000000000031CB7C string=0x000000000031CB80 "\t"
 *   insn=0x000000000031CB80 string=0x000000000031CB84 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::ParticleEmitter::ParticleEmitter(Caver::Proto::ParticleEmitter *this)
{
  double result; // d0

  *(_QWORD *)&result = 0x400000000LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 6) = (char *)this + 64;
  *(_QWORD *)this = off_6C8730;
  *((_QWORD *)this + 7) = 0x400000000LL;
  *((_DWORD *)this + 10) = 0;
  return result;
}

