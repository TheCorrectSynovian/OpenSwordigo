/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2764
 * Mangled: _ZN6google8protobuf8internal20RepeatedPtrFieldBase4SwapEPS2_
 * Demangled: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Callers: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 25
 *   insn=0x00000000004E276C string=0x00000000004E2770 "H"
 *   insn=0x00000000004E2770 string=0x00000000004E2774 "\t"
 *   insn=0x00000000004E277C string=0x00000000004E2780 "\t(@"
 *   insn=0x00000000004E2780 string=0x00000000004E2784 ""
 *   insn=0x00000000004E2790 string=0x00000000004E2794 ","
 *   insn=0x00000000004E2798 string=0x00000000004E279C ","
 *   insn=0x00000000004E27A0 string=0x00000000004E27A4 ","
 *   insn=0x00000000004E27A8 string=0x00000000004E27AC " "
 *   insn=0x00000000004E27B0 string=0x00000000004E27B4 " "
 *   insn=0x00000000004E27B8 string=0x00000000004E27BC ")("
 *   insn=0x00000000004E27BC string=0x00000000004E27C0 "+"
 *   insn=0x00000000004E27C4 string=0x00000000004E27C8 "*`"
 *   insn=0x00000000004E27C8 string=0x00000000004E27CC " "
 *   insn=0x00000000004E27D0 string=0x00000000004E27D4 " "
 *   insn=0x00000000004E27D4 string=0x00000000004E27D8 ""
 *   insn=0x00000000004E27DC string=0x00000000004E27E0 "`"
 *   insn=0x00000000004E27E0 string=0x00000000004E27E4 "@"
 *   insn=0x00000000004E27E4 string=0x00000000004E27E8 "?"
 *   insn=0x00000000004E27E4 string=0x00000000004E280C ""
 *   insn=0x00000000004E27EC string=0x00000000004E27F0 ""
 *   insn=0x00000000004E27EC string=0x00000000004E281C "*"
 *   insn=0x00000000004E27F8 string=0x00000000004E27FC "A"
 *   insn=0x00000000004E280C string=0x00000000004E2810 ")"
 *   insn=0x00000000004E2810 string=0x00000000004E2814 "?"
 *   insn=0x00000000004E2824 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 **__fastcall google::protobuf::internal::RepeatedPtrFieldBase::Swap(__int64 **result, __int64 **a2)
{
  __int64 *v2; // x9
  __int64 v3; // x10
  int v4; // w11
  __int64 *v5; // x11
  __int128 v6; // [xsp+0h] [xbp-30h]
  __int128 v7; // [xsp+10h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = *result;
  v3 = (__int64)result[1];
  v4 = *((_DWORD *)result + 4);
  v7 = *(_OWORD *)(result + 5);
  v6 = *(_OWORD *)(result + 3);
  *result = *a2;
  result[1] = a2[1];
  *((_DWORD *)result + 4) = *((_DWORD *)a2 + 4);
  *(_OWORD *)(result + 5) = *(_OWORD *)(a2 + 5);
  *(_OWORD *)(result + 3) = *(_OWORD *)(a2 + 3);
  *a2 = v2;
  a2[1] = (__int64 *)v3;
  *((_DWORD *)a2 + 4) = v4;
  *(_OWORD *)(a2 + 5) = v7;
  *(_OWORD *)(a2 + 3) = v6;
  v5 = (__int64 *)(result + 3);
  if ( *result != (__int64 *)(a2 + 3) )
  {
    if ( v2 != v5 )
      return result;
LABEL_5:
    *a2 = (__int64 *)(a2 + 3);
    return result;
  }
  *result = v5;
  if ( *a2 == v5 )
    goto LABEL_5;
  return result;
}

