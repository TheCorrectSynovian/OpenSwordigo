/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003306B4
 * Mangled: _ZN5Caver5Proto17ItemDropComponent5ClearEv
 * Demangled: Caver::Proto::ItemDropComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 19
 *   insn=0x00000000003306C0 string=0x00000000003306C4 "hrA9("
 *   insn=0x00000000003306C4 string=0x00000000003306C8 "("
 *   insn=0x00000000003306C8 string=0x000000000033072C "h*@"
 *   insn=0x00000000003306CC string=0x00000000003306FC "h"
 *   insn=0x00000000003306D0 string=0x00000000003306D4 "`\n@"
 *   insn=0x00000000003306D4 string=0x00000000003306D8 ")mF"
 *   insn=0x00000000003306E0 string=0x00000000003306E4 ""
 *   insn=0x00000000003306F0 string=0x00000000003306F4 "q"
 *   insn=0x00000000003306F4 string=0x00000000003306F8 "h^@"
 *   insn=0x0000000000330700 string=0x0000000000330704 "`"
 *   insn=0x0000000000330704 string=0x0000000000330708 ""
 *   insn=0x0000000000330710 string=0x0000000000330714 ""
 *   insn=0x0000000000330720 string=0x0000000000330724 "e"
 *   insn=0x0000000000330730 string=0x0000000000330734 "k"
 *   insn=0x0000000000330738 string=0x000000000033073C "h"
 *   insn=0x0000000000330740 string=0x0000000000330744 ""
 *   insn=0x0000000000330744 string=0x0000000000330748 ""
 *   insn=0x000000000033074C string=0x0000000000330750 "h*"
 *   insn=0x0000000000330758 string=0x000000000033075C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ItemDropComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  __int64 v4; // x0

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 92);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 92) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::ItemDropComponent::_default_item_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 92);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::ItemDropComponent::_default_item_identifier_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_WORD *)(v1 + 88) = 0;
  }
  if ( *(int *)(v1 + 40) >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 32) + 8 * v3);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      ++v3;
    }
    while ( v3 < *(int *)(v1 + 40) );
  }
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 92) = 0;
  return this;
}

