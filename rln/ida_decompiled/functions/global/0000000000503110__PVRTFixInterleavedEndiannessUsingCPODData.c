/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000503110
 * Mangled: _Z41PVRTFixInterleavedEndiannessUsingCPODDataPhR8CPODDataj
 * Demangled: PVRTFixInterleavedEndiannessUsingCPODData(uchar *,CPODData &,uint)
 *
 * Callers: 1
 *   0x00000000001FAFF0  PVRTFixInterleavedEndiannessUsingCPODData(uchar *,CPODData &,uint)
 *
 * Callees: 0
 *
 * Referenced strings: 31
 *   insn=0x0000000000503110 string=0x0000000000503114 "H"
 *   insn=0x0000000000503114 string=0x0000000000503118 ")"
 *   insn=0x0000000000503118 string=0x000000000050311C "?1"
 *   insn=0x0000000000503124 string=0x0000000000503128 "I!"
 *   insn=0x000000000050312C string=0x0000000000503130 "?"
 *   insn=0x0000000000503130 string=0x0000000000503134 "`"
 *   insn=0x0000000000503134 string=0x0000000000503138 """
 *   insn=0x0000000000503134 string=0x0000000000503180 "\n"
 *   insn=0x0000000000503138 string=0x000000000050313C "*@"
 *   insn=0x0000000000503140 string=0x0000000000503144 "\n"
 *   insn=0x0000000000503144 string=0x0000000000503148 ""
 *   insn=0x0000000000503148 string=0x0000000000503168 "+@"
 *   insn=0x000000000050314C string=0x0000000000503150 "L"
 *   insn=0x0000000000503150 string=0x0000000000503154 "("
 *   insn=0x0000000000503154 string=0x0000000000503158 "k"
 *   insn=0x0000000000503168 string=0x000000000050316C ")"
 *   insn=0x000000000050316C string=0x0000000000503170 "?"
 *   insn=0x0000000000503170 string=0x0000000000503174 "J"
 *   insn=0x0000000000503180 string=0x0000000000503184 "?"
 *   insn=0x000000000050318C string=0x0000000000503190 "*@"
 *   insn=0x0000000000503194 string=0x0000000000503198 "\n"
 *   insn=0x0000000000503198 string=0x000000000050319C "h"
 *   insn=0x000000000050319C string=0x00000000005031C8 "+@"
 *   insn=0x00000000005031AC string=0x00000000005031B0 "k"
 *   insn=0x00000000005031B0 string=0x00000000005031B4 "]"
 *   insn=0x00000000005031B8 string=0x00000000005031BC "("
 *   insn=0x00000000005031C0 string=0x00000000005031C4 "#"
 *   insn=0x00000000005031C8 string=0x00000000005031CC ")"
 *   insn=0x00000000005031CC string=0x00000000005031D0 "?"
 *   insn=0x00000000005031D0 string=0x00000000005031D4 "J"
 *   insn=0x00000000005031D4 string=0x00000000005031D8 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTFixInterleavedEndiannessUsingCPODData(__int64 result, CPODData *a2, int a3)
{
  unsigned __int64 v3; // x8
  int v4; // w9
  int v5; // w9
  __int64 v6; // x10
  unsigned __int64 v7; // x11
  __int64 v8; // x12
  int v9; // w9
  unsigned __int8 *v10; // x10
  unsigned __int64 v11; // x11
  unsigned __int8 *v12; // x12

  LODWORD(v3) = *((_DWORD *)a2 + 1);
  if ( (_DWORD)v3 && *(_DWORD *)a2 <= 0xCu )
  {
    v4 = 1 << *(_DWORD *)a2;
    if ( (v4 & 0x3F6) != 0 )
    {
      if ( a3 )
      {
        v5 = 0;
        v6 = result + *((_QWORD *)a2 + 2);
        do
        {
          if ( (_DWORD)v3 )
          {
            v7 = 0;
            v8 = v6 + 1;
            do
            {
              v3 = *((unsigned int *)a2 + 1);
              ++v7;
              v8 += 4;
            }
            while ( v7 < v3 );
          }
          ++v5;
          v6 += *((unsigned int *)a2 + 2);
        }
        while ( v5 != a3 );
      }
    }
    else if ( (v4 & 0x1808) != 0 && a3 )
    {
      v9 = 0;
      v10 = (unsigned __int8 *)(result + *((_QWORD *)a2 + 2));
      do
      {
        if ( (_DWORD)v3 )
        {
          v11 = 0;
          v12 = v10;
          do
          {
            ++v11;
            *(_WORD *)v12 = *v12 | (v12[1] << 8);
            v12 += 2;
            v3 = *((unsigned int *)a2 + 1);
          }
          while ( v11 < v3 );
        }
        ++v9;
        v10 += *((unsigned int *)a2 + 2);
      }
      while ( v9 != a3 );
    }
  }
  return result;
}

