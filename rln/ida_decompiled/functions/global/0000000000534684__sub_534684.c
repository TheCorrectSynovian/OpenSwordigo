/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000534684
 * Mangled: sub_534684
 * Demangled: sub_534684
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000052EE14  sub_52EE14
 *   0x0000000000533538  sub_533538
 *
 * Referenced strings: 16
 *   insn=0x0000000000534708 string=0x000000000053470C "T|@"
 *   insn=0x0000000000534710 string=0x0000000000534714 "?"
 *   insn=0x000000000053472C string=0x0000000000534730 "?"
 *   insn=0x0000000000534764 string=0x0000000000534768 "9"
 *   insn=0x0000000000534784 string=0x0000000000534788 "?"
 *   insn=0x0000000000534788 string=0x000000000053478C """
 *   insn=0x0000000000534798 string=0x000000000053479C "b"
 *   insn=0x000000000053479C string=0x00000000005347A0 "?"
 *   insn=0x00000000005347A4 string=0x00000000005347A8 "8"
 *   insn=0x00000000005347A4 string=0x00000000005347D4 "a"
 *   insn=0x00000000005347B4 string=0x00000000005347B8 "!$@"
 *   insn=0x00000000005347B8 string=0x00000000005347BC " "
 *   insn=0x00000000005347C0 string=0x00000000005347C4 " "
 *   insn=0x00000000005347C4 string=0x00000000005347C8 "@"
 *   insn=0x00000000005347D4 string=0x00000000005347D8 "!$@"
 *   insn=0x00000000005347D8 string=0x00000000005347DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_534684(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8)
{
  _QWORD *v13; // x0
  _QWORD *v14; // x0
  int v15; // w1
  _QWORD *v16; // x19
  int v17; // w25
  int v18; // w0

  v13 = sub_52EE14(a6 + 208);
  v14 = sub_533538(a1, a2, a3, a4, a5, a6, a7, a8, *(const char **)(v13[2] + 16LL));
  v16 = v14;
  if ( !v14 || v15 == -1 && v14[2] >= v14[3] && (*(unsigned int (__fastcall **)(_QWORD *))(*v14 + 72LL))(v14) == -1 )
  {
    v16 = 0;
    v17 = 1;
    if ( !a4 )
    {
LABEL_8:
      *a7 |= 2u;
      return v16;
    }
  }
  else
  {
    v17 = 0;
    if ( !a4 )
      return v16;
  }
  v18 = 0;
  if ( (_DWORD)a5 == -1 )
    v18 = a4[2] >= a4[3] && (*(__int64 (__fastcall **)(_QWORD *))(*a4 + 72LL))(a4) == -1;
  if ( v17 == v18 )
    goto LABEL_8;
  return v16;
}

