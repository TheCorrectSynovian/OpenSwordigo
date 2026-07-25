/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000483E44
 * Mangled: _ZN5Caver17SoundEffectSourceC2Ev
 * Demangled: Caver::SoundEffectSource::SoundEffectSource(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x0000000000483E44 string=0x0000000000483E48 "("
 *   insn=0x0000000000483E48 string=0x0000000000483E4C "IG"
 *   insn=0x0000000000483E58 string=0x0000000000483E5C "A"
 *   insn=0x0000000000483E64 string=0x0000000000483E68 "\t"
 *   insn=0x0000000000483E68 string=0x0000000000483E6C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundEffectSource::SoundEffectSource(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 16) = 0;
  *(_BYTE *)(this + 24) = 0;
  *(_QWORD *)(this + 32) = 0;
  *(_QWORD *)(this + 40) = 0;
  *(_QWORD *)(this + 56) = 0;
  *(_QWORD *)(this + 64) = 0;
  *(_QWORD *)(this + 48) = 0x3F80000000000000LL;
  *(_QWORD *)this = off_6D53D0;
  *(_DWORD *)(this + 72) = 0;
  return this;
}

