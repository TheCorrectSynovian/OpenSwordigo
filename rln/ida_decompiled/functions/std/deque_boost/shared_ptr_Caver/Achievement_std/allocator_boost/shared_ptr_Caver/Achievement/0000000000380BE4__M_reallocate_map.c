/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000380BE4
 * Mangled: _ZNSt5dequeIN5boost10shared_ptrIN5Caver11AchievementEEESaIS4_EE17_M_reallocate_mapEmb
 * Demangled: std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_reallocate_map(ulong,bool)
 *
 * Callers: 1
 *   0x00000000001F9720  std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_reallocate_map(ulong,bool)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 41
 *   insn=0x0000000000380C00 string=0x0000000000380C04 "i&@"
 *   insn=0x0000000000380C04 string=0x0000000000380C08 "a"
 *   insn=0x0000000000380C08 string=0x0000000000380C0C "j"
 *   insn=0x0000000000380C10 string=0x0000000000380C14 "("
 *   insn=0x0000000000380C20 string=0x0000000000380C24 "_"
 *   insn=0x0000000000380C24 string=0x0000000000380C28 "\t"
 *   insn=0x0000000000380C28 string=0x0000000000380C2C "k"
 *   insn=0x0000000000380C28 string=0x0000000000380C68 "_"
 *   insn=0x0000000000380C2C string=0x0000000000380C30 "J"
 *   insn=0x0000000000380C30 string=0x0000000000380C34 "J"
 *   insn=0x0000000000380C38 string=0x0000000000380C3C "J"
 *   insn=0x0000000000380C40 string=0x0000000000380C44 "j"
 *   insn=0x0000000000380C44 string=0x0000000000380C48 "T"
 *   insn=0x0000000000380C48 string=0x0000000000380C4C ")!"
 *   insn=0x0000000000380C50 string=0x0000000000380C54 """
 *   insn=0x0000000000380C58 string=0x0000000000380C5C "B"
 *   insn=0x0000000000380C5C string=0x0000000000380CE4 "t"
 *   insn=0x0000000000380C6C string=0x0000000000380C70 "H"
 *   insn=0x0000000000380C74 string=0x0000000000380C78 ""
 *   insn=0x0000000000380C78 string=0x0000000000380C7C "H"
 *   insn=0x0000000000380C7C string=0x0000000000380D24 "\"
 *   insn=0x0000000000380C80 string=0x0000000000380C84 "W"
 *   insn=0x0000000000380C84 string=0x0000000000380C88 "i&@"
 *   insn=0x0000000000380C84 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000380C88 string=0x0000000000380C8C ""
 *   insn=0x0000000000380C8C string=0x0000000000380C90 "a"
 *   insn=0x0000000000380C90 string=0x0000000000380C94 ""
 *   insn=0x0000000000380C9C string=0x0000000000380CA0 ""
 *   insn=0x0000000000380CA8 string=0x0000000000380CAC ")!"
 *   insn=0x0000000000380CAC string=0x0000000000380CB0 """
 *   insn=0x0000000000380CB4 string=0x0000000000380CB8 "`"
 *   insn=0x0000000000380CB8 string=0x0000000000380CC4 "`"
 *   insn=0x0000000000380CC0 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000380CC4 string=0x0000000000380CC8 "z"
 *   insn=0x0000000000380CC8 string=0x0000000000380CCC "ub"
 *   insn=0x0000000000380CC8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000380CF0 string=0x0000000000380CF4 "j&"
 *   insn=0x0000000000380CF4 string=0x0000000000380CF8 "\n"
 *   insn=0x0000000000380CF8 string=0x0000000000380CFC "h"
 *   insn=0x0000000000380D00 string=0x0000000000380D04 "\t"
 *   insn=0x0000000000380D04 string=0x0000000000380D08 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::deque<boost::shared_ptr<Caver::Achievement>>::_M_reallocate_map(
        __int64 a1,
        unsigned __int64 a2,
        char a3)
{
  __int64 v5; // x9
  __int64 *v6; // x1
  unsigned __int64 v7; // x10
  __int64 v9; // x23
  unsigned __int64 v10; // x25
  unsigned __int64 v11; // x10
  unsigned __int64 v12; // x12
  __int64 *v13; // x20
  size_t v14; // x2
  char *v15; // x0
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x24
  __int64 v18; // x0
  const void *v19; // x1
  __int64 v20; // x21
  unsigned __int64 v21; // x8
  unsigned __int64 v22; // x10
  __int64 v23; // x9
  __int64 v24; // x8
  __int64 v25; // x8

  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(__int64 **)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 8);
  v9 = (v5 - (__int64)v6) >> 3;
  v10 = v9 + 1 + a2;
  if ( v7 <= 2 * v10 )
  {
    if ( v7 >= a2 )
      v16 = *(_QWORD *)(a1 + 8);
    else
      v16 = a2;
    v17 = v7 + v16 + 2;
    if ( v17 >> 61 )
      sub_565294();
    v18 = operator new(8 * v17);
    v19 = *(const void **)(a1 + 40);
    v20 = v18;
    v21 = v18 + ((4 * (v17 - v10)) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (a3 & 1) != 0 )
      v22 = a2;
    else
      v22 = 0;
    v23 = *(_QWORD *)(a1 + 72) + 8LL;
    v13 = (__int64 *)(v21 + 8 * v22);
    if ( (const void *)v23 != v19 )
      memmove((void *)(v21 + 8 * v22), v19, v23 - (_QWORD)v19);
    operator delete(*(void **)a1);
    *(_QWORD *)a1 = v20;
    *(_QWORD *)(a1 + 8) = v17;
  }
  else
  {
    v11 = (4 * (v7 - v10)) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (a3 & 1) != 0 )
      v12 = a2;
    else
      v12 = 0;
    v13 = (__int64 *)(*(_QWORD *)a1 + v11 + 8 * v12);
    v14 = v5 + 8 - (_QWORD)v6;
    if ( v13 >= v6 )
    {
      if ( v14 )
      {
        v15 = (char *)&v13[v9 + 1] - v14;
        goto LABEL_20;
      }
    }
    else if ( v14 )
    {
      v15 = (char *)(*(_QWORD *)a1 + v11 + 8 * v12);
LABEL_20:
      memmove(v15, v6, v14);
    }
  }
  *(_QWORD *)(a1 + 40) = v13;
  v24 = *v13;
  *(_QWORD *)(a1 + 72) = &v13[v9];
  *(_QWORD *)(a1 + 24) = v24;
  *(_QWORD *)(a1 + 32) = v24 + 512;
  v25 = v13[v9];
  *(_QWORD *)(a1 + 56) = v25;
  *(_QWORD *)(a1 + 64) = v25 + 512;
}

