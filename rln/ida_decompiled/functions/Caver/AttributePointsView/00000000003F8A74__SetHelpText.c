/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F8A74
 * Mangled: _ZN5Caver19AttributePointsView11SetHelpTextERKSs
 * Demangled: Caver::AttributePointsView::SetHelpText(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F8E60  Caver::AttributePointsView::SetHelpText(std::string const&)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 12
 *   insn=0x00000000003F8A80 string=0x00000000003F8A84 "`"
 *   insn=0x00000000003F8A84 string=0x00000000003F8A88 ""
 *   insn=0x00000000003F8A88 string=0x00000000003F8A8C "h"
 *   insn=0x00000000003F8A8C string=0x00000000003F8A90 "i"
 *   insn=0x00000000003F8A90 string=0x00000000003F8A94 "J"
 *   insn=0x00000000003F8A94 string=0x00000000003F8A98 "A5G"
 *   insn=0x00000000003F8A94 string=0x0000000000583734 "o"
 *   insn=0x00000000003F8A98 string=0x00000000003F8A9C ""
 *   insn=0x00000000003F8AA4 string=0x00000000003F8AA8 "("
 *   insn=0x00000000003F8AA8 string=0x00000000003F8AAC "`"
 *   insn=0x00000000003F8AB4 string=0x00000000003F8AB8 "h"
 *   insn=0x00000000003F8AC8 string=0x00000000003F8ACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AttributePointsView::SetHelpText(__int64 a1)
{
  __int64 result; // x0

  result = sub_56A6A8(a1 + 360);
  *(_BYTE *)(*(_QWORD *)(a1 + 344) + 228LL) = *(_QWORD *)(*(_QWORD *)(a1 + 360) - 24LL) == 0;
  if ( *(float *)(a1 + 140) > 0.001 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  return result;
}

