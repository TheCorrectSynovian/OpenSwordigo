/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003370F8
 * Mangled: _ZN5Caver5Proto14SpellComponent5ClearEv
 * Demangled: Caver::Proto::SpellComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000337104 string=0x0000000000337108 "hb@9"
 *   insn=0x000000000033710C string=0x0000000000337110 "`\n@"
 *   insn=0x0000000000337110 string=0x0000000000337114 "@"
 *   insn=0x0000000000337114 string=0x0000000000337118 "2"
 *   insn=0x0000000000337118 string=0x00000000001F4DE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpellComponent::Clear(__int64 this)
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

