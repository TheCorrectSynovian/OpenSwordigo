/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E4454
 * Mangled: _ZNK5Caver5Proto11GuideTarget3NewEv
 * Demangled: Caver::Proto::GuideTarget::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 17
 *   insn=0x00000000002E445C string=0x00000000002E4460 "`D"
 *   insn=0x00000000002E4460 string=0x00000000002E4464 "@"
 *   insn=0x00000000002E4460 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E4464 string=0x00000000002E4468 ""
 *   insn=0x00000000002E446C string=0x00000000002E4470 "H"
 *   insn=0x00000000002E4470 string=0x00000000002E4474 " "
 *   insn=0x00000000002E4474 string=0x00000000002E4478 ""
 *   insn=0x00000000002E4480 string=0x00000000002E4484 " "
 *   insn=0x00000000002E4484 string=0x00000000002E4488 ""
 *   insn=0x00000000002E4494 string=0x00000000002E4498 " "
 *   insn=0x00000000002E4498 string=0x00000000002E449C "EF"
 *   insn=0x00000000002E449C string=0x00000000002E44A0 "A"
 *   insn=0x00000000002E44A0 string=0x00000000002E44A4 ""
 *   insn=0x00000000002E44A4 string=0x00000000002E44A8 " "
 *   insn=0x00000000002E44A8 string=0x00000000002E44AC ""
 *   insn=0x00000000002E44B0 string=0x00000000002E44B4 " "
 *   insn=0x00000000002E44B4 string=0x00000000002E44B8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::GuideTarget::New(Caver::Proto::GuideTarget *this)
{
  __int64 v1; // x0
  __int128 v2; // q1
  __n128 result; // q0

  v1 = operator new(0x78u);
  *(_QWORD *)(v1 + 56) = v1 + 80;
  *(_DWORD *)(v1 + 72) = 4;
  *(_QWORD *)&v2 = &Caver::Proto::GuideTarget::_default_name_;
  *(_QWORD *)(v1 + 64) = 0;
  *(_QWORD *)(v1 + 8) = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::GuideTarget::_default_object_identifier_;
  *(_QWORD *)v1 = off_6C6A48;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::GuideTarget::_default_level_name_;
  *(_BYTE *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 112) = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::GuideTarget::_default_carry_object_identifier_;
  *(_OWORD *)(v1 + 16) = v2;
  *(__n128 *)(v1 + 32) = result;
  return result;
}

