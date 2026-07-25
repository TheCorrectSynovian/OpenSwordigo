/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036E71C
 * Mangled: _ZThn104_N5Caver22MainMenuViewController23ChooseAgeViewAgeChangedEPNS_13ChooseAgeViewE
 * Demangled: `non-virtual thunk to'Caver::MainMenuViewController::ChooseAgeViewAgeChanged(Caver::ChooseAgeView *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x000000000036E720 string=0x000000000036E724 ")"
 *   insn=0x000000000036E724 string=0x000000000036E728 "\t"
 *   insn=0x000000000036E728 string=0x000000000036E72C ""
 *   insn=0x000000000036E72C string=0x000000000036E730 "?"
 *   insn=0x000000000036E738 string=0x000000000036E73C "("
 *   insn=0x000000000036E73C string=0x000000000036E740 "*x"
 *   insn=0x000000000036E740 string=0x000000000036E744 ""
 *   insn=0x000000000036E748 string=0x000000000036E74C " "
 *   insn=0x000000000036E74C string=0x000000000036E750 "A"
 *   insn=0x000000000036E750 string=0x000000000036E758 ""
 *   insn=0x000000000036E75C string=0x000000000036E760 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MainMenuViewController::ChooseAgeViewAgeChanged(
        __int64 result,
        __int64 a2)
{
  __int64 v2; // x8
  int v3; // w9
  int v4; // w1
  unsigned int v5; // w8

  v2 = *(_QWORD *)(result + 128);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a2 + 236);
    *(_DWORD *)(result + 180) = v3;
    result = **(_QWORD **)(v2 + 344);
    v4 = *(_DWORD *)(result + 288);
    v5 = v4 | 2;
    if ( v3 )
      v5 = v4 & 0xFFFFFFFD;
    *(_DWORD *)(result + 288) = v5;
    if ( v5 != v4 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 304LL))(result);
  }
  return result;
}

