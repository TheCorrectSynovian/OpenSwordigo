/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000563BDC
 * Mangled: sub_563BDC
 * Demangled: sub_563BDC
 *
 * Callers: 19
 *   0x0000000000563CF4  sub_563CF4
 *   0x0000000000563CFC  sub_563CFC
 *   0x0000000000563D60  sub_563D60
 *   0x0000000000563DC4  sub_563DC4
 *   0x0000000000563E24  sub_563E24
 *   0x0000000000563E84  sub_563E84
 *   0x0000000000563EE4  sub_563EE4
 *   0x0000000000563F40  sub_563F40
 *   0x0000000000564084  sub_564084
 *   0x00000000005641F0  sub_5641F0
 *   0x000000000056432C  sub_56432C
 *   0x0000000000564494  sub_564494
 *   0x0000000000564634  sub_564634
 *   0x00000000005647E8  sub_5647E8
 *   0x000000000056492C  sub_56492C
 *   0x0000000000564A98  sub_564A98
 *   0x0000000000564BD4  sub_564BD4
 *   0x0000000000564D3C  sub_564D3C
 *   0x0000000000564EDC  sub_564EDC
 *
 * Callees: 4
 *   0x00000000001F8570  operator new[](ulong)
 *   0x000000000051F5E8  sub_51F5E8
 *   0x000000000051F654  sub_51F654
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 22
 *   insn=0x0000000000563C18 string=0x0000000000563C1C "s"
 *   insn=0x0000000000563C2C string=0x0000000000563C30 "`"
 *   insn=0x0000000000563C34 string=0x0000000000563C38 "`N@"
 *   insn=0x0000000000563C34 string=0x0000000000563C84 "`N@"
 *   insn=0x0000000000563C38 string=0x0000000000563C3C "a"
 *   insn=0x0000000000563C3C string=0x0000000000563C40 "uz"
 *   insn=0x0000000000563C48 string=0x0000000000563C4C "`"
 *   insn=0x0000000000563C4C string=0x0000000000563C50 "`\n"
 *   insn=0x0000000000563C50 string=0x0000000000563C54 "`"
 *   insn=0x0000000000563C60 string=0x0000000000563C64 "aB"
 *   insn=0x0000000000563C64 string=0x0000000000563C68 "a"
 *   insn=0x0000000000563C68 string=0x0000000000563C6C "U"
 *   insn=0x0000000000563C6C string=0x0000000000563CB4 "d"
 *   insn=0x0000000000563C88 string=0x0000000000563C8C "aR@"
 *   insn=0x0000000000563C90 string=0x0000000000563C94 " "
 *   insn=0x0000000000563C94 string=0x0000000000563C98 "?"
 *   insn=0x0000000000563C9C string=0x0000000000563CA0 "4R"
 *   insn=0x0000000000563CA0 string=0x0000000000563CA4 "`N"
 *   insn=0x0000000000563CA0 string=0x00000000001F8570 "0'"
 *   insn=0x0000000000563CA4 string=0x0000000000563CA8 "!"
 *   insn=0x0000000000563CA8 string=0x0000000000563CAC "a"
 *   insn=0x0000000000563CBC string=0x0000000000563CC0 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_563BDC(__int64 a1, const char *a2, unsigned int a3)
{
  _QWORD *v3; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  unsigned __int64 v9; // x1
  unsigned __int64 v10; // x0

  v3 = (_QWORD *)(a1 + 104);
  if ( !sub_51F654((_QWORD *)(a1 + 104)) )
  {
    sub_51F5E8((__int64)v3, a2, a3);
    if ( sub_51F654(v3) )
    {
      if ( *(_BYTE *)(a1 + 168) )
      {
        v6 = *(_QWORD *)(a1 + 152);
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 152);
        if ( !v6 )
        {
          v9 = *(_QWORD *)(a1 + 160);
          v10 = 4 * v9;
          if ( v9 > 0x1FC0000000000000LL )
            v10 = -1;
          v6 = operator new[](v10);
          *(_QWORD *)(a1 + 152) = v6;
          *(_BYTE *)(a1 + 168) = 1;
        }
      }
      v7 = *(_QWORD *)(a1 + 124);
      *(_DWORD *)(a1 + 120) = a3;
      *(_BYTE *)(a1 + 169) = 0;
      *(_BYTE *)(a1 + 170) = 0;
      *(_QWORD *)(a1 + 8) = v6;
      *(_QWORD *)(a1 + 16) = v6;
      *(_QWORD *)(a1 + 24) = v6;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 132) = v7;
      *(_QWORD *)(a1 + 140) = v7;
      if ( (a3 & 2) == 0
        || (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, 0, 2, a3) != -1 )
      {
        return a1;
      }
      sub_562F10(a1);
    }
  }
  return 0;
}

