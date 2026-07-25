/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032FA08
 * Mangled: _ZN5Caver5Proto31ItemDropComponent_ItemDropEntry5ClearEv
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 10
 *   insn=0x000000000032FA14 string=0x000000000032FA18 "h"
 *   insn=0x000000000032FA18 string=0x000000000032FA1C "H"
 *   insn=0x000000000032FA20 string=0x000000000032FA50 "h"
 *   insn=0x000000000032FA24 string=0x000000000032FA28 "`\n@"
 *   insn=0x000000000032FA28 string=0x000000000032FA2C ")B"
 *   insn=0x000000000032FA34 string=0x000000000032FA38 ""
 *   insn=0x000000000032FA48 string=0x000000000032FA4C "h.@"
 *   insn=0x000000000032FA54 string=0x000000000032FA58 "`"
 *   insn=0x000000000032FA58 string=0x000000000032FA5C ""
 *   insn=0x000000000032FA64 string=0x000000000032FA68 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 44);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 44) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::ItemDropComponent_ItemDropEntry::_default_template_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 44);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::ItemDropComponent_ItemDropEntry::_default_item_identifier_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_DWORD *)(v1 + 40) = 0;
    *(_QWORD *)(v1 + 32) = 0;
  }
  *(_DWORD *)(v1 + 44) = 0;
  return this;
}

