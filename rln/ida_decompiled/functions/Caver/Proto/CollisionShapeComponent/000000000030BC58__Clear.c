/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030BC58
 * Mangled: _ZN5Caver5Proto23CollisionShapeComponent5ClearEv
 * Demangled: Caver::Proto::CollisionShapeComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *
 * Referenced strings: 15
 *   insn=0x000000000030BC64 string=0x000000000030BC68 "hB@"
 *   insn=0x000000000030BC7C string=0x000000000030BC80 "i2"
 *   insn=0x000000000030BC88 string=0x000000000030BC8C " "
 *   insn=0x000000000030BC98 string=0x000000000030BC9C "`"
 *   insn=0x000000000030BC9C string=0x000000000030BCA0 "`"
 *   insn=0x000000000030BCA0 string=0x000000000030BCA4 "O"
 *   insn=0x000000000030BCA4 string=0x000000000030BCA8 "hB@"
 *   insn=0x000000000030BCA4 string=0x00000000001F4DE0 "P'"
 *   insn=0x000000000030BCAC string=0x000000000030BCB0 "`"
 *   insn=0x000000000030BCB0 string=0x000000000030BCB4 "`"
 *   insn=0x000000000030BCB4 string=0x000000000030BCB8 "J"
 *   insn=0x000000000030BCB8 string=0x000000000030BCBC "hB@"
 *   insn=0x000000000030BCC0 string=0x000000000030BCC4 "`"
 *   insn=0x000000000030BCC4 string=0x000000000030BCC8 "@"
 *   insn=0x000000000030BCC8 string=0x000000000030BCCC "E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollisionShapeComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  v2 = *(_DWORD *)(this + 64);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 24) = 0;
    *(_BYTE *)(this + 12) = 1;
    *(_DWORD *)(this + 13) = 0;
  }
  if ( (v2 & 0xFF00) != 0 )
  {
    *(_DWORD *)(this + 32) = 0;
    *(_BYTE *)(this + 36) = 0;
    if ( (v2 & 0x400) != 0 )
    {
      this = *(_QWORD *)(this + 40);
      if ( this )
      {
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
        v2 = *(_DWORD *)(v1 + 64);
      }
    }
    if ( (v2 & 0x800) != 0 )
    {
      this = *(_QWORD *)(v1 + 48);
      if ( this )
      {
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
        v2 = *(_DWORD *)(v1 + 64);
      }
    }
    if ( (v2 & 0x1000) != 0 )
    {
      this = *(_QWORD *)(v1 + 56);
      if ( this )
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
    }
  }
  *(_DWORD *)(v1 + 64) = 0;
  return this;
}

