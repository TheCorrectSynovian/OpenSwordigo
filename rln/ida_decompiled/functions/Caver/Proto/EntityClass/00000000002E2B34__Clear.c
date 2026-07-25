/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E2B34
 * Mangled: _ZN5Caver5Proto11EntityClass5ClearEv
 * Demangled: Caver::Proto::EntityClass::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 15
 *   insn=0x00000000002E2B40 string=0x00000000002E2B44 "h"
 *   insn=0x00000000002E2B4C string=0x00000000002E2B50 "\t "
 *   insn=0x00000000002E2B4C string=0x00000000002E2B7C "h"
 *   insn=0x00000000002E2B50 string=0x00000000002E2B54 "`\n@"
 *   insn=0x00000000002E2B54 string=0x00000000002E2B58 ")F"
 *   insn=0x00000000002E2B60 string=0x00000000002E2B64 ""
 *   insn=0x00000000002E2B70 string=0x00000000002E2B74 "Q"
 *   insn=0x00000000002E2B74 string=0x00000000002E2B78 "h.@"
 *   insn=0x00000000002E2B7C string=0x00000000002E2B80 " "
 *   insn=0x00000000002E2B7C string=0x00000000002E2BA8 " "
 *   insn=0x00000000002E2B80 string=0x00000000002E2B84 "`"
 *   insn=0x00000000002E2B84 string=0x00000000002E2B88 "}C"
 *   insn=0x00000000002E2B90 string=0x00000000002E2B94 ""
 *   insn=0x00000000002E2BA0 string=0x00000000002E2BA4 "E"
 *   insn=0x00000000002E2BB0 string=0x00000000002E2BB4 "h""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityClass::Clear(__int64 this)
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
      if ( (__int64 *)this != &Caver::Proto::EntityClass::_default_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 44);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::EntityClass::_default_title_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_DWORD *)(v1 + 36) = 0;
    *(_DWORD *)(v1 + 40) = 0;
    *(_DWORD *)(v1 + 32) = 16843008;
  }
  *(_DWORD *)(v1 + 44) = 0;
  return this;
}

