/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302BD4
 * Mangled: _ZN5Caver5Proto15SpriteComponent5ClearEv
 * Demangled: Caver::Proto::SpriteComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 7
 *   insn=0x0000000000302BE0 string=0x0000000000302BE4 "hb@9h"
 *   insn=0x0000000000302BE4 string=0x0000000000302BE8 "h"
 *   insn=0x0000000000302BE8 string=0x0000000000302BEC ""
 *   insn=0x0000000000302BEC string=0x0000000000302BF0 "`\n@"
 *   insn=0x0000000000302BF0 string=0x0000000000302BF4 ""
 *   insn=0x0000000000302BFC string=0x0000000000302C00 ""
 *   insn=0x0000000000302C0C string=0x0000000000302C10 "*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpriteComponent::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( (*(_BYTE *)(this + 24) & 1) != 0 )
  {
    this = *(_QWORD *)(this + 16);
    if ( (__int64 *)this != &Caver::Proto::SpriteComponent::_default_texture_name_ )
      this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
  }
  *(_DWORD *)(v1 + 24) = 0;
  return this;
}

