/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032DA88
 * Mangled: _ZN5Caver5Proto19SpawnPointComponent5ClearEv
 * Demangled: Caver::Proto::SpawnPointComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002034E0  Caver::Proto::Vector3::Clear(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000032DA94 string=0x000000000032DA98 "hb@9"
 *   insn=0x000000000032DAA4 string=0x000000000032DAA8 "`\n@"
 *   insn=0x000000000032DAA8 string=0x000000000032DAAC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpawnPointComponent::Clear(__int64 this)
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
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
    }
  }
  *(_DWORD *)(v1 + 24) = 0;
  return this;
}

