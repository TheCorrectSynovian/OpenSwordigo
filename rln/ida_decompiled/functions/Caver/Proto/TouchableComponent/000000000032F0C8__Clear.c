/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F0C8
 * Mangled: _ZN5Caver5Proto18TouchableComponent5ClearEv
 * Demangled: Caver::Proto::TouchableComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000032F0D4 string=0x000000000032F0D8 "hb@9"
 *   insn=0x000000000032F0E4 string=0x000000000032F0E8 "`\n@"
 *   insn=0x000000000032F0E8 string=0x000000000032F0EC "@"
 *   insn=0x000000000032F0EC string=0x000000000032F0F0 "<"
 *   insn=0x000000000032F0F0 string=0x00000000001F4DE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TouchableComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  char v2; // w8

  v1 = this;
  v2 = *(_BYTE *)(this + 24);
  if ( v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
    }
  }
  *(_DWORD *)(v1 + 24) = 0;
  return this;
}

