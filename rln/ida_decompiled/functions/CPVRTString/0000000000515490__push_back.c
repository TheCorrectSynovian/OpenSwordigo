/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515490
 * Mangled: _ZN11CPVRTString9push_backEc
 * Demangled: CPVRTString::push_back(char)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 18
 *   insn=0x00000000005154A8 string=0x00000000005154AC "t"
 *   insn=0x00000000005154B0 string=0x00000000005154B4 "h"
 *   insn=0x00000000005154BC string=0x00000000005154C0 "7"
 *   insn=0x00000000005154C4 string=0x00000000005154C8 """
 *   insn=0x00000000005154CC string=0x00000000005154D0 "h"
 *   insn=0x00000000005154D0 string=0x00000000005154D4 """
 *   insn=0x00000000005154D0 string=0x00000000001F5E70 "P'"
 *   insn=0x00000000005154DC string=0x00000000005154E0 "w"
 *   insn=0x00000000005154E4 string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000005154FC string=0x0000000000515500 "6"
 *   insn=0x0000000000515504 string=0x00000000001FBC40 "0'"
 *   insn=0x000000000051550C string=0x0000000000515510 "`"
 *   insn=0x0000000000515510 string=0x0000000000515514 ""
 *   insn=0x0000000000515518 string=0x000000000051551C "h\n"
 *   insn=0x000000000051551C string=0x0000000000515520 "`"
 *   insn=0x0000000000515520 string=0x0000000000515524 "/"
 *   insn=0x0000000000515524 string=0x0000000000515528 "t"
 *   insn=0x0000000000515524 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTString::push_back(CPVRTString *this, char a2)
{
  char *v3; // x20
  __int64 v4; // x25
  size_t v6; // x21
  unsigned __int64 v7; // x23
  char *v8; // x24
  char *v9; // x0
  char *v10; // x0

  v3 = (char *)*((_QWORD *)this + 1);
  v4 = *((_QWORD *)this + 2);
  v6 = a2;
  v7 = a2 + v4 + 1;
  if ( *((_QWORD *)this + 3) < v7 )
  {
    v8 = (char *)malloc(a2 + v4 + 1);
    *((_QWORD *)this + 3) = v7;
    memmove(v8, v3, v4 + 1);
    v3 = v8;
  }
  v9 = &v3[v4];
  if ( a2 )
  {
    memset(v9, 1, v6);
    v9 = &v3[v4 + v6];
  }
  *v9 = 0;
  v10 = (char *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 2) += v6;
  if ( v3 != v10 )
  {
    free(v10);
    *((_QWORD *)this + 1) = v3;
  }
}

