/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032D14C
 * Mangled: _ZN5Caver5Proto15PortalComponent5ClearEv
 * Demangled: Caver::Proto::PortalComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 10
 *   insn=0x000000000032D158 string=0x000000000032D15C "h"
 *   insn=0x000000000032D15C string=0x000000000032D160 "H"
 *   insn=0x000000000032D168 string=0x000000000032D198 "h"
 *   insn=0x000000000032D16C string=0x000000000032D170 "`\n@"
 *   insn=0x000000000032D170 string=0x000000000032D174 ")5E"
 *   insn=0x000000000032D17C string=0x000000000032D180 ""
 *   insn=0x000000000032D190 string=0x000000000032D194 "h&@"
 *   insn=0x000000000032D19C string=0x000000000032D1A0 "`"
 *   insn=0x000000000032D1A0 string=0x000000000032D1A4 "QA"
 *   insn=0x000000000032D1AC string=0x000000000032D1B0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 36);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::PortalComponent::_default_destination_scene_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 36);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::PortalComponent::_default_spawn_point_name_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_BYTE *)(v1 + 32) = 0;
  }
  *(_DWORD *)(v1 + 36) = 0;
  return this;
}

