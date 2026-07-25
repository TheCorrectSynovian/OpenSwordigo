/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334240
 * Mangled: _ZN5Caver5Proto14SkillComponent5ClearEv
 * Demangled: Caver::Proto::SkillComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F3B50  Caver::Proto::Vector2::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 10
 *   insn=0x000000000033424C string=0x0000000000334250 "h"
 *   insn=0x0000000000334250 string=0x0000000000334254 "H"
 *   insn=0x0000000000334260 string=0x0000000000334264 "`\n@"
 *   insn=0x0000000000334264 string=0x0000000000334268 ")"
 *   insn=0x0000000000334270 string=0x0000000000334274 ""
 *   insn=0x0000000000334284 string=0x0000000000334288 "h"@"
 *   insn=0x000000000033428C string=0x0000000000334290 "`"
 *   insn=0x0000000000334290 string=0x0000000000334294 "@"
 *   insn=0x0000000000334294 string=0x0000000000334298 "."
 *   insn=0x0000000000334298 string=0x00000000001F3B50 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkillComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 32);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::SkillComponent::_default_cast_object_template_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 32);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( this )
        this = Caver::Proto::Vector2::Clear((Caver::Proto::Vector2 *)this);
    }
  }
  *(_DWORD *)(v1 + 32) = 0;
  return this;
}

