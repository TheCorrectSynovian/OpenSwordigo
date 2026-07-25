/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C7CC
 * Mangled: _ZN5Caver5Proto19PropertiesComponent5ClearEv
 * Demangled: Caver::Proto::PropertiesComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000031C7D8 string=0x000000000031C7DC "hb@9"
 *   insn=0x000000000031C7E0 string=0x000000000031C7E4 "`\n@"
 *   insn=0x000000000031C7E4 string=0x000000000031C7E8 "@"
 *   insn=0x000000000031C7E8 string=0x000000000031C7EC "}a"
 *   insn=0x000000000031C7EC string=0x00000000001F4DE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PropertiesComponent::Clear(__int64 this)
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

