/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000325AE0
 * Mangled: _ZN5Caver5Proto15AttackComponent5ClearEv
 * Demangled: Caver::Proto::AttackComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000325AEC string=0x0000000000325AF0 "hJ@"
 *   insn=0x0000000000325AF4 string=0x0000000000325AF8 "@"
 *   insn=0x0000000000325B04 string=0x0000000000325B08 "`"
 *   insn=0x0000000000325B08 string=0x0000000000325B0C "`"
 *   insn=0x0000000000325B10 string=0x0000000000325B14 "hJ@"
 *   insn=0x0000000000325B10 string=0x00000000001F4DE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AttackComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  v2 = *(_DWORD *)(this + 72);
  if ( (_BYTE)v2 )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
    if ( (v2 & 0x10) != 0 )
    {
      this = *(_QWORD *)(this + 32);
      if ( this )
      {
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
        v2 = *(_DWORD *)(v1 + 72);
      }
    }
    *(_QWORD *)(v1 + 40) = 0;
    *(_DWORD *)(v1 + 48) = 0;
  }
  if ( (v2 & 0xFF00) != 0 )
  {
    *(_QWORD *)(v1 + 60) = 0;
    *(_QWORD *)(v1 + 52) = 0;
    *(_DWORD *)(v1 + 68) = 0;
  }
  *(_DWORD *)(v1 + 72) = 0;
  return this;
}

