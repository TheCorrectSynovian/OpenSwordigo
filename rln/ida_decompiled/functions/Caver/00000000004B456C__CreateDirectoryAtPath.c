/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B456C
 * Mangled: _ZN5Caver21CreateDirectoryAtPathERKSsb
 * Demangled: Caver::CreateDirectoryAtPath(std::string const&,bool)
 *
 * Callers: 1
 *   0x00000000001FB380  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *
 * Callees: 6
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F6AA0  .strcpy
 *   0x00000000001F6BF0  .mkdir
 *   0x00000000001F89E0  .free
 *   0x00000000001F9C10  .__errno
 *   0x00000000001FA030  .strchr
 *
 * Referenced strings: 26
 *   insn=0x00000000004B4580 string=0x00000000004B4584 "!"
 *   insn=0x00000000004B458C string=0x00000000004B4590 "8"
 *   insn=0x00000000004B4590 string=0x00000000001F5E70 "P'"
 *   insn=0x00000000004B4598 string=0x00000000004B459C "A\t"
 *   insn=0x00000000004B459C string=0x00000000001F6AA0 "0'"
 *   insn=0x00000000004B45A0 string=0x00000000004B45A4 "\t"
 *   insn=0x00000000004B45A4 string=0x00000000004B45A8 "\n"
 *   insn=0x00000000004B45A8 string=0x00000000004B45AC "J"
 *   insn=0x00000000004B45AC string=0x00000000004B45B0 "_"
 *   insn=0x00000000004B45B4 string=0x00000000004B45CC "`"
 *   insn=0x00000000004B45B8 string=0x00000000004B45BC "jj)8"
 *   insn=0x00000000004B45BC string=0x00000000004B45C0 ""
 *   insn=0x00000000004B45C0 string=0x00000000004B45C4 "h"
 *   insn=0x00000000004B45E8 string=0x00000000001FA030 "0'"
 *   insn=0x00000000004B45EC string=0x00000000004B45F0 "4"
 *   insn=0x00000000004B45FC string=0x00000000004B4600 "|\t"
 *   insn=0x00000000004B4600 string=0x00000000001F6BF0 "0'"
 *   insn=0x00000000004B460C string=0x00000000004B4610 ""
 *   insn=0x00000000004B460C string=0x00000000001F9C10 "0'"
 *   insn=0x00000000004B4614 string=0x00000000004B4618 " "
 *   insn=0x00000000004B4620 string=0x00000000004B4624 "\n"
 *   insn=0x00000000004B4620 string=0x00000000001F89E0 "0'"
 *   insn=0x00000000004B462C string=0x00000000004B4630 "p\t"
 *   insn=0x00000000004B4634 string=0x00000000004B4638 "!"
 *   insn=0x00000000004B4638 string=0x00000000004B463C "u"
 *   insn=0x00000000004B463C string=0x00000000004B4640 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CreateDirectoryAtPath(const char **a1, char a2)
{
  const char *v3; // x20
  char *v4; // x19
  const char *v5; // x8
  __int64 v6; // x9
  const char *i; // x0
  char *v8; // x20

  v3 = *a1;
  if ( (a2 & 1) != 0 )
  {
    v4 = (char *)malloc(*((_QWORD *)v3 - 3) + 2LL);
    strcpy(v4, v3);
    v5 = *a1;
    v6 = *((_QWORD *)*a1 - 3);
    if ( (*a1)[v6 - 1] != 47 )
    {
      v4[v6] = 47;
      v4[*((_QWORD *)v5 - 3) + 1] = 0;
    }
    for ( i = v4 + 1; ; i = v8 + 1 )
    {
      v8 = strchr(i, 47);
      if ( !v8 )
        break;
      *v8 = 0;
      if ( mkdir(v4, 0x1F8u) == -1 && *(_DWORD *)__errno() != 17 )
      {
        free(v4);
        return 0;
      }
      *v8 = 47;
    }
    free(v4);
  }
  else if ( mkdir(*a1, 0x1F8u) == -1 && *(_DWORD *)__errno() != 17 )
  {
    return 0;
  }
  return 1;
}

