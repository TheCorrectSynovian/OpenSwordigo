/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000275804
 * Mangled: _ZNSt5dequeIN5Caver19HeroEntityComponent12SafePositionESaIS2_EE17_M_reallocate_mapEmb
 * Demangled: std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_reallocate_map(ulong,bool)
 *
 * Callers: 1
 *   0x0000000000202D40  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_reallocate_map(ulong,bool)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000565294  sub_565294
 *
 * Referenced strings: 41
 *   insn=0x0000000000275820 string=0x0000000000275824 "i&@"
 *   insn=0x0000000000275824 string=0x0000000000275828 "a"
 *   insn=0x0000000000275828 string=0x000000000027582C "j"
 *   insn=0x0000000000275830 string=0x0000000000275834 "("
 *   insn=0x0000000000275840 string=0x0000000000275844 "_"
 *   insn=0x0000000000275844 string=0x0000000000275848 "\t"
 *   insn=0x0000000000275848 string=0x000000000027584C "k"
 *   insn=0x0000000000275848 string=0x0000000000275888 "_"
 *   insn=0x000000000027584C string=0x0000000000275850 "J"
 *   insn=0x0000000000275850 string=0x0000000000275854 "J"
 *   insn=0x0000000000275858 string=0x000000000027585C "J"
 *   insn=0x0000000000275860 string=0x0000000000275864 "j"
 *   insn=0x0000000000275864 string=0x0000000000275868 "T"
 *   insn=0x0000000000275868 string=0x000000000027586C ")!"
 *   insn=0x0000000000275870 string=0x0000000000275874 """
 *   insn=0x0000000000275878 string=0x000000000027587C "B"
 *   insn=0x000000000027587C string=0x0000000000275904 "t"
 *   insn=0x000000000027588C string=0x0000000000275890 "H"
 *   insn=0x0000000000275894 string=0x0000000000275898 ""
 *   insn=0x0000000000275898 string=0x000000000027589C "H"
 *   insn=0x000000000027589C string=0x0000000000275944 "T"
 *   insn=0x00000000002758A0 string=0x00000000002758A4 "O"
 *   insn=0x00000000002758A4 string=0x00000000002758A8 "i&@"
 *   insn=0x00000000002758A4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002758A8 string=0x00000000002758AC ""
 *   insn=0x00000000002758AC string=0x00000000002758B0 "a"
 *   insn=0x00000000002758B0 string=0x00000000002758B4 ""
 *   insn=0x00000000002758BC string=0x00000000002758C0 ""
 *   insn=0x00000000002758C8 string=0x00000000002758CC ")!"
 *   insn=0x00000000002758CC string=0x00000000002758D0 """
 *   insn=0x00000000002758D4 string=0x00000000002758D8 "`"
 *   insn=0x00000000002758D8 string=0x00000000002758E4 "`"
 *   insn=0x00000000002758E0 string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000002758E4 string=0x00000000002758E8 "r"
 *   insn=0x00000000002758E8 string=0x00000000002758EC "ub"
 *   insn=0x00000000002758E8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000275910 string=0x0000000000275914 "j&"
 *   insn=0x0000000000275914 string=0x0000000000275918 "\n"
 *   insn=0x0000000000275918 string=0x000000000027591C "h"
 *   insn=0x0000000000275920 string=0x0000000000275924 "\t"
 *   insn=0x0000000000275924 string=0x0000000000275928 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::deque<Caver::HeroEntityComponent::SafePosition>::_M_reallocate_map(
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
  *(_QWORD *)(a1 + 32) = v24 + 480;
  v25 = v13[v9];
  *(_QWORD *)(a1 + 56) = v25;
  *(_QWORD *)(a1 + 64) = v25 + 480;
}

