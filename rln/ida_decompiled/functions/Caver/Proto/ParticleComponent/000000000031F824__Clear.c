/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031F824
 * Mangled: _ZN5Caver5Proto17ParticleComponent5ClearEv
 * Demangled: Caver::Proto::ParticleComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 6
 *   insn=0x000000000031F830 string=0x000000000031F834 "hr@9"
 *   insn=0x000000000031F838 string=0x000000000031F83C "h"
 *   insn=0x000000000031F83C string=0x000000000031F840 "("
 *   insn=0x000000000031F840 string=0x000000000031F844 "`\n@"
 *   insn=0x000000000031F844 string=0x000000000031F848 ""
 *   insn=0x000000000031F850 string=0x000000000031F854 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleComponent::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( *(_BYTE *)(this + 28) )
  {
    if ( (*(_BYTE *)(this + 28) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::ParticleComponent::_default_texture_name_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_DWORD *)(v1 + 24) = 0;
  }
  *(_DWORD *)(v1 + 28) = 0;
  return this;
}

