/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E44D4
 * Mangled: _ZN5Caver5Proto11GuideTarget5ClearEv
 * Demangled: Caver::Proto::GuideTarget::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 29
 *   insn=0x00000000002E44E0 string=0x00000000002E44E4 "h"
 *   insn=0x00000000002E44E4 string=0x00000000002E44E8 "H"
 *   insn=0x00000000002E44E8 string=0x00000000002E45B0 "hB@"
 *   insn=0x00000000002E44F0 string=0x00000000002E44F4 "\t "
 *   insn=0x00000000002E44F4 string=0x00000000002E44F8 "`\n@"
 *   insn=0x00000000002E44F8 string=0x00000000002E44FC ")"
 *   insn=0x00000000002E4504 string=0x00000000002E4508 ""
 *   insn=0x00000000002E4518 string=0x00000000002E451C "hr@"
 *   insn=0x00000000002E4520 string=0x00000000002E4524 "\t "
 *   insn=0x00000000002E4524 string=0x00000000002E4528 "`"
 *   insn=0x00000000002E4528 string=0x00000000002E452C ")"
 *   insn=0x00000000002E4534 string=0x00000000002E4538 ""
 *   insn=0x00000000002E4548 string=0x00000000002E454C "hr@"
 *   insn=0x00000000002E4550 string=0x00000000002E4554 "\t "
 *   insn=0x00000000002E4550 string=0x00000000002E4580 "h"
 *   insn=0x00000000002E4554 string=0x00000000002E4558 "`"
 *   insn=0x00000000002E4558 string=0x00000000002E455C ")"
 *   insn=0x00000000002E4564 string=0x00000000002E4568 ""
 *   insn=0x00000000002E4578 string=0x00000000002E457C "hr@"
 *   insn=0x00000000002E4580 string=0x00000000002E4584 " "
 *   insn=0x00000000002E4584 string=0x00000000002E4588 "`"
 *   insn=0x00000000002E4588 string=0x00000000002E458C ""
 *   insn=0x00000000002E4594 string=0x00000000002E4598 ""
 *   insn=0x00000000002E45B4 string=0x00000000002E45B8 "k"
 *   insn=0x00000000002E45BC string=0x00000000002E45C0 "h"
 *   insn=0x00000000002E45C4 string=0x00000000002E45C8 ""
 *   insn=0x00000000002E45C8 string=0x00000000002E45CC ""
 *   insn=0x00000000002E45D0 string=0x00000000002E45D4 "hB"
 *   insn=0x00000000002E45DC string=0x00000000002E45E0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GuideTarget::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  __int64 v4; // x0

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 112);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::GuideTarget::_default_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 112);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::GuideTarget::_default_level_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 112);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( (__int64 *)this != &Caver::Proto::GuideTarget::_default_object_identifier_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 112);
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      this = *(_QWORD *)(v1 + 40);
      if ( (__int64 *)this != &Caver::Proto::GuideTarget::_default_carry_object_identifier_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_BYTE *)(v1 + 48) = 0;
  }
  if ( *(int *)(v1 + 64) >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 56) + 8 * v3);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      ++v3;
    }
    while ( v3 < *(int *)(v1 + 64) );
  }
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 112) = 0;
  return this;
}

