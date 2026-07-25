/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DFEAC
 * Mangled: _ZN5Caver5Proto4Item5ClearEv
 * Demangled: Caver::Proto::Item::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 27
 *   insn=0x00000000002DFEB8 string=0x00000000002DFEBC "hB@"
 *   insn=0x00000000002DFEC8 string=0x00000000002DFECC "i"
 *   insn=0x00000000002DFED0 string=0x00000000002DFED4 ") "
 *   insn=0x00000000002DFED4 string=0x00000000002DFED8 "`\n@"
 *   insn=0x00000000002DFED8 string=0x00000000002DFEDC ")ED"
 *   insn=0x00000000002DFEE4 string=0x00000000002DFEE8 ""
 *   insn=0x00000000002DFEF4 string=0x00000000002DFEF8 "p#\n"
 *   insn=0x00000000002DFEF8 string=0x00000000002DFEFC "hB@"
 *   insn=0x00000000002DFF00 string=0x00000000002DFF04 ") "
 *   insn=0x00000000002DFF04 string=0x00000000002DFF08 "`"
 *   insn=0x00000000002DFF08 string=0x00000000002DFF0C ")"
 *   insn=0x00000000002DFF14 string=0x00000000002DFF18 ""
 *   insn=0x00000000002DFF24 string=0x00000000002DFF28 "d#\n"
 *   insn=0x00000000002DFF28 string=0x00000000002DFF2C "hB@"
 *   insn=0x00000000002DFF30 string=0x00000000002DFF34 ") "
 *   insn=0x00000000002DFF34 string=0x00000000002DFF38 "`"
 *   insn=0x00000000002DFF38 string=0x00000000002DFF3C ")"
 *   insn=0x00000000002DFF44 string=0x00000000002DFF48 ""
 *   insn=0x00000000002DFF54 string=0x00000000002DFF58 "X#\n"
 *   insn=0x00000000002DFF58 string=0x00000000002DFF5C "hB@"
 *   insn=0x00000000002DFF60 string=0x00000000002DFF64 "I "
 *   insn=0x00000000002DFF64 string=0x00000000002DFF68 "`"
 *   insn=0x00000000002DFF68 string=0x00000000002DFF6C ")\tG"
 *   insn=0x00000000002DFF74 string=0x00000000002DFF78 ""
 *   insn=0x00000000002DFF84 string=0x00000000002DFF88 "L#\n"
 *   insn=0x00000000002DFF88 string=0x00000000002DFF8C "hB@"
 *   insn=0x00000000002DFF98 string=0x00000000002DFF9C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Item::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  v2 = *(_DWORD *)(this + 64);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 1;
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::Item::_default_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 64);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::Item::_default_title_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 64);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( (__int64 *)this != &Caver::Proto::Item::_default_short_description_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 64);
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      this = *(_QWORD *)(v1 + 40);
      if ( (__int64 *)this != &Caver::Proto::Item::_default_description_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 64);
      }
    }
    *(_BYTE *)(v1 + 48) = 0;
    *(_DWORD *)(v1 + 52) = 0;
    *(_DWORD *)(v1 + 56) = 0;
  }
  if ( (v2 & 0xFF00) != 0 )
    *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 64) = 0;
  return this;
}

