/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030EF78
 * Mangled: _ZN5Caver5Proto29ObjectLinkControllerComponent5ClearEv
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002034E0  Caver::Proto::Vector3::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 22
 *   insn=0x000000000030EF84 string=0x000000000030EF88 "h"
 *   insn=0x000000000030EF94 string=0x000000000030EF98 "`\n@"
 *   insn=0x000000000030EF98 string=0x000000000030EF9C ")"
 *   insn=0x000000000030EFA4 string=0x000000000030EFA8 ""
 *   insn=0x000000000030EFB4 string=0x000000000030EFB8 "@g\t"
 *   insn=0x000000000030EFB8 string=0x000000000030EFBC "h:@"
 *   insn=0x000000000030EFC4 string=0x000000000030EFC8 "`"
 *   insn=0x000000000030EFC8 string=0x000000000030EFCC ")"
 *   insn=0x000000000030EFD4 string=0x000000000030EFD8 ""
 *   insn=0x000000000030EFE4 string=0x000000000030EFE8 "4g\t"
 *   insn=0x000000000030EFE8 string=0x000000000030EFEC "h:@"
 *   insn=0x000000000030EFF0 string=0x000000000030EFF4 "`"
 *   insn=0x000000000030EFF4 string=0x000000000030EFF8 "`"
 *   insn=0x000000000030EFF8 string=0x000000000030EFFC "9"
 *   insn=0x000000000030EFFC string=0x000000000030F000 "h:@"
 *   insn=0x000000000030F004 string=0x000000000030F008 "`"
 *   insn=0x000000000030F008 string=0x000000000030F00C "`"
 *   insn=0x000000000030F00C string=0x000000000030F010 "4"
 *   insn=0x000000000030F010 string=0x000000000030F014 "h:@"
 *   insn=0x000000000030F018 string=0x000000000030F01C "`"
 *   insn=0x000000000030F01C string=0x000000000030F020 "@"
 *   insn=0x000000000030F020 string=0x000000000030F024 "/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLinkControllerComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 56);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 56) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::ObjectLinkControllerComponent::_default_target_object_identifier_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 56);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::ObjectLinkControllerComponent::_default_target_bone_identifier_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 56);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( this )
      {
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
        v2 = *(_DWORD *)(v1 + 56);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 40);
      if ( this )
      {
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
        v2 = *(_DWORD *)(v1 + 56);
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      this = *(_QWORD *)(v1 + 48);
      if ( this )
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
    }
  }
  *(_DWORD *)(v1 + 56) = 0;
  return this;
}

