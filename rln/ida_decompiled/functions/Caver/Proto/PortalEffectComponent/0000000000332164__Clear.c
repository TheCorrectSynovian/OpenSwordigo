/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000332164
 * Mangled: _ZN5Caver5Proto21PortalEffectComponent5ClearEv
 * Demangled: Caver::Proto::PortalEffectComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *   0x00000000002034E0  Caver::Proto::Vector3::Clear(void)
 *
 * Referenced strings: 9
 *   insn=0x0000000000332170 string=0x0000000000332174 "h"
 *   insn=0x0000000000332174 string=0x0000000000332178 "h"
 *   insn=0x0000000000332180 string=0x0000000000332184 "`"
 *   insn=0x0000000000332184 string=0x0000000000332188 "`"
 *   insn=0x0000000000332188 string=0x000000000033218C "I&"
 *   insn=0x000000000033218C string=0x0000000000332190 "h*@"
 *   insn=0x000000000033218C string=0x00000000001FBAB0 "0'"
 *   insn=0x0000000000332194 string=0x0000000000332198 "`"
 *   insn=0x0000000000332198 string=0x000000000033219C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalEffectComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 40);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 16) = 0;
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(this + 24);
      if ( this )
      {
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
        v2 = *(_DWORD *)(v1 + 40);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( this )
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
    }
  }
  *(_DWORD *)(v1 + 40) = 0;
  return this;
}

