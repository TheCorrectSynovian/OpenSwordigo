/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567890
 * Mangled: sub_567890
 * Demangled: sub_567890
 *
 * Callers: 20
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x0000000000536618  sub_536618
 *   0x000000000053797C  sub_53797C
 *   0x0000000000538714  sub_538714
 *   0x00000000005390F0  sub_5390F0
 *   0x0000000000539A80  sub_539A80
 *   0x000000000053A47C  sub_53A47C
 *   0x000000000053AE2C  sub_53AE2C
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *   0x0000000000558854  sub_558854
 *   0x0000000000559B48  sub_559B48
 *   0x000000000055A870  sub_55A870
 *   0x000000000055B1A0  sub_55B1A0
 *   0x000000000055BABC  sub_55BABC
 *   0x000000000055C444  sub_55C444
 *   0x000000000055CDD8  sub_55CDD8
 *
 * Callees: 1
 *   0x0000000000567088  sub_567088
 *
 * Referenced strings: 10
 *   insn=0x00000000005678A4 string=0x00000000005678A8 "5"
 *   insn=0x00000000005678B0 string=0x00000000005678B4 "4"
 *   insn=0x00000000005678C0 string=0x00000000005678C4 "_"
 *   insn=0x00000000005678D4 string=0x00000000005678D8 "`"
 *   insn=0x00000000005678E4 string=0x00000000005678EC "a"
 *   insn=0x00000000005678EC string=0x00000000005678F0 ""`"
 *   insn=0x00000000005678F0 string=0x00000000005678F4 "_"
 *   insn=0x00000000005678F8 string=0x000000000056790C "4"
 *   insn=0x000000000056790C string=0x0000000000567910 "?"
 *   insn=0x0000000000567910 string=0x0000000000567914 "?h48"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_567890(_BYTE **a1, char a2)
{
  _BYTE *v3; // x0
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 *result; // x0
  _BYTE *v8; // x1

  v3 = *a1;
  v5 = *((_QWORD *)v3 - 3);
  v6 = v5 + 1;
  if ( (unsigned __int64)(v5 + 1) > *((_QWORD *)v3 - 2) || *((int *)v3 - 2) > 0 )
  {
    sub_567088(a1, v5 + 1);
    v3 = *a1;
    v5 = *((_QWORD *)*a1 - 3);
  }
  v3[v5] = a2;
  result = &qword_6FD2E0;
  v8 = *a1;
  if ( *a1 - 24 != (_BYTE *)&qword_6FD2E0 )
  {
    *((_QWORD *)v8 - 3) = v6;
    *((_DWORD *)v8 - 2) = 0;
    v8[v6] = 0;
  }
  return result;
}

