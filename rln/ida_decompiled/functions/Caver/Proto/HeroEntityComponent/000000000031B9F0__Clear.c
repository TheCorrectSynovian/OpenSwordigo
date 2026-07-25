/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B9F0
 * Mangled: _ZN5Caver5Proto19HeroEntityComponent5ClearEv
 * Demangled: Caver::Proto::HeroEntityComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000031B9FC string=0x000000000031BA00 "hb@9"
 *   insn=0x000000000031BA04 string=0x000000000031BA08 "`\n@"
 *   insn=0x000000000031BA08 string=0x000000000031BA0C "@"
 *   insn=0x000000000031BA10 string=0x00000000001F4DE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HeroEntityComponent::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( (*(_BYTE *)(this + 24) & 1) != 0 )
  {
    this = *(_QWORD *)(this + 16);
    if ( this )
      this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
  }
  *(_DWORD *)(v1 + 24) = 0;
  return this;
}

