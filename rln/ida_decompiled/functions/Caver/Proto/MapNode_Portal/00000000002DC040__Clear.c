/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DC040
 * Mangled: _ZN5Caver5Proto14MapNode_Portal5ClearEv
 * Demangled: Caver::Proto::MapNode_Portal::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 9
 *   insn=0x00000000002DC04C string=0x00000000002DC050 "h"
 *   insn=0x00000000002DC050 string=0x00000000002DC054 ""
 *   insn=0x00000000002DC054 string=0x00000000002DC058 "h"
 *   insn=0x00000000002DC058 string=0x00000000002DC05C "H "
 *   insn=0x00000000002DC058 string=0x00000000002DC084 "h"
 *   insn=0x00000000002DC05C string=0x00000000002DC060 "`\n@"
 *   insn=0x00000000002DC060 string=0x00000000002DC064 ""
 *   insn=0x00000000002DC06C string=0x00000000002DC070 ""
 *   insn=0x00000000002DC08C string=0x00000000002DC090 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapNode_Portal::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( *(_BYTE *)(this + 36) )
  {
    if ( (*(_BYTE *)(this + 36) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::MapNode_Portal::_default_destination_name_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_BYTE *)(v1 + 32) = 0;
    *(_QWORD *)(v1 + 24) = 1;
  }
  *(_DWORD *)(v1 + 36) = 0;
  return this;
}

