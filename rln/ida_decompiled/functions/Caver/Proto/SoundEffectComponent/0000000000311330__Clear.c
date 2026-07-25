/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311330
 * Mangled: _ZN5Caver5Proto20SoundEffectComponent5ClearEv
 * Demangled: Caver::Proto::SoundEffectComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 7
 *   insn=0x000000000031133C string=0x0000000000311340 "h"
 *   insn=0x0000000000311344 string=0x0000000000311348 "h"
 *   insn=0x000000000031134C string=0x0000000000311350 "`\n@"
 *   insn=0x0000000000311350 string=0x0000000000311354 ""
 *   insn=0x000000000031135C string=0x0000000000311360 ""
 *   insn=0x000000000031136C string=0x0000000000311370 "R^\t"
 *   insn=0x0000000000311378 string=0x000000000031137C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundEffectComponent::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( *(_BYTE *)(this + 32) )
  {
    if ( (*(_BYTE *)(this + 32) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::SoundEffectComponent::_default_name_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_QWORD *)(v1 + 24) = 1065353216;
  }
  *(_DWORD *)(v1 + 32) = 0;
  return this;
}

