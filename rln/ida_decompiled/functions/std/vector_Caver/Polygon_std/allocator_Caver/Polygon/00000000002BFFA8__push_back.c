/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BFFA8
 * Mangled: _ZNSt6vectorIN5Caver7PolygonESaIS1_EE9push_backERKS1_
 * Demangled: std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::push_back(Caver::Polygon const&)
 *
 * Callers: 2
 *   0x00000000001F9940  std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::push_back(Caver::Polygon const&)
 *   0x00000000002BFAB8  Caver::GroundPolygonComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callees: 3
 *   0x00000000001F5520  std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Polygon*,std::vector<Caver::Polygon,std::allocator<Caver::Polygon>>>,Caver::Polygon const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 35
 *   insn=0x00000000002BFFB8 string=0x00000000002BFFBC "t"
 *   insn=0x00000000002BFFC4 string=0x00000000002BFFC8 " "
 *   insn=0x00000000002BFFDC string=0x00000000002BFFE0 " "
 *   insn=0x00000000002BFFE8 string=0x00000000002BFFF8 ""
 *   insn=0x00000000002BFFEC string=0x00000000002BFFF0 "\n"
 *   insn=0x00000000002BFFF0 string=0x00000000002BFFF4 "{"
 *   insn=0x00000000002BFFF0 string=0x00000000002C0130 "Y"
 *   insn=0x00000000002BFFF4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C0004 string=0x00000000002C0008 "\t"
 *   insn=0x00000000002C000C string=0x00000000002C0010 ")!"
 *   insn=0x00000000002C0010 string=0x00000000002C0014 "+"
 *   insn=0x00000000002C0014 string=0x00000000002C0018 "k"
 *   insn=0x00000000002C0020 string=0x00000000002C0024 """
 *   insn=0x00000000002C0024 string=0x00000000002C0028 "K"
 *   insn=0x00000000002C0024 string=0x00000000002C0088 ","
 *   insn=0x00000000002C0034 string=0x00000000002C0038 "("
 *   insn=0x00000000002C0038 string=0x00000000002C003C ""
 *   insn=0x00000000002C004C string=0x00000000002C0050 "h"
 *   insn=0x00000000002C0050 string=0x00000000002C0054 ""
 *   insn=0x00000000002C0054 string=0x00000000002C0058 "h"
 *   insn=0x00000000002C0080 string=0x00000000002C0084 "'"
 *   insn=0x00000000002C0084 string=0x00000000001F5520 "P'"
 *   insn=0x00000000002C0088 string=0x00000000002C008C "O"
 *   insn=0x00000000002C00A0 string=0x00000000002C00A4 ""
 *   insn=0x00000000002C00A4 string=0x00000000002C00A8 "P"
 *   insn=0x00000000002C00AC string=0x00000000002C00B0 "_"
 *   insn=0x00000000002C00B8 string=0x00000000002C00BC "M"
 *   insn=0x00000000002C00DC string=0x00000000002C00E0 "M"
 *   insn=0x00000000002C00E0 string=0x00000000002C00E4 "m"
 *   insn=0x00000000002C00F0 string=0x00000000002C00F4 "N"
 *   insn=0x00000000002C00F4 string=0x00000000002C00F8 "J"
 *   insn=0x00000000002C00FC string=0x00000000002C0100 "@"
 *   insn=0x00000000002C0100 string=0x00000000002C0104 "B"
 *   insn=0x00000000002C0110 string=0x00000000002C0114 "a"
 *   insn=0x00000000002C011C string=0x00000000002C0120 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall std::vector<Caver::Polygon>::push_back(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 v5; // x8
  __int64 v6; // x9
  unsigned __int64 result; // x0
  unsigned __int64 v8; // x22
  char *v9; // x8
  char *v10; // x10
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x11
  _QWORD *v13; // x12
  __int64 v14; // t1
  unsigned __int64 v15; // x12
  unsigned __int64 v16; // x16
  bool v17; // w12
  bool v18; // w13
  __int64 v19; // x14
  _OWORD *v20; // x15
  char *v21; // x14
  __int128 *v22; // x10
  __int64 v23; // x16
  __int128 v24; // q0
  __int128 v25; // q1
  __int128 v26; // q2
  __int128 v27; // q3

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 != *(_QWORD *)(a1 + 16) )
  {
    *(_DWORD *)v3 = *(_DWORD *)a2;
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(v3 + 8) = 0;
    *(_QWORD *)(v3 + 16) = 0;
    *(_QWORD *)(v3 + 24) = 0;
    result = v6 - v5;
    v8 = (v6 - v5) >> 3;
    if ( v6 != v5 )
    {
      if ( v8 >> 61 )
        sub_565294();
      result = operator new(result);
    }
    *(_QWORD *)(v3 + 8) = result;
    *(_QWORD *)(v3 + 16) = result;
    *(_QWORD *)(v3 + 24) = result + 8 * v8;
    v10 = *(char **)(a2 + 8);
    v9 = *(char **)(a2 + 16);
    if ( v9 == v10 )
      goto LABEL_9;
    v11 = v9 - v10 - 8;
    v12 = (v11 >> 3) + 1;
    v13 = (_QWORD *)result;
    if ( v12 >= 8 )
    {
      v15 = (v11 & 0xFFFFFFFFFFFFFFF8LL) + 8;
      v16 = result + v15;
      v17 = result + 4 < (unsigned __int64)&v10[v15];
      if ( result < (unsigned __int64)&v10[(v11 & 0xFFFFFFFFFFFFFFF8LL) + 4]
        && (unsigned __int64)v10 < result + (v11 & 0xFFFFFFFFFFFFFFF8LL) + 4 )
      {
        v13 = (_QWORD *)result;
      }
      else
      {
        v18 = v17 && (unsigned __int64)(v10 + 4) < v16;
        v13 = (_QWORD *)result;
        if ( !v18 )
        {
          v19 = 8 * (v12 & 0x3FFFFFFFFFFFFFF8LL);
          v20 = (_OWORD *)(result + 32);
          v13 = (_QWORD *)(result + v19);
          v21 = &v10[v19];
          v22 = (__int128 *)(v10 + 32);
          v23 = v12 & 0x3FFFFFFFFFFFFFF8LL;
          do
          {
            v24 = *(v22 - 2);
            v25 = *(v22 - 1);
            v26 = *v22;
            v27 = v22[1];
            v22 += 4;
            v23 -= 8;
            *(v20 - 2) = v24;
            *(v20 - 1) = v25;
            *v20 = v26;
            v20[1] = v27;
            v20 += 4;
          }
          while ( v23 );
          v10 = v21;
          if ( v12 == (v12 & 0x3FFFFFFFFFFFFFF8LL) )
            goto LABEL_8;
        }
      }
    }
    do
    {
      v14 = *(_QWORD *)v10;
      v10 += 8;
      *v13++ = v14;
    }
    while ( v9 != v10 );
LABEL_8:
    result += (v11 & 0xFFFFFFFFFFFFFFF8LL) + 8;
LABEL_9:
    *(_QWORD *)(v3 + 16) = result;
    *(_WORD *)(v3 + 32) = *(_WORD *)(a2 + 32);
    *(_QWORD *)(a1 + 8) += 40LL;
    return result;
  }
  return std::vector<Caver::Polygon>::_M_insert_aux();
}

