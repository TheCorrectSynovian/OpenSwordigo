/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BE774
 * Mangled: _ZNSt5dequeIN5boost10shared_ptrIN5Caver7MapNodeEEESaIS4_EE17_M_reallocate_mapEmb
 * Demangled: std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_reallocate_map(ulong,bool)
 *
 * Callers: 1
 *   0x00000000001F58F0  std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_reallocate_map(ulong,bool)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 40
 *   insn=0x00000000003BE790 string=0x00000000003BE794 "i&@"
 *   insn=0x00000000003BE794 string=0x00000000003BE798 "a"
 *   insn=0x00000000003BE798 string=0x00000000003BE79C "j"
 *   insn=0x00000000003BE7A0 string=0x00000000003BE7A4 "("
 *   insn=0x00000000003BE7B0 string=0x00000000003BE7B4 "_"
 *   insn=0x00000000003BE7B4 string=0x00000000003BE7B8 "\t"
 *   insn=0x00000000003BE7B8 string=0x00000000003BE7BC "k"
 *   insn=0x00000000003BE7B8 string=0x00000000003BE7F8 "_"
 *   insn=0x00000000003BE7BC string=0x00000000003BE7C0 "J"
 *   insn=0x00000000003BE7C0 string=0x00000000003BE7C4 "J"
 *   insn=0x00000000003BE7C8 string=0x00000000003BE7CC "J"
 *   insn=0x00000000003BE7D0 string=0x00000000003BE7D4 "j"
 *   insn=0x00000000003BE7D4 string=0x00000000003BE7D8 "T"
 *   insn=0x00000000003BE7D8 string=0x00000000003BE7DC ")!"
 *   insn=0x00000000003BE7E0 string=0x00000000003BE7E4 """
 *   insn=0x00000000003BE7E8 string=0x00000000003BE7EC "B"
 *   insn=0x00000000003BE7EC string=0x00000000003BE874 "t"
 *   insn=0x00000000003BE7FC string=0x00000000003BE800 "H"
 *   insn=0x00000000003BE804 string=0x00000000003BE808 ""
 *   insn=0x00000000003BE808 string=0x00000000003BE80C "H"
 *   insn=0x00000000003BE80C string=0x00000000003BE8B4 "x"
 *   insn=0x00000000003BE810 string=0x00000000003BE814 "s"
 *   insn=0x00000000003BE814 string=0x00000000003BE818 "i&@"
 *   insn=0x00000000003BE814 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BE818 string=0x00000000003BE81C ""
 *   insn=0x00000000003BE81C string=0x00000000003BE820 "a"
 *   insn=0x00000000003BE820 string=0x00000000003BE824 ""
 *   insn=0x00000000003BE82C string=0x00000000003BE830 ""
 *   insn=0x00000000003BE838 string=0x00000000003BE83C ")!"
 *   insn=0x00000000003BE83C string=0x00000000003BE840 """
 *   insn=0x00000000003BE844 string=0x00000000003BE848 "`"
 *   insn=0x00000000003BE848 string=0x00000000003BE854 "`"
 *   insn=0x00000000003BE850 string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000003BE858 string=0x00000000003BE85C "ub"
 *   insn=0x00000000003BE858 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BE880 string=0x00000000003BE884 "j&"
 *   insn=0x00000000003BE884 string=0x00000000003BE888 "\n"
 *   insn=0x00000000003BE888 string=0x00000000003BE88C "h"
 *   insn=0x00000000003BE890 string=0x00000000003BE894 "\t"
 *   insn=0x00000000003BE894 string=0x00000000003BE898 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::deque<boost::shared_ptr<Caver::MapNode>>::_M_reallocate_map(
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

