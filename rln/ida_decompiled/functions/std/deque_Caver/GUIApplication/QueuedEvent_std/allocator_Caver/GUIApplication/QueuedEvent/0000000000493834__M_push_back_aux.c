/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000493834
 * Mangled: _ZNSt5dequeIN5Caver14GUIApplication11QueuedEventESaIS2_EE16_M_push_back_auxERKS2_
 * Demangled: std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_push_back_aux(Caver::GUIApplication::QueuedEvent const&)
 *
 * Callers: 1
 *   0x00000000001FFB10  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_push_back_aux(Caver::GUIApplication::QueuedEvent const&)
 *
 * Callees: 10
 *   0x00000000001F45C0  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_reallocate_map(ulong,bool)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBBB0  .memmove
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 71
 *   insn=0x0000000000493844 string=0x0000000000493848 "h&@"
 *   insn=0x0000000000493848 string=0x000000000049384C "i*@"
 *   insn=0x0000000000493850 string=0x0000000000493854 ""
 *   insn=0x0000000000493854 string=0x0000000000493858 "H"
 *   insn=0x000000000049386C string=0x0000000000493870 "T"
 *   insn=0x0000000000493870 string=0x00000000001F45C0 "P'"
 *   insn=0x0000000000493874 string=0x0000000000493878 "Z"
 *   insn=0x0000000000493878 string=0x000000000049387C "h&@"
 *   insn=0x0000000000493878 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000493880 string=0x0000000000493884 "u"
 *   insn=0x0000000000493898 string=0x000000000049389C ""
 *   insn=0x000000000049389C string=0x00000000004938A0 ""
 *   insn=0x00000000004938A0 string=0x00000000004938A4 ""
 *   insn=0x00000000004938DC string=0x00000000004938E0 "\t"
 *   insn=0x00000000004938E0 string=0x00000000004938E4 ")"
 *   insn=0x00000000004938E4 string=0x00000000004938E8 "\t"
 *   insn=0x00000000004938FC string=0x0000000000493900 "\t"
 *   insn=0x00000000004938FC string=0x000000000049390C "h&@"
 *   insn=0x0000000000493900 string=0x0000000000493904 ")"
 *   insn=0x0000000000493904 string=0x0000000000493908 "\t"
 *   insn=0x000000000049390C string=0x0000000000493910 "\t!"
 *   insn=0x0000000000493910 string=0x0000000000493914 "i&"
 *   insn=0x0000000000493914 string=0x0000000000493918 ""
 *   insn=0x0000000000493918 string=0x000000000049391C "h""
 *   insn=0x000000000049391C string=0x0000000000493920 ""
 *   insn=0x0000000000493920 string=0x0000000000493924 "h""
 *   insn=0x0000000000493938 string=0x000000000049393C "h&@"
 *   insn=0x0000000000493938 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000493940 string=0x0000000000493944 "["
 *   insn=0x0000000000493944 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000493950 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000493958 string=0x000000000049395C "|"
 *   insn=0x000000000049397C string=0x0000000000493980 "i&@"
 *   insn=0x0000000000493980 string=0x0000000000493984 "a"
 *   insn=0x0000000000493984 string=0x0000000000493988 "j"
 *   insn=0x000000000049398C string=0x0000000000493990 "("
 *   insn=0x000000000049399C string=0x00000000004939A0 "_"
 *   insn=0x00000000004939A0 string=0x00000000004939A4 "\t"
 *   insn=0x00000000004939A4 string=0x00000000004939A8 "k"
 *   insn=0x00000000004939A4 string=0x00000000004939E4 "_"
 *   insn=0x00000000004939A8 string=0x00000000004939AC "J"
 *   insn=0x00000000004939AC string=0x00000000004939B0 "J"
 *   insn=0x00000000004939B4 string=0x00000000004939B8 "J"
 *   insn=0x00000000004939BC string=0x00000000004939C0 "j"
 *   insn=0x00000000004939C0 string=0x00000000004939C4 "T"
 *   insn=0x00000000004939C4 string=0x00000000004939C8 ")!"
 *   insn=0x00000000004939CC string=0x00000000004939D0 """
 *   insn=0x00000000004939D4 string=0x00000000004939D8 "B"
 *   insn=0x00000000004939D8 string=0x0000000000493A60 "t"
 *   insn=0x00000000004939E0 string=0x0000000000493A5C "U"
 *   insn=0x00000000004939E8 string=0x00000000004939EC "H"
 *   insn=0x00000000004939F0 string=0x00000000004939F4 ""
 *   insn=0x00000000004939F4 string=0x00000000004939F8 "H"
 *   insn=0x0000000000493A00 string=0x0000000000493A04 "i&@"
 *   insn=0x0000000000493A04 string=0x0000000000493A08 ""
 *   insn=0x0000000000493A08 string=0x0000000000493A0C "a"
 *   insn=0x0000000000493A0C string=0x0000000000493A10 ""
 *   insn=0x0000000000493A18 string=0x0000000000493A1C ""
 *   insn=0x0000000000493A24 string=0x0000000000493A28 ")!"
 *   insn=0x0000000000493A28 string=0x0000000000493A2C """
 *   insn=0x0000000000493A30 string=0x0000000000493A34 "`"
 *   insn=0x0000000000493A34 string=0x0000000000493A40 "`"
 *   insn=0x0000000000493A38 string=0x0000000000493A3C "]"
 *   insn=0x0000000000493A3C string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000493A40 string=0x0000000000493A44 ""
 *   insn=0x0000000000493A44 string=0x0000000000493A48 "ub"
 *   insn=0x0000000000493A6C string=0x0000000000493A70 "j&"
 *   insn=0x0000000000493A70 string=0x0000000000493A74 "\n"
 *   insn=0x0000000000493A74 string=0x0000000000493A78 "h"
 *   insn=0x0000000000493A7C string=0x0000000000493A80 "\t"
 *   insn=0x0000000000493A80 string=0x0000000000493A84 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::deque<Caver::GUIApplication::QueuedEvent>::_M_push_back_aux(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x21
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 *v9; // x9
  __int64 v10; // x8

  if ( (unsigned __int64)(a1[1] - ((__int64)(a1[9] - *a1) >> 3)) <= 1 )
    std::deque<Caver::GUIApplication::QueuedEvent>::_M_reallocate_map();
  result = operator new(0x1F8u);
  *(_QWORD *)(a1[9] + 8LL) = result;
  v5 = a1[6];
  *(_QWORD *)v5 = *(_QWORD *)a2;
  *(_QWORD *)(v5 + 8) = 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
  {
    *(_QWORD *)(v5 + 8) = v6;
    if ( (v6 & 1) != 0 )
    {
      *(_QWORD *)(v5 + 32) = *(_QWORD *)(a2 + 32);
      *(_OWORD *)(v5 + 16) = *(_OWORD *)(a2 + 16);
    }
    else
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v6 & 0xFFFFFFFFFFFFFFFELL))(a2 + 16, v5 + 16, 0);
    }
  }
  *(_QWORD *)(v5 + 40) = *(_QWORD *)(a2 + 40);
  v7 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(v5 + 48) = v7;
  if ( v7 )
    ++*(_QWORD *)(v7 + 8);
  *(_QWORD *)(v5 + 56) = *(_QWORD *)(a2 + 56);
  v8 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(v5 + 64) = v8;
  if ( v8 )
    ++*(_QWORD *)(v8 + 8);
  v9 = (__int64 *)(a1[9] + 8LL);
  a1[9] = v9;
  v10 = *v9;
  a1[6] = *v9;
  a1[7] = v10;
  a1[8] = v10 + 504;
  return result;
}

