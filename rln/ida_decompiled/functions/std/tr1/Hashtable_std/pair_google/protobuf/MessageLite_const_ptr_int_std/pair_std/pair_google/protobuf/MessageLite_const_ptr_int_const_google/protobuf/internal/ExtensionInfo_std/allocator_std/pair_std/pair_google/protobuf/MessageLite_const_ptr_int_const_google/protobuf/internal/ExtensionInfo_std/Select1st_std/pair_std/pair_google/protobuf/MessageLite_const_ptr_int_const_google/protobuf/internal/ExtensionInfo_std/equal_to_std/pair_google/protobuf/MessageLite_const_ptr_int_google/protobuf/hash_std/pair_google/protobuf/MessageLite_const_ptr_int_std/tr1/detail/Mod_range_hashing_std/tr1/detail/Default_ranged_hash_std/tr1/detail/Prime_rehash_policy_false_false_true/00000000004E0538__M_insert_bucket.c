/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E0538
 * Mangled: _ZNSt3tr110_HashtableISt4pairIPKN6google8protobuf11MessageLiteEiES1_IKS7_NS3_8internal13ExtensionInfoEESaISB_ESt10_Select1stISB_ESt8equal_toIS7_ENS3_4hashIS7_EENS_8__detail18_Mod_range_hashingENSJ_20_Default_ranged_hashENSJ_20_Prime_rehash_policyELb0ELb0ELb1EE16_M_insert_bucketERKSB_mm
 * Demangled: std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_insert_bucket(std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo> const&,ulong,ulong)
 *
 * Callers: 1
 *   0x00000000001FC570  std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_insert_bucket(std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo> const&,ulong,ulong)
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F81A0  std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_rehash(ulong)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 69
 *   insn=0x00000000004E0550 string=0x00000000004E0554 "h"
 *   insn=0x00000000004E0554 string=0x00000000004E0558 "i"
 *   insn=0x00000000004E0560 string=0x00000000004E0564 "\n"
 *   insn=0x00000000004E0564 string=0x00000000004E0568 "_"
 *   insn=0x00000000004E0570 string=0x00000000004E0574 "i\n@"
 *   insn=0x00000000004E0574 string=0x00000000004E0578 "`"@"
 *   insn=0x00000000004E0580 string=0x00000000004E0584 "!(""
 *   insn=0x00000000004E0584 string=0x00000000004E0588 "!"
 *   insn=0x00000000004E0588 string=0x00000000004E058C """
 *   insn=0x00000000004E058C string=0x00000000004E0590 "  ""
 *   insn=0x00000000004E0594 string=0x00000000004E0598 "c&@"
 *   insn=0x00000000004E0598 string=0x00000000004E059C "("
 *   insn=0x00000000004E059C string=0x00000000004E05A0 ""
 *   insn=0x00000000004E05A0 string=0x00000000004E05A4 "\t&"
 *   insn=0x00000000004E05A4 string=0x00000000004E05A8 "b""
 *   insn=0x00000000004E05A8 string=0x00000000004E05AC "  ""
 *   insn=0x00000000004E05AC string=0x00000000004E05B0 "AL!"
 *   insn=0x00000000004E05B0 string=0x00000000004E05B4 "*"
 *   insn=0x00000000004E05B4 string=0x00000000004E05B8 "\n"
 *   insn=0x00000000004E05B8 string=0x00000000004E05BC "l"
 *   insn=0x00000000004E05BC string=0x00000000004E05C0 ")"
 *   insn=0x00000000004E05C0 string=0x00000000004E05C4 ")"
 *   insn=0x00000000004E05C8 string=0x00000000004E05CC "  ""
 *   insn=0x00000000004E05CC string=0x00000000004E05D0 ")"
 *   insn=0x00000000004E05D0 string=0x00000000004E05D4 "h"
 *   insn=0x00000000004E05D4 string=0x00000000004E05D8 "?"
 *   insn=0x00000000004E05DC string=0x00000000004E05E0 "\t"
 *   insn=0x00000000004E05E4 string=0x00000000004E05E8 "!"
 *   insn=0x00000000004E05EC string=0x00000000004E05F0 "\t"
 *   insn=0x00000000004E05F0 string=0x00000000004E05F4 "i"
 *   insn=0x00000000004E05F8 string=0x00000000004E05FC ""
 *   insn=0x00000000004E060C string=0x00000000004E0610 ""
 *   insn=0x00000000004E0610 string=0x00000000004E0614 "h"
 *   insn=0x00000000004E0620 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004E0644 string=0x00000000004E065C "h"
 *   insn=0x00000000004E0650 string=0x00000000001F81A0 "0'"
 *   insn=0x00000000004E0664 string=0x00000000004E0668 "\nii"
 *   insn=0x00000000004E0668 string=0x00000000004E066C "\n"
 *   insn=0x00000000004E0670 string=0x00000000004E0674 "h"
 *   insn=0x00000000004E0674 string=0x00000000004E0678 "j"
 *   insn=0x00000000004E0678 string=0x00000000004E067C ""
 *   insn=0x00000000004E067C string=0x00000000004E0680 "h"
 *   insn=0x00000000004E0690 string=0x00000000004E0694 "A"
 *   insn=0x00000000004E06A0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004E06A8 string=0x00000000004E06AC "1"
 *   insn=0x00000000004E06A8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004E06B4 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004E06BC string=0x00000000004E06C0 "#"
 *   insn=0x00000000004E06D4 string=0x00000000004E06D8 "h"
 *   insn=0x00000000004E06D8 string=0x00000000004E06DC "\t"
 *   insn=0x00000000004E06F0 string=0x00000000004E06F4 "b"
 *   insn=0x00000000004E0704 string=0x00000000004E0708 "Nm"
 *   insn=0x00000000004E0708 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000004E0714 string=0x00000000004E0718 "("
 *   insn=0x00000000004E0724 string=0x00000000004E0760 ""
 *   insn=0x00000000004E0728 string=0x00000000004E072C "M"
 *   insn=0x00000000004E072C string=0x00000000004E0730 "N\t"
 *   insn=0x00000000004E0730 string=0x00000000004E0734 "l"
 *   insn=0x00000000004E0738 string=0x00000000004E073C "k"
 *   insn=0x00000000004E073C string=0x00000000004E0740 "k"
 *   insn=0x00000000004E0740 string=0x00000000004E0744 "l\t"
 *   insn=0x00000000004E0748 string=0x00000000004E074C "k"
 *   insn=0x00000000004E0750 string=0x00000000004E0754 "L"
 *   insn=0x00000000004E0760 string=0x00000000004E0764 "j"
 *   insn=0x00000000004E0764 string=0x00000000004E0768 "\n"
 *   insn=0x00000000004E0768 string=0x00000000004E076C ")"
 *   insn=0x00000000004E0768 string=0x00000000004E0728 "L"
 *   insn=0x00000000004E076C string=0x00000000004E0770 "?"
 *   insn=0x00000000004E0770 string=0x00000000004E0774 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_insert_bucket(
        __int64 a1,
        __int128 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // x8
  float v9; // s0
  float v10; // s1
  float v11; // s2
  unsigned __int64 *v12; // x8
  unsigned __int64 v13; // x9
  float v14; // s2
  unsigned __int64 v15; // x10
  unsigned __int64 *v16; // x11
  unsigned __int64 *v17; // x11
  unsigned __int64 v18; // t1
  char v19; // w25
  unsigned __int64 v20; // x23
  __int64 v21; // x24
  __int128 v22; // q0
  __int64 v23; // x8
  __int64 result; // x0

  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 + 1 <= *(_QWORD *)(a1 + 40) )
  {
    v20 = 0;
LABEL_12:
    v19 = 1;
    goto LABEL_13;
  }
  v9 = *(float *)(a1 + 32);
  v10 = (float)((float)v5 + 1.0) / v9;
  v11 = (float)*(unsigned __int64 *)(a1 + 16);
  if ( v10 <= v11 )
  {
    v20 = 0;
    *(_QWORD *)(a1 + 40) = vcvtps_u32_f32(v9 * v11);
    goto LABEL_12;
  }
  v12 = (unsigned __int64 *)&unk_59D260;
  v13 = 304;
  v14 = *(float *)(a1 + 36) * v11;
  if ( v10 < v14 )
    v10 = v14;
  do
  {
    v15 = v13 >> 1;
    v16 = &v12[v13 >> 1];
    v18 = *v16;
    v17 = v16 + 1;
    v13 = v13 - 1 - (v13 >> 1);
    if ( v10 > (float)v18 )
      v12 = v17;
    else
      v13 = v15;
  }
  while ( (__int64)v13 > 0 );
  v19 = 0;
  *(_QWORD *)(a1 + 40) = vcvtps_u32_f32(v9 * (float)*v12);
  v20 = *v12;
LABEL_13:
  v21 = operator new(0x38u);
  *(_OWORD *)(v21 + 32) = a2[2];
  *(_OWORD *)(v21 + 16) = a2[1];
  v22 = *a2;
  *(_QWORD *)(v21 + 48) = 0;
  *(_OWORD *)v21 = v22;
  if ( (v19 & 1) == 0 )
  {
    std::tr1::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::_Select1st<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::tr1::__detail::_Mod_range_hashing,std::tr1::__detail::_Default_ranged_hash,std::tr1::__detail::_Prime_rehash_policy,false,false,true>::_M_rehash();
    a3 = a4 % v20;
  }
  v23 = *(_QWORD *)(a1 + 8);
  result = v21;
  *(_QWORD *)(v21 + 48) = *(_QWORD *)(v23 + 8 * a3);
  *(_QWORD *)(v23 + 8 * a3) = v21;
  ++*(_QWORD *)(a1 + 24);
  return result;
}

