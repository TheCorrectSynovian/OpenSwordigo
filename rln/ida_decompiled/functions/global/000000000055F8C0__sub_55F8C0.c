/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055F8C0
 * Mangled: sub_55F8C0
 * Demangled: sub_55F8C0
 *
 * Callers: 19
 *   0x000000000055F9C8  sub_55F9C8
 *   0x00000000005604C0  sub_5604C0
 *   0x0000000000560604  sub_560604
 *   0x0000000000560770  sub_560770
 *   0x00000000005608B4  sub_5608B4
 *   0x0000000000560AB8  sub_560AB8
 *   0x0000000000560B18  sub_560B18
 *   0x0000000000560D9C  sub_560D9C
 *   0x0000000000560ED8  sub_560ED8
 *   0x0000000000561040  sub_561040
 *   0x000000000056117C  sub_56117C
 *   0x000000000056137C  sub_56137C
 *   0x00000000005613DC  sub_5613DC
 *   0x0000000000561714  sub_561714
 *   0x00000000005618B4  sub_5618B4
 *   0x0000000000561A68  sub_561A68
 *   0x0000000000561C08  sub_561C08
 *   0x0000000000561E90  sub_561E90
 *   0x0000000000561EEC  sub_561EEC
 *
 * Callees: 4
 *   0x00000000001F8570  operator new[](ulong)
 *   0x000000000051F5E8  sub_51F5E8
 *   0x000000000051F654  sub_51F654
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 24
 *   insn=0x000000000055F8E0 string=0x000000000055F8E4 "\"
 *   insn=0x000000000055F8EC string=0x000000000055F8F0 " "
 *   insn=0x000000000055F8FC string=0x000000000055F900 ":"
 *   insn=0x000000000055F904 string=0x000000000055F908 "S"
 *   insn=0x000000000055F90C string=0x000000000055F910 " "
 *   insn=0x000000000055F910 string=0x000000000055F914 "`"
 *   insn=0x000000000055F918 string=0x000000000055F91C "`N@"
 *   insn=0x000000000055F918 string=0x000000000055F968 "`N@"
 *   insn=0x000000000055F91C string=0x000000000055F920 "a"
 *   insn=0x000000000055F920 string=0x000000000055F924 "uz"
 *   insn=0x000000000055F92C string=0x000000000055F930 "`"
 *   insn=0x000000000055F930 string=0x000000000055F934 "`\n"
 *   insn=0x000000000055F934 string=0x000000000055F938 "`"
 *   insn=0x000000000055F944 string=0x000000000055F948 "aB"
 *   insn=0x000000000055F948 string=0x000000000055F94C "a"
 *   insn=0x000000000055F950 string=0x000000000055F988 "d"
 *   insn=0x000000000055F96C string=0x000000000055F970 "`R@"
 *   insn=0x000000000055F974 string=0x000000000055F978 "`N"
 *   insn=0x000000000055F974 string=0x00000000001F8570 "0'"
 *   insn=0x000000000055F978 string=0x000000000055F97C "!"
 *   insn=0x000000000055F97C string=0x000000000055F980 "a"
 *   insn=0x000000000055F990 string=0x000000000055F994 "B"
 *   insn=0x000000000055F9A4 string=0x000000000055F9A8 "a"
 *   insn=0x000000000055F9AC string=0x000000000055F9B0 "x"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55F8C0(__int64 a1, const char *a2, unsigned int a3)
{
  _QWORD *v3; // x20
  __int64 v6; // x0
  __int64 v7; // x1

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
          v6 = operator new[](*(_QWORD *)(a1 + 160));
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
      sub_55F390(a1);
    }
  }
  return 0;
}

