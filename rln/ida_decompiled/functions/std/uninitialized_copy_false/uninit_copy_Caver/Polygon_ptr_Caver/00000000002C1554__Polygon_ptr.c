/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C1554
 * Mangled: _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver7PolygonES4_EET0_T_S6_S5_
 * Demangled: std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon *,Caver::Polygon *>(Caver::Polygon *,Caver::Polygon *,Caver::Polygon *)
 *
 * Callers: 2
 *   0x00000000002006F0  std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon *,Caver::Polygon *>(Caver::Polygon *,Caver::Polygon *,Caver::Polygon *)
 *   0x00000000002C0F30  std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Polygon*,std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>>,Caver::Polygon const&)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x00000000002C1580 string=0x00000000002C1584 "*"
 *   insn=0x00000000002C1588 string=0x00000000002C158C "o"
 *   insn=0x00000000002C158C string=0x00000000002C1590 ""
 *   insn=0x00000000002C159C string=0x00000000002C15A0 "n"
 *   insn=0x00000000002C15B0 string=0x00000000002C15B4 "R""
 *   insn=0x00000000002C15C4 string=0x00000000002C15C8 "0"
 *   insn=0x00000000002C15DC string=0x00000000002C1694 "l"
 *   insn=0x00000000002C15E8 string=0x00000000002C15EC ""
 *   insn=0x00000000002C15EC string=0x00000000002C15F0 "o"
 *   insn=0x00000000002C15F0 string=0x00000000002C15F4 "k"
 *   insn=0x00000000002C15F8 string=0x00000000002C15FC "`"
 *   insn=0x00000000002C15FC string=0x00000000002C1600 "b"
 *   insn=0x00000000002C1600 string=0x00000000002C1604 "1""
 *   insn=0x00000000002C160C string=0x00000000002C1610 "a"
 *   insn=0x00000000002C161C string=0x00000000002C1620 "!"
 *   insn=0x00000000002C1620 string=0x00000000002C16A4 "I"
 *   insn=0x00000000002C1624 string=0x00000000002C1628 ""
 *   insn=0x00000000002C163C string=0x00000000002C1640 " "
 *   insn=0x00000000002C1648 string=0x00000000002C164C ""
 *   insn=0x00000000002C164C string=0x00000000002C1650 ""
 *   insn=0x00000000002C1654 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C165C string=0x00000000002C1664 "\t"
 *   insn=0x00000000002C1670 string=0x00000000002C1674 "*"
 *   insn=0x00000000002C1678 string=0x00000000002C167C "J!"
 *   insn=0x00000000002C167C string=0x00000000002C1680 "L"
 *   insn=0x00000000002C1690 string=0x00000000002C1588 "N"
 *   insn=0x00000000002C1694 string=0x00000000002C1698 "?"
 *   insn=0x00000000002C16A4 string=0x00000000002C16A8 ""
 *   insn=0x00000000002C16A8 string=0x00000000002C16AC "!"
 *   insn=0x00000000002C16F8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000002C1700 string=0x00000000002C1704 "s""
 *   insn=0x00000000002C1704 string=0x00000000002C1708 "`"
 *   insn=0x00000000002C1708 string=0x00000000002C170C "@"
 *   insn=0x00000000002C1710 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002C1714 string=0x00000000002C1718 "s"
 *   insn=0x00000000002C1718 string=0x00000000002C171C "a"
 *   insn=0x00000000002C1728 string=0x00000000001FD590 "0'"
 *   insn=0x00000000002C172C string=0x00000000002C1730 "e"
 *   insn=0x00000000002C1738 string=0x00000000002C173C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::__uninitialized_copy<false>::__uninit_copy<Caver::Polygon *,Caver::Polygon *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // x22
  __int64 v5; // x23
  __int64 v6; // x20
  _QWORD *v7; // x13
  __int64 v8; // x15
  _OWORD *v9; // x16
  char *v10; // x15
  __int128 *v11; // x11
  __int64 v12; // x17
  __int128 v13; // q0
  __int128 v14; // q1
  __int128 v15; // q2
  __int128 v16; // q3
  char *v17; // x11
  __int64 v18; // x8
  __int64 v19; // x9
  unsigned __int64 v20; // x0
  unsigned __int64 v21; // x24
  unsigned __int64 v22; // x8
  char *v23; // x9
  unsigned __int64 v24; // x10
  unsigned __int64 v25; // x12
  __int64 v26; // t1
  __int16 v27; // w8

  v4 = a1;
  if ( a1 != a2 )
  {
    v5 = 0;
    v6 = a3;
    while ( 1 )
    {
      *(_DWORD *)v6 = *(_DWORD *)v4;
      v18 = *(_QWORD *)(v4 + 8);
      v19 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 16) = 0;
      *(_QWORD *)(v6 + 24) = 0;
      v20 = v19 - v18;
      v21 = (v19 - v18) >> 3;
      if ( v19 == v18 )
      {
        v22 = 0;
      }
      else
      {
        if ( v21 >> 61 )
          sub_565294();
        v20 = operator new(v20);
        v22 = v20;
      }
      *(_QWORD *)(v6 + 8) = v22;
      *(_QWORD *)(v6 + 16) = v20;
      *(_QWORD *)(v6 + 24) = v22 + 8 * v21;
      v17 = *(char **)(v4 + 8);
      v23 = *(char **)(v4 + 16);
      if ( v23 == v17 )
        goto LABEL_18;
      v24 = v23 - v17 - 8;
      v25 = (v24 >> 3) + 1;
      v7 = (_QWORD *)v22;
      if ( v25 >= 8 )
      {
        if ( v20 < (unsigned __int64)&v17[(v24 & 0xFFFFFFFFFFFFFFF8LL) + 4]
          && (unsigned __int64)v17 < v22 + 4 + (v24 & 0xFFFFFFFFFFFFFFF8LL) )
        {
          v7 = (_QWORD *)v22;
        }
        else
        {
          v7 = (_QWORD *)v22;
          if ( v22 + 4 >= (unsigned __int64)&v17[(v24 & 0xFFFFFFFFFFFFFFF8LL) + 8]
            || (unsigned __int64)(v17 + 4) >= v22 + (v24 & 0xFFFFFFFFFFFFFFF8LL) + 8 )
          {
            v8 = 8 * (v25 & 0x3FFFFFFFFFFFFFF8LL);
            v9 = (_OWORD *)(v22 + 32);
            v7 = (_QWORD *)(v22 + v8);
            v10 = &v17[v8];
            v11 = (__int128 *)(v17 + 32);
            v12 = v25 & 0x3FFFFFFFFFFFFFF8LL;
            do
            {
              v13 = *(v11 - 2);
              v14 = *(v11 - 1);
              v15 = *v11;
              v16 = v11[1];
              v11 += 4;
              v12 -= 8;
              *(v9 - 2) = v13;
              *(v9 - 1) = v14;
              *v9 = v15;
              v9[1] = v16;
              v9 += 4;
            }
            while ( v12 );
            v17 = v10;
            if ( v25 == (v25 & 0x3FFFFFFFFFFFFFF8LL) )
              goto LABEL_17;
          }
        }
      }
      do
      {
        v26 = *(_QWORD *)v17;
        v17 += 8;
        *v7++ = v26;
      }
      while ( v23 != v17 );
LABEL_17:
      v22 += (v24 & 0xFFFFFFFFFFFFFFF8LL) + 8;
LABEL_18:
      *(_QWORD *)(v6 + 16) = v22;
      v27 = *(_WORD *)(v4 + 32);
      v4 += 40;
      v5 += 40;
      *(_WORD *)(v6 + 32) = v27;
      v6 += 40;
      if ( v4 == a2 )
        return v6;
    }
  }
  return a3;
}

