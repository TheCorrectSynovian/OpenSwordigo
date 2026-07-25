/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005147E4
 * Mangled: _ZN11CPVRTString6appendEmc
 * Demangled: CPVRTString::append(ulong,char)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 17
 *   insn=0x00000000005147FC string=0x0000000000514800 "y"A"
 *   insn=0x0000000000514804 string=0x0000000000514808 "u"
 *   insn=0x0000000000514810 string=0x0000000000514814 "7"
 *   insn=0x0000000000514818 string=0x000000000051481C """
 *   insn=0x0000000000514824 string=0x0000000000514828 """
 *   insn=0x0000000000514824 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000514830 string=0x0000000000514834 "w"
 *   insn=0x0000000000514838 string=0x00000000001FBBB0 "0'"
 *   insn=0x000000000051484C string=0x0000000000514850 "7"
 *   insn=0x0000000000514854 string=0x00000000001FBC40 "0'"
 *   insn=0x000000000051485C string=0x0000000000514860 "`"
 *   insn=0x0000000000514860 string=0x0000000000514864 ""
 *   insn=0x0000000000514868 string=0x000000000051486C "h\n"
 *   insn=0x000000000051486C string=0x0000000000514870 "`"
 *   insn=0x0000000000514870 string=0x0000000000514874 "["
 *   insn=0x0000000000514874 string=0x0000000000514878 "u"
 *   insn=0x0000000000514874 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

CPVRTString *__fastcall CPVRTString::append(CPVRTString *this, size_t a2, int a3)
{
  __int64 v4; // x25
  char *v6; // x21
  unsigned __int64 v8; // x23
  char *v9; // x24
  char *v10; // x0
  char *v11; // x0

  v4 = *((_QWORD *)this + 2);
  v6 = (char *)*((_QWORD *)this + 1);
  v8 = a2 + v4 + 1;
  if ( *((_QWORD *)this + 3) < v8 )
  {
    v9 = (char *)malloc(a2 + v4 + 1);
    *((_QWORD *)this + 3) = v8;
    memmove(v9, v6, v4 + 1);
    v6 = v9;
  }
  v10 = &v6[v4];
  if ( a2 )
  {
    memset(v10, a3, a2);
    v10 = &v6[v4 + a2];
  }
  *v10 = 0;
  v11 = (char *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 2) += a2;
  if ( v6 != v11 )
  {
    free(v11);
    *((_QWORD *)this + 1) = v6;
  }
  return this;
}

