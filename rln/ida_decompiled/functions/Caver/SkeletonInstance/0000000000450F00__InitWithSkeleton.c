/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000450F00
 * Mangled: _ZN5Caver16SkeletonInstance16InitWithSkeletonERKN5boost10shared_ptrIKNS_8SkeletonEEE
 * Demangled: Caver::SkeletonInstance::InitWithSkeleton(boost::shared_ptr<Caver::Skeleton const> const&)
 *
 * Callers: 1
 *   0x00000000001FFE30  Caver::SkeletonInstance::InitWithSkeleton(boost::shared_ptr<Caver::Skeleton const> const&)
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 48
 *   insn=0x0000000000450F10 string=0x0000000000450F14 "U"
 *   insn=0x0000000000450F20 string=0x0000000000450F24 ") @"
 *   insn=0x0000000000450F28 string=0x0000000000450F2C "\n"
 *   insn=0x0000000000450F28 string=0x0000000000450F38 "t"
 *   insn=0x0000000000450F2C string=0x0000000000450F30 "J"
 *   insn=0x0000000000450F30 string=0x0000000000450F34 "\n"
 *   insn=0x0000000000450F38 string=0x0000000000450F3C "i""
 *   insn=0x0000000000450F3C string=0x0000000000450F40 "4"
 *   insn=0x0000000000450F40 string=0x0000000000450F84 "t"
 *   insn=0x0000000000450F44 string=0x0000000000450F48 ""
 *   insn=0x0000000000450F58 string=0x0000000000450F5C "\t@"
 *   insn=0x0000000000450F64 string=0x0000000000450F68 ""
 *   insn=0x0000000000450F78 string=0x0000000000450F7C "@"
 *   insn=0x0000000000450F8C string=0x0000000000450F90 "\n}\t"
 *   insn=0x0000000000450F90 string=0x0000000000450F94 "}"
 *   insn=0x0000000000450F98 string=0x0000000000450F9C "@"
 *   insn=0x0000000000450F9C string=0x0000000000450FA0 "t"
 *   insn=0x0000000000450FA0 string=0x0000000000450FA4 "h\n@"
 *   insn=0x0000000000450FA0 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000450FA4 string=0x0000000000450FA8 "`\n"
 *   insn=0x0000000000450FB4 string=0x0000000000450FB8 "t"
 *   insn=0x0000000000450FB4 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000450FC4 string=0x0000000000450FC8 "j\n@"
 *   insn=0x0000000000450FEC string=0x0000000000450FF0 "mA"
 *   insn=0x0000000000450FF4 string=0x0000000000450FF8 "O"
 *   insn=0x0000000000450FFC string=0x0000000000451000 " )"
 *   insn=0x0000000000451008 string=0x000000000045100C "?"
 *   insn=0x000000000045100C string=0x0000000000451010 "2"
 *   insn=0x0000000000451010 string=0x0000000000451014 "#"
 *   insn=0x0000000000451018 string=0x000000000045101C "r"
 *   insn=0x000000000045101C string=0x0000000000451020 "R"
 *   insn=0x0000000000451024 string=0x0000000000451028 "Rr"
 *   insn=0x0000000000451028 string=0x000000000045102C "R"
 *   insn=0x0000000000451030 string=0x0000000000451034 "A"
 *   insn=0x0000000000451034 string=0x0000000000451038 "? "
 *   insn=0x0000000000451048 string=0x0000000000451058 """
 *   insn=0x0000000000451054 string=0x000000000045109C "AF@"
 *   insn=0x0000000000451058 string=0x000000000045105C " )"
 *   insn=0x000000000045105C string=0x0000000000451060 "C"
 *   insn=0x0000000000451064 string=0x0000000000451068 "r"
 *   insn=0x000000000045107C string=0x0000000000451080 "c "
 *   insn=0x000000000045108C string=0x0000000000451090 "a"
 *   insn=0x0000000000451090 string=0x0000000000451094 "?"
 *   insn=0x0000000000451098 string=0x00000000004510AC ")"
 *   insn=0x00000000004510AC string=0x00000000004510B0 "?"
 *   insn=0x00000000004510B4 string=0x00000000004510B8 "K"
 *   insn=0x00000000004510C8 string=0x00000000004510E0 "|"
 *   insn=0x00000000004510E0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkeletonInstance::InitWithSkeleton(int **a1, int **a2)
{
  int *v3; // x8
  int *v4; // x9
  int *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  int *v8; // x20
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x0
  __int64 v11; // x0
  int *v12; // x8
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  __int64 v15; // x9
  _OWORD *v16; // x15
  int *v17; // x0
  int *v18; // x3
  unsigned __int64 v19; // x17
  int v20; // w2
  unsigned __int64 v21; // x1
  __int128 *v22; // x18
  int *v23; // x0
  __int64 v24; // x3
  __int64 v25; // x3
  __int128 *v26; // x4
  _OWORD *v27; // x5
  __int128 v28; // q3
  __int128 v29; // q4
  int v30; // t1
  __int128 v31; // [xsp+0h] [xbp-70h] BYREF
  _OWORD v32[2]; // [xsp+10h] [xbp-60h] BYREF
  __int64 v33; // [xsp+30h] [xbp-40h]
  int v34; // [xsp+38h] [xbp-38h]
  int v35; // [xsp+3Ch] [xbp-34h]
  __int64 v36; // [xsp+48h] [xbp-28h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *a2;
  v3 = a2[1];
  if ( v3 )
    ++*((_QWORD *)v3 + 1);
  v5 = a1[1];
  *a1 = v4;
  a1[1] = v3;
  if ( v5 )
  {
    v6 = *((_QWORD *)v5 + 1) - 1LL;
    *((_QWORD *)v5 + 1) = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(int *))(*(_QWORD *)v5 + 16LL))(v5);
      v7 = *((_QWORD *)v5 + 2) - 1LL;
      *((_QWORD *)v5 + 2) = v7;
      if ( !v7 )
        (*(void (__fastcall **)(int *))(*(_QWORD *)v5 + 24LL))(v5);
    }
  }
  v8 = *a1;
  v9 = **a1;
  if ( is_mul_ok(v9, 0xDCu) )
    v10 = 220 * v9;
  else
    v10 = -1;
  v11 = operator new[](v10);
  v12 = a1[2];
  a1[2] = (int *)v11;
  if ( v12 )
  {
    operator delete[](v12);
    v8 = *a1;
  }
  v13 = *v8;
  if ( (int)v13 >= 1 )
  {
    v14 = (unsigned __int64)a1[2];
    v15 = 0;
    v16 = (_OWORD *)(v14 + 172);
    do
    {
      v17 = (int *)(v14 + 220 * v15);
      v18 = v17 + 40;
      v19 = (unsigned __int64)(v17 + 55);
      if ( v17 + 55 > v17 + 40 )
        v18 = v17 + 55;
      v20 = v8[12];
      v33 = *((_QWORD *)v8 + 5);
      v21 = (((unsigned __int64)v18 + ~v14 + -220 * v15 - 156) >> 2) + 1;
      v34 = v20;
      v35 = 1065353216;
      v31 = xmmword_583490;
      v32[0] = xmmword_5837E0;
      v32[1] = xmmword_5837F0;
      if ( v21 >= 8 )
      {
        v24 = 4 * (v21 & 0x7FFFFFFFFFFFFFF8LL);
        v22 = (_OWORD *)((char *)&v32[-1] + v24);
        v23 = (int *)(v14 + 220 * v15 + v24 + 156);
        v25 = v21 & 0x7FFFFFFFFFFFFFF8LL;
        v26 = v32;
        v27 = v16;
        do
        {
          v28 = *(v26 - 1);
          v29 = *v26;
          v25 -= 8;
          v26 += 2;
          *(v27 - 1) = v28;
          *v27 = v29;
          v27 += 2;
        }
        while ( v25 );
        if ( v21 == (v21 & 0x7FFFFFFFFFFFFFF8LL) )
          goto LABEL_22;
      }
      else
      {
        v22 = &v31;
        v23 = v17 + 39;
      }
      do
      {
        v30 = *(_DWORD *)v22;
        v22 = (__int128 *)((char *)v22 + 4);
        *v23++ = v30;
      }
      while ( (unsigned __int64)v23 < v19 );
LABEL_22:
      ++v15;
      v16 = (_OWORD *)((char *)v16 + 220);
    }
    while ( v15 < v13 );
  }
}

