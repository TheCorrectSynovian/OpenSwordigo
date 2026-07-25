/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E04B4
 * Mangled: sub_4E04B4
 * Demangled: sub_4E04B4
 *
 * Callers: 1
 *   0x00000000004E03C4  sub_4E03C4
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 7
 *   insn=0x00000000004E04C4 string=0x00000000004E04C8 "U"
 *   insn=0x00000000004E04D0 string=0x00000000004E04D4 "t"
 *   insn=0x00000000004E04E8 string=0x00000000004E04EC "q["
 *   insn=0x00000000004E04EC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004E0504 string=0x00000000004E0508 "t"
 *   insn=0x00000000004E0510 string=0x00000000004E0514 "g["
 *   insn=0x00000000004E0518 string=0x00000000004E051C "e["
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_4E04B4()
{
  _QWORD *v0; // x19
  _QWORD *v1; // x20
  __int64 v2; // x22
  __int64 i; // x23
  _QWORD *v4; // x0
  _QWORD *v5; // x24

  v0 = (_QWORD *)qword_6EA080;
  if ( qword_6EA080 )
  {
    v1 = *(_QWORD **)(qword_6EA080 + 8);
    v2 = *(_QWORD *)(qword_6EA080 + 16);
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)v1[i];
        if ( v4 )
        {
          do
          {
            v5 = (_QWORD *)v4[6];
            operator delete(v4);
            v4 = v5;
          }
          while ( v5 );
        }
        v1[i] = 0;
      }
      v1 = (_QWORD *)v0[1];
    }
    v0[3] = 0;
    operator delete(v1);
    operator delete(v0);
  }
  qword_6EA080 = 0;
}

